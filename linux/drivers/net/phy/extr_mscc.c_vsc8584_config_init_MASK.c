
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct vsc8531_private {int pkg_init; int nleds; int * leds_mode; scalar_t__ base_addr; } ;
struct TYPE_6__ {TYPE_3__* bus; scalar_t__ addr; } ;
struct phy_device {int phy_id; scalar_t__ interface; TYPE_2__ mdio; TYPE_1__* drv; int mdix_ctrl; struct vsc8531_private* priv; } ;
struct TYPE_7__ {int mdio_lock; } ;
struct TYPE_5__ {int phy_id_mask; } ;


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
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (int) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_1 (TYPE_3__*,scalar_t__,int ) ;
 int FUNC_2 (TYPE_3__*,scalar_t__,int ,int ) ;
 int FUNC_3 (struct phy_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct phy_device*,int ) ;
 int FUNC_7 (struct phy_device*,int ,int) ;
 int FUNC_8 (struct phy_device*,int ) ;
 int FUNC_9 (struct phy_device*,int ,int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (struct phy_device*) ;
 int FUNC_12 (struct phy_device*,int) ;
 int FUNC_13 (struct phy_device*) ;
 int FUNC_14 (struct phy_device*,int) ;
 int FUNC_15 (struct phy_device*,int,int ) ;

__attribute__((used)) static int FUNC_16(struct phy_device *VAR_32)
{
 struct vsc8531_private *VAR_33 = VAR_32->priv;
 u16 VAR_34, VAR_35;
 int VAR_36, VAR_37;

 VAR_32->mdix_ctrl = VAR_1;

 FUNC_4(&VAR_32->mdio.bus->mdio_lock);

 FUNC_2(VAR_32->mdio.bus, VAR_32->mdio.addr,
   VAR_7, VAR_12);
 VAR_34 = FUNC_1(VAR_32->mdio.bus, VAR_32->mdio.addr,
         VAR_10);
 VAR_34 >>= VAR_16;

 VAR_35 = FUNC_1(VAR_32->mdio.bus, VAR_32->mdio.addr,
        VAR_8);
 if (VAR_35 & VAR_15)
  VAR_33->base_addr = VAR_32->mdio.addr + VAR_34;
 else
  VAR_33->base_addr = VAR_32->mdio.addr - VAR_34;
 if (!FUNC_14(VAR_32, VAR_35 & VAR_15 ? 1 : 0)) {
  if ((VAR_32->phy_id & VAR_32->drv->phy_id_mask) ==
      (VAR_17 & VAR_32->drv->phy_id_mask))
   VAR_36 = FUNC_11(VAR_32);
  else if ((VAR_32->phy_id & VAR_32->drv->phy_id_mask) ==
    (VAR_18 & VAR_32->drv->phy_id_mask))
   VAR_36 = FUNC_13(VAR_32);
  else
   VAR_36 = -VAR_0;

  if (VAR_36)
   goto err;
 }

 VAR_33->pkg_init = 1;

 FUNC_7(VAR_32, VAR_7,
         VAR_13);

 VAR_35 = FUNC_6(VAR_32, VAR_11);
 VAR_35 &= ~VAR_2;
 if (VAR_32->interface == VAR_19)
  VAR_35 |= VAR_3;
 else
  VAR_35 |= VAR_4;

 VAR_36 = FUNC_7(VAR_32, VAR_11, VAR_35);
 if (VAR_36)
  goto err;

 VAR_35 = VAR_24 | VAR_27 |
  VAR_26;
 if (VAR_32->interface == VAR_19)
  VAR_35 |= VAR_25;
 else
  VAR_35 |= VAR_28;

 VAR_36 = FUNC_12(VAR_32, VAR_35);
 if (VAR_36)
  goto err;

 FUNC_10(10000, 20000);


 VAR_36 = FUNC_12(VAR_32, VAR_23 |
     FUNC_0(VAR_34) | VAR_22 |
     VAR_26 |
     VAR_27 | VAR_21);
 if (VAR_36)
  goto err;


 VAR_36 = FUNC_12(VAR_32, VAR_23 |
     FUNC_0(VAR_34) | VAR_22 |
     VAR_26 |
     VAR_27 | VAR_20);
 if (VAR_36)
  goto err;

 FUNC_5(&VAR_32->mdio.bus->mdio_lock);

 FUNC_9(VAR_32, VAR_7, VAR_14);

 VAR_35 = FUNC_8(VAR_32, VAR_9);
 VAR_35 &= ~(VAR_6 | VAR_29);
 VAR_35 |= VAR_5 | (VAR_31 <<
           VAR_30);
 VAR_36 = FUNC_9(VAR_32, VAR_9, VAR_35);

 VAR_36 = FUNC_3(VAR_32);
 if (VAR_36)
  return VAR_36;

 for (VAR_37 = 0; VAR_37 < VAR_33->nleds; VAR_37++) {
  VAR_36 = FUNC_15(VAR_32, VAR_37, VAR_33->leds_mode[VAR_37]);
  if (VAR_36)
   return VAR_36;
 }

 return 0;

err:
 FUNC_5(&VAR_32->mdio.bus->mdio_lock);
 return VAR_36;
}
