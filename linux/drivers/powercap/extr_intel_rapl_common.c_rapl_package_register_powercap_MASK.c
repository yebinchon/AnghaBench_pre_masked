
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rapl_package {int nr_domains; TYPE_1__* priv; int name; struct rapl_domain* domains; struct powercap_zone* power_zone; } ;
struct rapl_domain {size_t id; int power_zone; int name; } ;
struct powercap_zone {int dummy; } ;
struct TYPE_2__ {int control_type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct powercap_zone*) ;
 int FUNC_1 (struct powercap_zone*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct rapl_domain*) ;
 struct powercap_zone* FUNC_3 (int *,int ,int ,struct powercap_zone*,int *,int,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (char*,int ,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct rapl_package*) ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_8(struct rapl_package *VAR_4)
{
 struct rapl_domain *VAR_5;
 struct powercap_zone *VAR_6 = ((void*)0);
 int VAR_7, VAR_8;


 FUNC_7(VAR_4);


 for (VAR_5 = VAR_4->domains; VAR_5 < VAR_4->domains + VAR_4->nr_domains; VAR_5++) {
  if (VAR_5->id == VAR_1) {
   VAR_7 = FUNC_2(VAR_5);
   FUNC_5("register package domain %s\n", VAR_4->name);
   VAR_6 = FUNC_3(&VAR_5->power_zone,
         VAR_4->priv->control_type, VAR_4->name,
         ((void*)0), &VAR_3[VAR_5->id], VAR_7,
         &VAR_2);
   if (FUNC_0(VAR_6)) {
    FUNC_5("failed to register power zone %s\n",
      VAR_4->name);
    return FUNC_1(VAR_6);
   }

   VAR_4->power_zone = VAR_6;

   break;
  }
 }
 if (!VAR_6) {
  FUNC_6("no package domain found, unknown topology!\n");
  return -VAR_0;
 }

 for (VAR_5 = VAR_4->domains; VAR_5 < VAR_4->domains + VAR_4->nr_domains; VAR_5++) {
  if (VAR_5->id == VAR_1)
   continue;

  VAR_7 = FUNC_2(VAR_5);
  VAR_6 = FUNC_3(&VAR_5->power_zone,
          VAR_4->priv->control_type,
          VAR_5->name, VAR_4->power_zone,
          &VAR_3[VAR_5->id], VAR_7,
          &VAR_2);

  if (FUNC_0(VAR_6)) {
   FUNC_5("failed to register power_zone, %s:%s\n",
     VAR_4->name, VAR_5->name);
   VAR_8 = FUNC_1(VAR_6);
   goto err_cleanup;
  }
 }
 return 0;

err_cleanup:




 while (--VAR_5 >= VAR_4->domains) {
  FUNC_5("unregister %s domain %s\n", VAR_4->name, VAR_5->name);
  FUNC_4(VAR_4->priv->control_type,
      &VAR_5->power_zone);
 }

 return VAR_8;
}
