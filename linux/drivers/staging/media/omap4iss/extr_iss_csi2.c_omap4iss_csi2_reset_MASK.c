
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iss_csi2_device {int regs1; TYPE_2__* iss; TYPE_1__* phy; int available; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int phy_regs; scalar_t__ phy_in_use; } ;


 int VAR_0 ;
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
 int FUNC_0 (int ,char*) ;
 unsigned int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int,int ) ;

int FUNC_5(struct iss_csi2_device *VAR_13)
{
 unsigned int VAR_14;

 if (!VAR_13->available)
  return -VAR_10;

 if (VAR_13->phy->phy_in_use)
  return -VAR_9;

 FUNC_3(VAR_13->iss, VAR_13->regs1, VAR_2,
      VAR_6);

 VAR_14 = FUNC_1(
  FUNC_2(VAR_13->iss, VAR_13->regs1, VAR_7) &
  VAR_8, 500, 100, 200);
 if (VAR_14) {
  FUNC_0(VAR_13->iss->dev, "CSI2: Soft reset timeout!\n");
  return -VAR_9;
 }

 FUNC_3(VAR_13->iss, VAR_13->regs1, VAR_0,
      VAR_1);

 VAR_14 = FUNC_1(
  FUNC_2(VAR_13->iss, VAR_13->phy->phy_regs, VAR_11) &
  VAR_12, 10000, 100, 500);
 if (VAR_14) {
  FUNC_0(VAR_13->iss->dev, "CSI2: CSI2_96M_FCLK reset timeout!\n");
  return -VAR_9;
 }

 FUNC_4(VAR_13->iss, VAR_13->regs1, VAR_2,
         VAR_4 |
         VAR_3,
         VAR_5);

 return 0;
}
