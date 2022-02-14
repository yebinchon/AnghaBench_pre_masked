
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct isp_pipeline {int error; } ;
struct isp_device {int dev; } ;
struct TYPE_2__ {int entity; } ;
struct isp_csi2_device {int * contexts; int stopping; int wait; int regs1; int available; struct isp_device* isp; TYPE_1__ subdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct isp_csi2_device*,int *) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct isp_device*,int ,int ) ;
 int FUNC_4 (struct isp_device*,int,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 struct isp_pipeline* FUNC_6 (int *) ;

void FUNC_7(struct isp_csi2_device *VAR_9)
{
 struct isp_pipeline *VAR_10 = FUNC_6(&VAR_9->subdev.entity);
 u32 VAR_11, VAR_12;
 struct isp_device *VAR_13 = VAR_9->isp;

 if (!VAR_9->available)
  return;

 VAR_11 = FUNC_3(VAR_13, VAR_9->regs1, VAR_0);
 FUNC_4(VAR_13, VAR_11, VAR_9->regs1, VAR_0);


 if (VAR_11 & VAR_1) {
  VAR_12 = FUNC_3(VAR_13, VAR_9->regs1,
       VAR_8);
  FUNC_4(VAR_13, VAR_12,
          VAR_9->regs1, VAR_8);
  FUNC_2(VAR_13->dev, "CSI2: ComplexIO Error IRQ %x\n",
   VAR_12);
  VAR_10->error = 1;
 }

 if (VAR_11 & (VAR_6 |
         VAR_7 |
         VAR_4 |
         VAR_2 |
         VAR_5)) {
  FUNC_2(VAR_13->dev,
   "CSI2 Err: OCP:%d, Short_pack:%d, ECC:%d, CPXIO2:%d, FIFO_OVF:%d,\n",
   (VAR_11 &
    VAR_6) ? 1 : 0,
   (VAR_11 &
    VAR_7) ? 1 : 0,
   (VAR_11 &
    VAR_4) ? 1 : 0,
   (VAR_11 &
    VAR_2) ? 1 : 0,
   (VAR_11 &
    VAR_5) ? 1 : 0);
  VAR_10->error = 1;
 }

 if (FUNC_5(&VAR_9->wait, &VAR_9->stopping))
  return;


 if (VAR_11 & FUNC_0(0))
  FUNC_1(VAR_9, &VAR_9->contexts[0]);

 if (VAR_11 & VAR_3)
  FUNC_2(VAR_13->dev, "CSI2: ECC correction done\n");
}
