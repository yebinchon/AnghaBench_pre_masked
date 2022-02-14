
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;
struct phy_device {struct ip101a_g_phy_priv* priv; TYPE_1__ mdio; } ;
struct ip101a_g_phy_priv {int sel_intr32; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (struct device*,char*) ;
 struct ip101a_g_phy_priv* FUNC_2 (struct device*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct phy_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->mdio.dev;
 struct ip101a_g_phy_priv *VAR_8;

 VAR_8 = FUNC_2(VAR_7, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;




 if (FUNC_1(VAR_7, "icplus,select-rx-error") &&
     FUNC_1(VAR_7, "icplus,select-interrupt")) {
  FUNC_0(VAR_7,
   "RXER and INTR mode cannot be selected together\n");
  return -VAR_0;
 }

 if (FUNC_1(VAR_7, "icplus,select-rx-error"))
  VAR_8->sel_intr32 = VAR_5;
 else if (FUNC_1(VAR_7, "icplus,select-interrupt"))
  VAR_8->sel_intr32 = VAR_3;
 else
  VAR_8->sel_intr32 = VAR_4;

 VAR_6->priv = VAR_8;

 return 0;
}
