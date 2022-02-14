
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {struct device* dev; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct xgbe_prv_data*,int ,scalar_t__) ;
 int FUNC_1 (struct device*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct xgbe_prv_data *VAR_10)
{
 struct device *VAR_11 = VAR_10->dev;

 FUNC_1(VAR_11, "\n************* PHY Reg dump **********************\n");

 FUNC_1(VAR_11, "PCS Control Reg (%#06x) = %#06x\n", VAR_2,
  FUNC_0(VAR_10, VAR_8, VAR_2));
 FUNC_1(VAR_11, "PCS Status Reg (%#06x) = %#06x\n", VAR_9,
  FUNC_0(VAR_10, VAR_8, VAR_9));
 FUNC_1(VAR_11, "Phy Id (PHYS ID 1 %#06x)= %#06x\n", VAR_3,
  FUNC_0(VAR_10, VAR_8, VAR_3));
 FUNC_1(VAR_11, "Phy Id (PHYS ID 2 %#06x)= %#06x\n", VAR_4,
  FUNC_0(VAR_10, VAR_8, VAR_4));
 FUNC_1(VAR_11, "Devices in Package (%#06x)= %#06x\n", VAR_5,
  FUNC_0(VAR_10, VAR_8, VAR_5));
 FUNC_1(VAR_11, "Devices in Package (%#06x)= %#06x\n", VAR_6,
  FUNC_0(VAR_10, VAR_8, VAR_6));

 FUNC_1(VAR_11, "Auto-Neg Control Reg (%#06x) = %#06x\n", VAR_2,
  FUNC_0(VAR_10, VAR_7, VAR_2));
 FUNC_1(VAR_11, "Auto-Neg Status Reg (%#06x) = %#06x\n", VAR_9,
  FUNC_0(VAR_10, VAR_7, VAR_9));
 FUNC_1(VAR_11, "Auto-Neg Ad Reg 1 (%#06x) = %#06x\n",
  VAR_0,
  FUNC_0(VAR_10, VAR_7, VAR_0));
 FUNC_1(VAR_11, "Auto-Neg Ad Reg 2 (%#06x) = %#06x\n",
  VAR_0 + 1,
  FUNC_0(VAR_10, VAR_7, VAR_0 + 1));
 FUNC_1(VAR_11, "Auto-Neg Ad Reg 3 (%#06x) = %#06x\n",
  VAR_0 + 2,
  FUNC_0(VAR_10, VAR_7, VAR_0 + 2));
 FUNC_1(VAR_11, "Auto-Neg Completion Reg (%#06x) = %#06x\n",
  VAR_1,
  FUNC_0(VAR_10, VAR_7, VAR_1));

 FUNC_1(VAR_11, "\n*************************************************\n");
}
