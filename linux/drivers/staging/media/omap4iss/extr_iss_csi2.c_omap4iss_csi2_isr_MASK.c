
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iss_pipeline {int error; } ;
struct iss_device {int dev; } ;
struct TYPE_2__ {int entity; } ;
struct iss_csi2_device {int * contexts; int regs1; struct iss_device* iss; int available; TYPE_1__ subdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct iss_csi2_device*,int *) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct iss_device*,int ,int ) ;
 int FUNC_3 (struct iss_device*,int ,int ,int) ;
 struct iss_pipeline* FUNC_4 (int *) ;

void FUNC_5(struct iss_csi2_device *VAR_9)
{
 struct iss_pipeline *VAR_10 = FUNC_4(&VAR_9->subdev.entity);
 u32 VAR_11, VAR_12;
 struct iss_device *VAR_13 = VAR_9->iss;

 if (!VAR_9->available)
  return;

 VAR_11 = FUNC_2(VAR_9->iss, VAR_9->regs1, VAR_1);
 FUNC_3(VAR_9->iss, VAR_9->regs1, VAR_1, VAR_11);


 if (VAR_11 & VAR_2) {
  VAR_12 = FUNC_2(VAR_9->iss, VAR_9->regs1,
      VAR_0);
  FUNC_3(VAR_9->iss, VAR_9->regs1, VAR_0,
         VAR_12);
  FUNC_1(VAR_13->dev, "CSI2: ComplexIO Error IRQ %x\n",
   VAR_12);
  VAR_10->error = 1;
 }

 if (VAR_11 & (VAR_7 |
         VAR_8 |
         VAR_5 |
         VAR_2 |
         VAR_6)) {
  FUNC_1(VAR_13->dev,
   "CSI2 Err: OCP:%d SHORT:%d ECC:%d CPXIO:%d OVF:%d\n",
   VAR_11 & VAR_7 ? 1 : 0,
   VAR_11 & VAR_8 ? 1 : 0,
   VAR_11 & VAR_5 ? 1 : 0,
   VAR_11 & VAR_2 ? 1 : 0,
   VAR_11 & VAR_6 ? 1 : 0);
  VAR_10->error = 1;
 }


 if (VAR_11 & VAR_3)
  FUNC_0(VAR_9, &VAR_9->contexts[0]);

 if (VAR_11 & VAR_4)
  FUNC_1(VAR_13->dev, "CSI2: ECC correction done\n");
}
