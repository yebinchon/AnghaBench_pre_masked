
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ser; } ;
struct cardstate {TYPE_2__ hw; } ;
struct TYPE_3__ {int dead_cmp; int refcnt; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct cardstate *VAR_0)
{
 if (FUNC_0(&VAR_0->hw.ser->refcnt))
  FUNC_1(&VAR_0->hw.ser->dead_cmp);
}
