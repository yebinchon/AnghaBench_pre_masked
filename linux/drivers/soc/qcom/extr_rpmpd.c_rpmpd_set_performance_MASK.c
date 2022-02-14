
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpmpd {unsigned int max_state; unsigned int corner; scalar_t__ key; int enabled; } ;
struct generic_pm_domain {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct rpmpd* FUNC_0 (struct generic_pm_domain*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rpmpd*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct generic_pm_domain *VAR_3,
     unsigned int VAR_4)
{
 int VAR_5 = 0;
 struct rpmpd *VAR_6 = FUNC_0(VAR_3);

 if (VAR_4 > VAR_6->max_state)
  VAR_4 = VAR_6->max_state;

 FUNC_1(&VAR_2);

 VAR_6->corner = VAR_4;


 if (!VAR_6->enabled && VAR_6->key != VAR_0 &&
     VAR_6->key != VAR_1)
  goto out;

 VAR_5 = FUNC_3(VAR_6);

out:
 FUNC_2(&VAR_2);

 return VAR_5;
}
