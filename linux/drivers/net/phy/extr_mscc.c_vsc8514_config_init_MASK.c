
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct vsc8531_private {int pkg_init; int nleds; int * leds_mode; scalar_t__ base_addr; } ;
struct TYPE_4__ {TYPE_1__* bus; scalar_t__ addr; } ;
struct phy_device {TYPE_2__ mdio; int mdix_ctrl; struct vsc8531_private* priv; } ;
struct TYPE_3__ {int mdio_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
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
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_1 (struct phy_device*,int ) ;
 int FUNC_2 (struct phy_device*,int ,int ) ;
 int FUNC_3 (struct phy_device*) ;
 unsigned long VAR_41 ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct phy_device*,int ) ;
 int FUNC_8 (struct phy_device*,int ,int) ;
 int FUNC_9 (struct phy_device*,int ,int ) ;
 int FUNC_10 (struct phy_device*,int ,int ,int ) ;
 int FUNC_11 (struct phy_device*,int ,int ) ;
 int FUNC_12 (struct phy_device*,int ,int ) ;
 scalar_t__ FUNC_13 (unsigned long,unsigned long) ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (struct phy_device*) ;
 int FUNC_16 (struct phy_device*,int) ;
 int FUNC_17 (struct phy_device*,int) ;
 int FUNC_18 (struct phy_device*,int ,int ) ;
 int FUNC_19 (struct phy_device*,int ,int ,int) ;
 int FUNC_20 (struct phy_device*,int,int ) ;

__attribute__((used)) static int FUNC_21(struct phy_device *VAR_42)
{
 struct vsc8531_private *VAR_43 = VAR_42->priv;
 unsigned long VAR_44;
 u16 VAR_45, VAR_46;
 int VAR_47, VAR_48;
 u32 VAR_49;

 VAR_42->mdix_ctrl = VAR_1;

 FUNC_5(&VAR_42->mdio.bus->mdio_lock);

 FUNC_2(VAR_42, VAR_7, VAR_12);

 VAR_46 = FUNC_1(VAR_42, VAR_10);
 VAR_46 >>= VAR_16;

 VAR_45 = FUNC_1(VAR_42, VAR_8);

 if (VAR_45 & VAR_15)
  VAR_43->base_addr = VAR_42->mdio.addr + VAR_46;
 else
  VAR_43->base_addr = VAR_42->mdio.addr - VAR_46;
 if (!FUNC_17(VAR_42, VAR_45 & VAR_15 ? 1 : 0))
  FUNC_15(VAR_42);

 VAR_43->pkg_init = 1;

 FUNC_8(VAR_42, VAR_7,
         VAR_13);

 VAR_45 = FUNC_7(VAR_42, VAR_11);

 VAR_45 &= ~VAR_3;
 VAR_45 |= VAR_4;
 VAR_47 = FUNC_8(VAR_42, VAR_11, VAR_45);

 if (VAR_47)
  goto err;

 VAR_47 = FUNC_16(VAR_42,
     VAR_36 |
     VAR_40 |
     VAR_39 | VAR_38);
 if (VAR_47)
  goto err;


 FUNC_11(VAR_42, VAR_17, 0);

 FUNC_11(VAR_42, VAR_26, 0);

 VAR_47 = FUNC_19(VAR_42, VAR_18,
      VAR_28, 0x7036f145);
 if (VAR_47)
  goto err;

 FUNC_9(VAR_42, VAR_26, 0);

 VAR_47 = FUNC_19(VAR_42, VAR_18,
      VAR_29,
      (3 << VAR_30) |
      (120 << VAR_31)
      | (0 << VAR_32));
 if (VAR_47)
  goto err;


 VAR_47 = FUNC_19(VAR_42, VAR_18,
      VAR_19,
      (0 << VAR_35) |
      (0 << VAR_21) |
      (0 << VAR_22) |
      (0 << VAR_34) |
      (3 << VAR_25));
 if (VAR_47)
  goto err;


 VAR_47 = FUNC_19(VAR_42, VAR_18,
      VAR_27, 1);
 if (VAR_47)
  goto err;


 VAR_47 = FUNC_19(VAR_42, VAR_18,
      VAR_23, 768);
 if (VAR_47)
  goto err;

 FUNC_9(VAR_42, VAR_20, 0);

 VAR_44 = VAR_41 + FUNC_4(VAR_37);
 do {
  FUNC_14(500, 1000);
  FUNC_11(VAR_42, VAR_17,
       0);
  VAR_49 = FUNC_18(VAR_42, VAR_18,
      VAR_33);
  if (VAR_49 == 0xffffffff) {
   FUNC_6(&VAR_42->mdio.bus->mdio_lock);
   return -VAR_0;
  }

 } while (FUNC_13(VAR_41, VAR_44) && (VAR_49 & FUNC_0(12)));

 if (VAR_49 & FUNC_0(12)) {
  FUNC_6(&VAR_42->mdio.bus->mdio_lock);
  return -VAR_2;
 }


 VAR_47 = FUNC_19(VAR_42, VAR_18,
      VAR_27, 0);
 if (VAR_47)
  goto err;

 FUNC_9(VAR_42, VAR_17, 0);

 VAR_44 = VAR_41 + FUNC_4(VAR_37);
 do {
  FUNC_14(500, 1000);
  FUNC_11(VAR_42, VAR_17,
       0);
  VAR_49 = FUNC_18(VAR_42, VAR_18,
      VAR_24);
  if (VAR_49 == 0xffffffff) {
   FUNC_6(&VAR_42->mdio.bus->mdio_lock);
   return -VAR_0;
  }

 } while (FUNC_13(VAR_41, VAR_44) && !(VAR_49 & FUNC_0(8)));

 if (!(VAR_49 & FUNC_0(8))) {
  FUNC_6(&VAR_42->mdio.bus->mdio_lock);
  return -VAR_2;
 }

 FUNC_6(&VAR_42->mdio.bus->mdio_lock);

 VAR_47 = FUNC_12(VAR_42, VAR_7, VAR_14);

 if (VAR_47)
  return VAR_47;

 VAR_47 = FUNC_10(VAR_42, VAR_9, VAR_6,
    VAR_5);

 if (VAR_47)
  return VAR_47;

 VAR_47 = FUNC_3(VAR_42);

 if (VAR_47)
  return VAR_47;

 for (VAR_48 = 0; VAR_48 < VAR_43->nleds; VAR_48++) {
  VAR_47 = FUNC_20(VAR_42, VAR_48, VAR_43->leds_mode[VAR_48]);
  if (VAR_47)
   return VAR_47;
 }

 return VAR_47;

err:
 FUNC_6(&VAR_42->mdio.bus->mdio_lock);
 return VAR_47;
}
