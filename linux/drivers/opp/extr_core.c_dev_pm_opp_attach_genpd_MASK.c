
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opp_table {int required_opp_count; int genpd_virt_dev_lock; struct device** genpd_virt_devs; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct opp_table* FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct opp_table*) ;
 int FUNC_4 (struct device*,char*,...) ;
 struct device* FUNC_5 (struct device*,char const*) ;
 struct opp_table* FUNC_6 (struct device*) ;
 int FUNC_7 (struct opp_table*) ;
 struct device** FUNC_8 (int,int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

struct opp_table *FUNC_11(struct device *VAR_4,
  const char **VAR_5, struct device ***VAR_6)
{
 struct opp_table *VAR_7;
 struct device *VAR_8;
 int VAR_9 = 0, VAR_10 = -VAR_0;
 const char **VAR_11 = VAR_5;

 VAR_7 = FUNC_6(VAR_4);
 if (!VAR_7)
  return FUNC_0(-VAR_1);






 if (!VAR_7->required_opp_count) {
  VAR_10 = -VAR_2;
  goto put_table;
 }

 FUNC_9(&VAR_7->genpd_virt_dev_lock);

 VAR_7->genpd_virt_devs = FUNC_8(VAR_7->required_opp_count,
          sizeof(*VAR_7->genpd_virt_devs),
          VAR_3);
 if (!VAR_7->genpd_virt_devs)
  goto unlock;

 while (*VAR_11) {
  if (VAR_9 >= VAR_7->required_opp_count) {
   FUNC_4(VAR_4, "Index can't be greater than required-opp-count - 1, %s (%d : %d)\n",
    *VAR_11, VAR_7->required_opp_count, VAR_9);
   goto err;
  }

  if (VAR_7->genpd_virt_devs[VAR_9]) {
   FUNC_4(VAR_4, "Genpd virtual device already set %s\n",
    *VAR_11);
   goto err;
  }

  VAR_8 = FUNC_5(VAR_4, *VAR_11);
  if (FUNC_1(VAR_8)) {
   VAR_10 = FUNC_2(VAR_8);
   FUNC_4(VAR_4, "Couldn't attach to pm_domain: %d\n", VAR_10);
   goto err;
  }

  VAR_7->genpd_virt_devs[VAR_9] = VAR_8;
  VAR_9++;
  VAR_11++;
 }

 if (VAR_6)
  *VAR_6 = VAR_7->genpd_virt_devs;
 FUNC_10(&VAR_7->genpd_virt_dev_lock);

 return VAR_7;

err:
 FUNC_3(VAR_7);
unlock:
 FUNC_10(&VAR_7->genpd_virt_dev_lock);

put_table:
 FUNC_7(VAR_7);

 return FUNC_0(VAR_10);
}
