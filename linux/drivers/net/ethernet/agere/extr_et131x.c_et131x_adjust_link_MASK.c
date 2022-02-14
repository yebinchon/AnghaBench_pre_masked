
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int addr; } ;
struct phy_device {scalar_t__ link; scalar_t__ speed; TYPE_1__ mdio; } ;
struct net_device {struct phy_device* phydev; } ;
struct et131x_adapter {scalar_t__ link; int boot_coma; int registry_jumbo_packet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct et131x_adapter*) ;
 int FUNC_1 (struct et131x_adapter*) ;
 int FUNC_2 (struct et131x_adapter*) ;
 scalar_t__ FUNC_3 (struct et131x_adapter*) ;
 int FUNC_4 (struct et131x_adapter*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct et131x_adapter*) ;
 int FUNC_8 (struct et131x_adapter*) ;
 int FUNC_9 (struct et131x_adapter*,int ,int*) ;
 int FUNC_10 (struct et131x_adapter*,int ,int ,int) ;
 int FUNC_11 (struct et131x_adapter*) ;
 int FUNC_12 (struct et131x_adapter*) ;
 struct et131x_adapter* FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct phy_device*) ;

__attribute__((used)) static void FUNC_15(struct net_device *VAR_8)
{
 struct et131x_adapter *VAR_9 = FUNC_13(VAR_8);
 struct phy_device *VAR_10 = VAR_8->phydev;

 if (!VAR_10)
  return;
 if (VAR_10->link == VAR_9->link)
  return;





 if (FUNC_3(VAR_9))
  FUNC_2(VAR_9);

 VAR_9->link = VAR_10->link;
 FUNC_14(VAR_10);

 if (VAR_10->link) {
  VAR_9->boot_coma = 20;
  if (VAR_10->speed == VAR_6) {
   u16 VAR_11;

   FUNC_9(VAR_9, VAR_5,
     &VAR_11);
   FUNC_10(VAR_9, VAR_10->mdio.addr,
      VAR_5,
      VAR_11 | 0x4);
   FUNC_10(VAR_9, VAR_10->mdio.addr,
      VAR_4, VAR_11 | 0x8402);
   FUNC_10(VAR_9, VAR_10->mdio.addr,
      VAR_3, VAR_11 | 511);
   FUNC_10(VAR_9, VAR_10->mdio.addr,
      VAR_5, VAR_11);
  }

  FUNC_0(VAR_9);

  if (VAR_10->speed == VAR_7 &&
      VAR_9->registry_jumbo_packet > 2048) {
   u16 VAR_12;

   FUNC_9(VAR_9, VAR_2, &VAR_12);
   VAR_12 &= ~VAR_1;
   VAR_12 |= VAR_0;
   FUNC_10(VAR_9, VAR_10->mdio.addr,
      VAR_2, VAR_12);
  }

  FUNC_11(VAR_9);
  FUNC_1(VAR_9);
 } else {
  VAR_9->boot_coma = 0;

  if (VAR_10->speed == VAR_6) {
   u16 VAR_13;

   FUNC_9(VAR_9, VAR_5,
     &VAR_13);
   FUNC_10(VAR_9, VAR_10->mdio.addr,
      VAR_5,
      VAR_13 | 0x4);
   FUNC_10(VAR_9, VAR_10->mdio.addr,
      VAR_4, VAR_13 | 0x8402);
   FUNC_10(VAR_9, VAR_10->mdio.addr,
      VAR_3, VAR_13 | 511);
   FUNC_10(VAR_9, VAR_10->mdio.addr,
      VAR_5, VAR_13);
  }

  FUNC_7(VAR_9);
  FUNC_8(VAR_9);






  FUNC_12(VAR_9);

  FUNC_4(VAR_9);

  FUNC_5(VAR_8);
  FUNC_6(VAR_8);
 }
}
