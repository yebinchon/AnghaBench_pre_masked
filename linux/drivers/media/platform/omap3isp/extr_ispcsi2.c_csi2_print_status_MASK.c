
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_device {int dev; } ;
struct isp_csi2_device {int regs1; int available; struct isp_device* isp; } ;


 int FUNC_0 (struct isp_device*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static void FUNC_10(struct isp_csi2_device *VAR_13)
{
 struct isp_device *VAR_14 = VAR_13->isp;

 if (!VAR_13->available)
  return;

 FUNC_9(VAR_14->dev, "-------------CSI2 Register dump-------------\n");

 FUNC_0(VAR_14, VAR_13->regs1, VAR_10);
 FUNC_0(VAR_14, VAR_13->regs1, VAR_11);
 FUNC_0(VAR_14, VAR_13->regs1, VAR_4);
 FUNC_0(VAR_14, VAR_13->regs1, VAR_5);
 FUNC_0(VAR_14, VAR_13->regs1, VAR_0);
 FUNC_0(VAR_14, VAR_13->regs1, VAR_1);
 FUNC_0(VAR_14, VAR_13->regs1, VAR_3);
 FUNC_0(VAR_14, VAR_13->regs1, VAR_6);
 FUNC_0(VAR_14, VAR_13->regs1, VAR_8);
 FUNC_0(VAR_14, VAR_13->regs1, VAR_9);
 FUNC_0(VAR_14, VAR_13->regs1, VAR_7);
 FUNC_0(VAR_14, VAR_13->regs1, VAR_2);
 FUNC_0(VAR_14, VAR_13->regs1, VAR_12);
 FUNC_0(VAR_14, VAR_13->regs1, FUNC_1(0));
 FUNC_0(VAR_14, VAR_13->regs1, FUNC_2(0));
 FUNC_0(VAR_14, VAR_13->regs1, FUNC_4(0));
 FUNC_0(VAR_14, VAR_13->regs1, FUNC_5(0));
 FUNC_0(VAR_14, VAR_13->regs1, FUNC_6(0));
 FUNC_0(VAR_14, VAR_13->regs1, FUNC_7(0));
 FUNC_0(VAR_14, VAR_13->regs1, FUNC_8(0));
 FUNC_0(VAR_14, VAR_13->regs1, FUNC_3(0));

 FUNC_9(VAR_14->dev, "--------------------------------------------\n");
}
