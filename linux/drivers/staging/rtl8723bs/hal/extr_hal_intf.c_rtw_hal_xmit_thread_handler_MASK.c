
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* xmit_thread_handler ) (struct adapter*) ;} ;
struct adapter {TYPE_1__ HalFunc; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*) ;

s32 FUNC_1(struct adapter *VAR_1)
{
 if (VAR_1->HalFunc.xmit_thread_handler)
  return VAR_1->HalFunc.xmit_thread_handler(VAR_1);
 return VAR_0;
}
