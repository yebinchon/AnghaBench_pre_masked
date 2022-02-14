
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kaweth_device {int suspend_lowmem_ctrl; TYPE_3__* dev; TYPE_1__* intf; int lowmem_work; int irq_urb; } ;
typedef int gfp_t ;
struct TYPE_6__ {int devpath; TYPE_2__* bus; } ;
struct TYPE_5__ {int bus_name; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,int ,int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct kaweth_device *VAR_2, gfp_t VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_3 (VAR_2->irq_urb, VAR_3);
 if (FUNC_2(VAR_4 == -VAR_0)) {
  VAR_2->suspend_lowmem_ctrl = 1;
  FUNC_1(&VAR_2->lowmem_work, VAR_1/4);
 } else {
  VAR_2->suspend_lowmem_ctrl = 0;
 }

 if (VAR_4)
  FUNC_0(&VAR_2->intf->dev,
   "can't resubmit intr, %s-%s, status %d\n",
   VAR_2->dev->bus->bus_name,
   VAR_2->dev->devpath, VAR_4);
}
