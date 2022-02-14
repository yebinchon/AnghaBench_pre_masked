
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct isp_device {scalar_t__ revision; scalar_t__ autoidle; int dev; } ;
struct isp_csi2_device {int regs1; TYPE_1__* phy; int available; struct isp_device* isp; } ;
struct TYPE_2__ {int phy_regs; scalar_t__ entity; } ;


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
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct isp_device*,int ,int ,int,int) ;
 int FUNC_2 (struct isp_device*,int ,int ) ;
 int FUNC_3 (struct isp_device*,int ,int ,int ) ;
 int FUNC_4 (int) ;

int FUNC_5(struct isp_csi2_device *VAR_15)
{
 struct isp_device *VAR_16 = VAR_15->isp;
 u8 VAR_17 = 0;
 u32 VAR_18;
 int VAR_19;

 if (!VAR_15->available)
  return -VAR_1;

 if (VAR_15->phy->entity)
  return -VAR_0;

 FUNC_3(VAR_16, VAR_15->regs1, VAR_4,
      VAR_9);

 do {
  VAR_18 = FUNC_2(VAR_16, VAR_15->regs1, VAR_10) &
        VAR_11;
  if (VAR_18 == VAR_11)
   break;
  VAR_17++;
  if (VAR_17 < 5)
   FUNC_4(100);
 } while (VAR_17 < 5);

 if (VAR_17 == 5) {
  FUNC_0(VAR_16->dev, "CSI2: Soft reset try count exceeded!\n");
  return -VAR_0;
 }

 if (VAR_16->revision == VAR_14)
  FUNC_3(VAR_16, VAR_15->regs1, VAR_2,
       VAR_3);

 VAR_19 = 100;
 do {
  VAR_18 = FUNC_2(VAR_16, VAR_15->phy->phy_regs, VAR_12)
      & VAR_13;
  if (VAR_18 == VAR_13)
   break;
  FUNC_4(100);
 } while (--VAR_19 > 0);

 if (VAR_19 == 0) {
  FUNC_0(VAR_16->dev,
   "CSI2: Reset for CSI2_96M_FCLK domain Failed!\n");
  return -VAR_0;
 }

 if (VAR_16->autoidle)
  FUNC_1(VAR_16, VAR_15->regs1, VAR_4,
    VAR_6 |
    VAR_5,
    VAR_8 |
    ((VAR_16->revision == VAR_14) ?
     VAR_5 : 0));
 else
  FUNC_1(VAR_16, VAR_15->regs1, VAR_4,
    VAR_6 |
    VAR_5,
    VAR_7);

 return 0;
}
