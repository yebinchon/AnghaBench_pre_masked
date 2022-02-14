
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct tlan_priv {int tlan_full_duplex; int tlan_rev; int aui; scalar_t__ duplex; scalar_t__ phy_num; TYPE_1__* adapter; scalar_t__ phy_online; } ;
struct net_device {int base_addr; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (int) ;
 struct tlan_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int,int ,int ) ;
 int FUNC_7 (int,int ,int) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int) ;

__attribute__((used)) static void
FUNC_13(struct net_device *VAR_24)
{
 struct tlan_priv *VAR_25 = FUNC_1(VAR_24);
 int VAR_26;
 u32 VAR_27;
 u32 VAR_28;
 u8 VAR_29;

 VAR_25->tlan_full_duplex = 0;
 VAR_25->phy_online = 0;
 FUNC_2(VAR_24);



 VAR_28 = FUNC_0(VAR_24->base_addr + VAR_13);
 VAR_28 |= VAR_9;
 FUNC_3(VAR_28, VAR_24->base_addr + VAR_13);

 FUNC_12(1000);



 VAR_28 = FUNC_0(VAR_24->base_addr + VAR_13);
 VAR_28 |= VAR_10;
 FUNC_3(VAR_28, VAR_24->base_addr + VAR_13);



 for (VAR_26 = VAR_4; VAR_26 <= VAR_8; VAR_26 += 4)
  FUNC_6(VAR_24->base_addr, (u16) VAR_26, 0);



 VAR_28 = VAR_18 | VAR_17 | VAR_20;
 FUNC_5(VAR_24->base_addr, VAR_21, (u16) VAR_28);



 FUNC_3(VAR_12 | 0x3f, VAR_24->base_addr + VAR_13);
 FUNC_3(VAR_11 | 0x9, VAR_24->base_addr + VAR_13);



 FUNC_4(VAR_22, VAR_24->base_addr + VAR_5);
 VAR_27 = VAR_24->base_addr + VAR_6 + VAR_22;
 FUNC_11(VAR_23, VAR_27);



 if (VAR_25->tlan_rev >= 0x30) {
  VAR_29 = VAR_15 | VAR_14;
  FUNC_7(VAR_24->base_addr, VAR_16, VAR_29);
 }
 FUNC_9(VAR_24);
 VAR_28 = VAR_18 | VAR_17;

 if (VAR_25->adapter->flags & VAR_1) {
  VAR_28 |= VAR_19;
  if (VAR_25->aui == 1) {
   FUNC_7(VAR_24->base_addr, VAR_0, 0x0a);
  } else if (VAR_25->duplex == VAR_7) {
   FUNC_7(VAR_24->base_addr, VAR_0, 0x00);
   VAR_25->tlan_full_duplex = 1;
  } else {
   FUNC_7(VAR_24->base_addr, VAR_0, 0x08);
  }
 }


 if (VAR_25->phy_num == 0 ||
    (VAR_25->adapter->flags & VAR_3))
  VAR_28 |= VAR_20;
 FUNC_5(VAR_24->base_addr, VAR_21, (u16) VAR_28);

 if (VAR_25->adapter->flags & VAR_2)
  FUNC_8(VAR_24);
 else
  FUNC_10(VAR_24);

}
