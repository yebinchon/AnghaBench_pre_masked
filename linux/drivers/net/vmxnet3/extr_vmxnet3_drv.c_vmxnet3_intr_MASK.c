
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ type; scalar_t__ mask_mode; } ;
struct vmxnet3_adapter {TYPE_2__* rx_queue; TYPE_1__ intr; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct vmxnet3_adapter*,int ) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 struct vmxnet3_adapter* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct vmxnet3_adapter*) ;

__attribute__((used)) static irqreturn_t
FUNC_5(int VAR_5, void *VAR_6)
{
 struct net_device *VAR_7 = VAR_6;
 struct vmxnet3_adapter *VAR_8 = FUNC_2(VAR_7);

 if (VAR_8->intr.type == VAR_3) {
  u32 VAR_9 = FUNC_0(VAR_8, VAR_4);
  if (FUNC_3(VAR_9 == 0))

   return VAR_1;
 }



 if (VAR_8->intr.mask_mode == VAR_2)
  FUNC_4(VAR_8);

 FUNC_1(&VAR_8->rx_queue[0].napi);

 return VAR_0;
}
