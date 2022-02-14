
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct net_device {int dummy; } ;
struct hix5hd2_priv {int napi; int mac_core_clk; int mac_ifc_clk; int phy_mode; int phy_node; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct hix5hd2_priv*) ;
 int FUNC_3 (struct hix5hd2_priv*) ;
 int FUNC_4 (struct hix5hd2_priv*) ;
 int FUNC_5 (struct hix5hd2_priv*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct net_device*,char*,int) ;
 struct hix5hd2_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 struct phy_device* FUNC_11 (struct net_device*,int ,int *,int ,int ) ;
 int FUNC_12 (struct phy_device*) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_2)
{
 struct hix5hd2_priv *VAR_3 = FUNC_8(VAR_2);
 struct phy_device *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3->mac_core_clk);
 if (VAR_5 < 0) {
  FUNC_7(VAR_2, "failed to enable mac core clk %d\n", VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_1(VAR_3->mac_ifc_clk);
 if (VAR_5 < 0) {
  FUNC_0(VAR_3->mac_core_clk);
  FUNC_7(VAR_2, "failed to enable mac ifc clk %d\n", VAR_5);
  return VAR_5;
 }

 VAR_4 = FUNC_11(VAR_2, VAR_3->phy_node,
        &VAR_1, 0, VAR_3->phy_mode);
 if (!VAR_4) {
  FUNC_0(VAR_3->mac_ifc_clk);
  FUNC_0(VAR_3->mac_core_clk);
  return -VAR_0;
 }

 FUNC_12(VAR_4);
 FUNC_2(VAR_3);
 FUNC_5(VAR_3);

 FUNC_9(VAR_2);
 FUNC_10(VAR_2);
 FUNC_6(&VAR_3->napi);

 FUNC_4(VAR_3);
 FUNC_3(VAR_3);

 return 0;
}
