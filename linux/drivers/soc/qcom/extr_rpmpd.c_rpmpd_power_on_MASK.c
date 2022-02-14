
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpmpd {int enabled; scalar_t__ corner; } ;
struct generic_pm_domain {int dummy; } ;


 struct rpmpd* FUNC_0 (struct generic_pm_domain*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rpmpd*) ;
 int VAR_0 ;
 int FUNC_4 (struct rpmpd*,int) ;

__attribute__((used)) static int FUNC_5(struct generic_pm_domain *VAR_1)
{
 int VAR_2;
 struct rpmpd *VAR_3 = FUNC_0(VAR_1);

 FUNC_1(&VAR_0);

 VAR_2 = FUNC_4(VAR_3, 1);
 if (VAR_2)
  goto out;

 VAR_3->enabled = 1;

 if (VAR_3->corner)
  VAR_2 = FUNC_3(VAR_3);

out:
 FUNC_2(&VAR_0);

 return VAR_2;
}
