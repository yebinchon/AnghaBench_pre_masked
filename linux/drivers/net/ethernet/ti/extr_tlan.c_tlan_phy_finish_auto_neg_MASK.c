
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct tlan_priv {int* phy; size_t phy_num; int tlan_full_duplex; scalar_t__ duplex; TYPE_1__* adapter; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct tlan_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int,int ,int*) ;
 int FUNC_4 (struct net_device*,int,int ,int) ;
 int FUNC_5 (struct net_device*,int,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_13)
{
 struct tlan_priv *VAR_14 = FUNC_2(VAR_13);
 u16 VAR_15;
 u16 VAR_16;
 u16 VAR_17;
 u16 VAR_18;
 u16 VAR_19;

 VAR_18 = VAR_14->phy[VAR_14->phy_num];

 FUNC_3(VAR_13, VAR_18, VAR_6, &VAR_19);
 FUNC_6(1000);
 FUNC_3(VAR_13, VAR_18, VAR_6, &VAR_19);

 if (!(VAR_19 & VAR_7)) {



  FUNC_5(VAR_13, 2 * VAR_0, VAR_11);
  return;
 }

 FUNC_1(VAR_13, "Autonegotiation complete\n");
 FUNC_3(VAR_13, VAR_18, VAR_1, &VAR_15);
 FUNC_3(VAR_13, VAR_18, VAR_2, &VAR_16);
 VAR_17 = VAR_15 & VAR_16 & 0x03E0;
 if (VAR_17 & 0x0100)
  VAR_14->tlan_full_duplex = 1;
 else if (!(VAR_17 & 0x0080) && (VAR_17 & 0x0040))
  VAR_14->tlan_full_duplex = 1;


 if ((!(VAR_17 & 0x0180)) &&
     (VAR_14->adapter->flags & VAR_8) &&
     (VAR_14->phy_num != 0)) {
  VAR_14->phy_num = 0;
  FUNC_5(VAR_13, FUNC_0(400), VAR_12);
  return;
 }

 if (VAR_14->phy_num == 0) {
  if ((VAR_14->duplex == VAR_9) ||
      (VAR_15 & VAR_16 & 0x0040)) {
   FUNC_4(VAR_13, VAR_18, VAR_5,
        VAR_3 | VAR_4);
   FUNC_1(VAR_13, "Starting internal PHY with FULL-DUPLEX\n");
  } else {
   FUNC_4(VAR_13, VAR_18, VAR_5,
        VAR_3);
   FUNC_1(VAR_13, "Starting internal PHY with HALF-DUPLEX\n");
  }
 }



 FUNC_5(VAR_13, FUNC_0(100), VAR_10);

}
