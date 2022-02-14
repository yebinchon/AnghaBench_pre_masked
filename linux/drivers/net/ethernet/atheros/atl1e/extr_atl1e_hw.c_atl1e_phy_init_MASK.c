
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct atl1e_hw {int phy_configured; int re_autoneg; struct atl1e_adapter* adapter; } ;
struct atl1e_adapter {int netdev; } ;
typedef int s32 ;


 int FUNC_0 (struct atl1e_hw*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct atl1e_hw*) ;
 int FUNC_2 (struct atl1e_hw*) ;
 int FUNC_3 (struct atl1e_hw*) ;
 int FUNC_4 (struct atl1e_hw*,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*) ;

int FUNC_8(struct atl1e_hw *VAR_6)
{
 struct atl1e_adapter *VAR_7 = VAR_6->adapter;
 s32 VAR_8;
 u16 VAR_9;

 if (VAR_6->phy_configured) {
  if (VAR_6->re_autoneg) {
   VAR_6->re_autoneg = 0;
   return FUNC_3(VAR_6);
  }
  return 0;
 }


 FUNC_0(VAR_6, VAR_5, VAR_0);
 FUNC_5(2);
 FUNC_0(VAR_6, VAR_5, VAR_0 |
        VAR_1);
 FUNC_5(2);



 VAR_8 = FUNC_4(VAR_6, VAR_2, 0xB);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_4(VAR_6, VAR_3, 0xBC00);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_4(VAR_6, VAR_2, 0);
 if (VAR_8)
  return VAR_8;
 VAR_9 = 0x02ef;


 VAR_8 = FUNC_4(VAR_6, VAR_3, VAR_9);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_4(VAR_6, VAR_2, 0x12);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_4(VAR_6, VAR_3, 0x4C04);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_4(VAR_6, VAR_2, 0x4);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_4(VAR_6, VAR_3, 0x8BBB);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_4(VAR_6, VAR_2, 0x5);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_4(VAR_6, VAR_3, 0x2C46);
 if (VAR_8)
  return VAR_8;

 FUNC_5(1);


 VAR_8 = FUNC_4(VAR_6, VAR_4, 0xC00);
 if (VAR_8) {
  FUNC_7(VAR_7->netdev,
      "Error enable PHY linkChange Interrupt\n");
  return VAR_8;
 }

 VAR_8 = FUNC_2(VAR_6);
 if (VAR_8) {
  FUNC_7(VAR_7->netdev,
      "Error Setting up Auto-Negotiation\n");
  return VAR_8;
 }

 FUNC_6(VAR_7->netdev, "Restarting Auto-Negotiation\n");
 VAR_8 = FUNC_1(VAR_6);
 if (VAR_8) {
  FUNC_7(VAR_7->netdev, "Error resetting the phy\n");
  return VAR_8;
 }

 VAR_6->phy_configured = 1;

 return 0;
}
