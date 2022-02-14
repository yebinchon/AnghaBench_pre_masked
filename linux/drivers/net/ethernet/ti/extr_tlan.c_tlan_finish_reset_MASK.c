
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {scalar_t__ expires; } ;
struct tlan_priv {size_t phy_num; int phy_online; int rx_list_dma; TYPE_2__ media_timer; scalar_t__ aui; TYPE_1__* adapter; scalar_t__ tlan_full_duplex; int * phy; } ;
struct net_device {scalar_t__ base_addr; int dev_addr; } ;
struct TYPE_3__ {int flags; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_36 ;
 scalar_t__ VAR_37 ;
 int * VAR_38 ;
 int FUNC_1 (struct net_device*,char*,...) ;
 struct tlan_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (scalar_t__,int ,int) ;
 int FUNC_9 (scalar_t__,int ,int) ;
 int FUNC_10 (struct net_device*,int ,int ,int*) ;
 int FUNC_11 (struct net_device*,int ,int ,int) ;
 int FUNC_12 (struct net_device*,int ,int ) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*,int,int ) ;
 int FUNC_15 (int) ;

__attribute__((used)) static void
FUNC_16(struct net_device *VAR_39)
{
 struct tlan_priv *VAR_40 = FUNC_2(VAR_39);
 u8 VAR_41;
 u32 VAR_42;
 u8 VAR_43;
 u16 VAR_44;
 u16 VAR_45;
 u16 VAR_46;
 u16 VAR_47;
 u16 VAR_48, VAR_49;
 int VAR_50;

 VAR_42 = VAR_40->phy[VAR_40->phy_num];

 VAR_41 = VAR_21 | VAR_22;
 if (VAR_40->tlan_full_duplex)
  VAR_41 |= VAR_20;
 FUNC_9(VAR_39->base_addr, VAR_19, VAR_41);
 VAR_41 = VAR_24 | VAR_25;
 if (VAR_40->phy_num == 0)
  VAR_41 |= VAR_26;
 FUNC_9(VAR_39->base_addr, VAR_23, VAR_41);
 FUNC_8(VAR_39->base_addr, VAR_18, ((1536)+7)&~7);
 FUNC_10(VAR_39, VAR_42, VAR_2, &VAR_48);
 FUNC_10(VAR_39, VAR_42, VAR_3, &VAR_49);

 if ((VAR_40->adapter->flags & VAR_8) ||
     (VAR_40->aui)) {
  VAR_44 = VAR_5;
  FUNC_1(VAR_39, "Link forced\n");
 } else {
  FUNC_10(VAR_39, VAR_42, VAR_4, &VAR_44);
  FUNC_15(1000);
  FUNC_10(VAR_39, VAR_42, VAR_4, &VAR_44);
  if (VAR_44 & VAR_5) {

   if ((VAR_48 == VAR_6) &&
       (VAR_49 == VAR_7)) {
    FUNC_10(VAR_39, VAR_42, VAR_1,
     &VAR_45);
    FUNC_10(VAR_39, VAR_42, VAR_35,
     &VAR_47);

    FUNC_1(VAR_39,
     "Link active, %s %uMbps %s-Duplex\n",
     !(VAR_47 & VAR_29)
     ? "forced" : "Autonegotiation enabled,",
     VAR_47 & VAR_31
     ? 100 : 10,
     VAR_47 & VAR_30
     ? "Full" : "Half");

    if (VAR_47 & VAR_29) {
     FUNC_1(VAR_39, "Partner capability:");
     for (VAR_50 = 5; VAR_50 < 10; VAR_50++)
      if (VAR_45 & (1 << VAR_50))
       FUNC_6(" %s",
        VAR_38[VAR_50-5]);
     FUNC_6("\n");
    }
   } else
    FUNC_1(VAR_39, "Link active\n");

   VAR_40->media_timer.expires = VAR_37 + VAR_0;
   FUNC_0(&VAR_40->media_timer);
  }
 }

 if (VAR_40->phy_num == 0) {
  FUNC_10(VAR_39, VAR_42, VAR_34, &VAR_46);
  VAR_46 |= VAR_32;
  FUNC_11(VAR_39, VAR_42, VAR_34, VAR_46);
  VAR_43 = FUNC_7(VAR_39->base_addr, VAR_27);
  VAR_43 |= VAR_28;
  FUNC_9(VAR_39->base_addr, VAR_27, VAR_43);
 }

 if (VAR_44 & VAR_5) {
  FUNC_12(VAR_39, 0, VAR_39->dev_addr);
  VAR_40->phy_online = 1;
  FUNC_4((VAR_12 >> 8), VAR_39->base_addr + VAR_15 + 1);
  if (VAR_36 >= 1 && VAR_36 != VAR_10)
   FUNC_4((VAR_13 >> 8),
        VAR_39->base_addr + VAR_15 + 1);
  FUNC_5(VAR_40->rx_list_dma, VAR_39->base_addr + VAR_9);
  FUNC_5(VAR_11 | VAR_14, VAR_39->base_addr + VAR_15);
  FUNC_9(VAR_39->base_addr, VAR_17, VAR_16);
  FUNC_3(VAR_39);
 } else {
  FUNC_1(VAR_39, "Link inactive, will retry in 10 secs...\n");
  FUNC_14(VAR_39, (10*VAR_0), VAR_33);
  return;
 }
 FUNC_13(VAR_39);

}
