
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpmhpd {int level_count; unsigned int* level; int corner; scalar_t__ enabled; } ;
struct generic_pm_domain {int dummy; } ;


 struct rpmhpd* FUNC_0 (struct generic_pm_domain*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rpmhpd*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct generic_pm_domain *VAR_1,
     unsigned int VAR_2)
{
 struct rpmhpd *VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = 0, VAR_5;

 FUNC_1(&VAR_0);

 for (VAR_5 = 0; VAR_5 < VAR_3->level_count; VAR_5++)
  if (VAR_2 <= VAR_3->level[VAR_5])
   break;





 if (VAR_5 == VAR_3->level_count)
  VAR_5--;

 if (VAR_3->enabled) {
  VAR_4 = FUNC_3(VAR_3, VAR_5);
  if (VAR_4)
   goto out;
 }

 VAR_3->corner = VAR_5;
out:
 FUNC_2(&VAR_0);

 return VAR_4;
}
