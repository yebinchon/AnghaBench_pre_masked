
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qcom_slim_ctrl {int dev; scalar_t__ base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct qcom_slim_ctrl*,int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(struct qcom_slim_ctrl *VAR_14,
        u32 VAR_15)
{
 int VAR_16 = 0;

 if (VAR_15 & VAR_11)
  FUNC_3(VAR_11,
          VAR_14->base + VAR_10);

 if (VAR_15 & VAR_12) {
  u32 VAR_17 = FUNC_1(VAR_14->base + VAR_13);
  u32 VAR_18 = FUNC_1(VAR_14->base + VAR_9);
  u32 VAR_19 = FUNC_1(VAR_14->base + VAR_4);
  u32 VAR_20 = FUNC_1(VAR_14->base + VAR_1);
  u32 VAR_21 = FUNC_1(VAR_14->base + VAR_3);
  u32 VAR_22 = FUNC_1(VAR_14->base + VAR_2);
  u32 VAR_23 = FUNC_1(VAR_14->base + VAR_7);
  u32 VAR_24 = FUNC_1(VAR_14->base + VAR_6);
  u32 VAR_25 = FUNC_1(VAR_14->base + VAR_5);

  FUNC_3(VAR_12, VAR_14->base + VAR_10);

  FUNC_0(VAR_14->dev, "TX Nack MGR:int:0x%x, stat:0x%x\n",
   VAR_15, VAR_17);
  FUNC_0(VAR_14->dev, "TX Nack MGR:ie:0x%x\n", VAR_18);
  FUNC_0(VAR_14->dev, "TX Nack FRM:int:0x%x, stat:0x%x\n",
   VAR_21, VAR_19);
  FUNC_0(VAR_14->dev, "TX Nack FRM:cfg:0x%x, ie:0x%x\n",
   VAR_20, VAR_22);
  FUNC_0(VAR_14->dev, "TX Nack INTF:intr:0x%x, stat:0x%x\n",
   VAR_24, VAR_23);
  FUNC_0(VAR_14->dev, "TX Nack INTF:ie:0x%x\n",
   VAR_25);
  VAR_16 = -VAR_0;
 }

 FUNC_2(VAR_14, VAR_16);

 return VAR_8;
}
