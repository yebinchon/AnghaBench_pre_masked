
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_mac_cb {int * phy_dev; int fw_port; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct hns_mac_cb *VAR_0)
{
 if (!FUNC_2(VAR_0->fw_port) || !VAR_0->phy_dev)
  return;

 FUNC_1(VAR_0->phy_dev);
 FUNC_0(VAR_0->phy_dev);

 VAR_0->phy_dev = ((void*)0);
}
