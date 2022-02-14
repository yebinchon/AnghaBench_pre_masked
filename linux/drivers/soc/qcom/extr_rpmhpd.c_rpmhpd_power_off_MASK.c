
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpmhpd {int enabled; int * level; } ;
struct generic_pm_domain {int dummy; } ;


 struct rpmhpd* FUNC_0 (struct generic_pm_domain*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rpmhpd*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct generic_pm_domain *VAR_1)
{
 struct rpmhpd *VAR_2 = FUNC_0(VAR_1);
 int VAR_3 = 0;

 FUNC_1(&VAR_0);

 VAR_3 = FUNC_3(VAR_2, VAR_2->level[0]);

 if (!VAR_3)
  VAR_2->enabled = 0;

 FUNC_2(&VAR_0);

 return VAR_3;
}
