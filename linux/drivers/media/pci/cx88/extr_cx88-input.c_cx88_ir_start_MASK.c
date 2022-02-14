
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cx88_core {TYPE_1__* ir; } ;
struct TYPE_2__ {scalar_t__ users; } ;


 int FUNC_0 (struct cx88_core*) ;

int FUNC_1(struct cx88_core *VAR_0)
{
 if (VAR_0->ir->users)
  return FUNC_0(VAR_0);

 return 0;
}
