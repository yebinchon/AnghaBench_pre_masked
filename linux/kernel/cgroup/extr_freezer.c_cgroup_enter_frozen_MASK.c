
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cgroup {int dummy; } ;
struct TYPE_3__ {int frozen; } ;


 int FUNC_0 (struct cgroup*) ;
 int FUNC_1 (struct cgroup*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct cgroup* FUNC_4 (TYPE_1__*) ;

void FUNC_5(void)
{
 struct cgroup *VAR_2;

 if (VAR_1->frozen)
  return;

 FUNC_2(&VAR_0);
 VAR_1->frozen = 1;
 VAR_2 = FUNC_4(VAR_1);
 FUNC_0(VAR_2);
 FUNC_1(VAR_2);
 FUNC_3(&VAR_0);
}
