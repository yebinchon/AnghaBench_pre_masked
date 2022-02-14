
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ phydev; } ;
struct hix5hd2_priv {int mac_core_clk; int mac_ifc_clk; int napi; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct hix5hd2_priv*) ;
 int FUNC_2 (struct hix5hd2_priv*) ;
 int FUNC_3 (struct hix5hd2_priv*) ;
 int FUNC_4 (int *) ;
 struct hix5hd2_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_0)
{
 struct hix5hd2_priv *VAR_1 = FUNC_5(VAR_0);

 FUNC_3(VAR_1);
 FUNC_2(VAR_1);
 FUNC_4(&VAR_1->napi);
 FUNC_6(VAR_0);
 FUNC_1(VAR_1);

 if (VAR_0->phydev) {
  FUNC_8(VAR_0->phydev);
  FUNC_7(VAR_0->phydev);
 }

 FUNC_0(VAR_1->mac_ifc_clk);
 FUNC_0(VAR_1->mac_core_clk);

 return 0;
}
