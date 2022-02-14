
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xmit_frame {int dummy; } ;
struct TYPE_2__ {int (* hal_xmitframe_enqueue ) (struct adapter*,struct xmit_frame*) ;} ;
struct adapter {TYPE_1__ HalFunc; } ;
typedef int s32 ;


 int FUNC_0 (struct adapter*,struct xmit_frame*) ;

s32 FUNC_1(struct adapter *VAR_0, struct xmit_frame *VAR_1)
{
 if (VAR_0->HalFunc.hal_xmitframe_enqueue)
  return VAR_0->HalFunc.hal_xmitframe_enqueue(VAR_0, VAR_1);

 return 0;
}
