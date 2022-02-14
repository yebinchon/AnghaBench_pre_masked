
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* shutdown ) () ;} ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;

void FUNC_3(void)
{
 FUNC_0(&VAR_1);
 --VAR_2;

 if ((VAR_2 == 0) && VAR_0)
  VAR_0->shutdown();

 FUNC_1(&VAR_1);
}
