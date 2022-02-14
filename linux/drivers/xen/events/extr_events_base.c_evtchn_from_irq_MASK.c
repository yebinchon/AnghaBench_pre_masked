
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int evtchn; } ;


 scalar_t__ FUNC_0 (int,char*,unsigned int) ;
 TYPE_1__* FUNC_1 (unsigned int) ;
 unsigned int VAR_0 ;

unsigned int FUNC_2(unsigned VAR_1)
{
 if (FUNC_0(VAR_1 >= VAR_0, "Invalid irq %d!\n", VAR_1))
  return 0;

 return FUNC_1(VAR_1)->evtchn;
}
