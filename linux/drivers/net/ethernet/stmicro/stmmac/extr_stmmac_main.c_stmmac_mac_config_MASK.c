
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct stmmac_priv {scalar_t__ ioaddr; TYPE_4__* hw; TYPE_2__* plat; int speed; } ;
struct phylink_link_state {scalar_t__ interface; int duplex; scalar_t__ pause; int speed; } ;
struct phylink_config {int dev; } ;
struct TYPE_5__ {int speed2500; int speed5000; int speed10000; } ;
struct TYPE_7__ {int duplex; int speed10; int speed100; int speed1000; int speed2500; TYPE_1__ xgmii; int speed_mask; } ;
struct TYPE_8__ {TYPE_3__ link; } ;
struct TYPE_6__ {int bsp_priv; int (* fix_mac_speed ) (int ,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;






 struct stmmac_priv* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct stmmac_priv*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct phylink_config *VAR_2, unsigned int VAR_3,
         const struct phylink_link_state *VAR_4)
{
 struct stmmac_priv *VAR_5 = FUNC_0(FUNC_4(VAR_2->dev));
 u32 VAR_6;

 VAR_6 = FUNC_1(VAR_5->ioaddr + VAR_0);
 VAR_6 &= ~VAR_5->hw->link.speed_mask;

 if (VAR_4->interface == VAR_1) {
  switch (VAR_4->speed) {
  case 130:
   VAR_6 |= VAR_5->hw->link.xgmii.speed10000;
   break;
  case 128:
   VAR_6 |= VAR_5->hw->link.xgmii.speed5000;
   break;
  case 129:
   VAR_6 |= VAR_5->hw->link.xgmii.speed2500;
   break;
  default:
   return;
  }
 } else {
  switch (VAR_4->speed) {
  case 129:
   VAR_6 |= VAR_5->hw->link.speed2500;
   break;
  case 131:
   VAR_6 |= VAR_5->hw->link.speed1000;
   break;
  case 132:
   VAR_6 |= VAR_5->hw->link.speed100;
   break;
  case 133:
   VAR_6 |= VAR_5->hw->link.speed10;
   break;
  default:
   return;
  }
 }

 VAR_5->speed = VAR_4->speed;

 if (VAR_5->plat->fix_mac_speed)
  VAR_5->plat->fix_mac_speed(VAR_5->plat->bsp_priv, VAR_4->speed);

 if (!VAR_4->duplex)
  VAR_6 &= ~VAR_5->hw->link.duplex;
 else
  VAR_6 |= VAR_5->hw->link.duplex;


 if (VAR_4->pause)
  FUNC_2(VAR_5, VAR_4->duplex);

 FUNC_5(VAR_6, VAR_5->ioaddr + VAR_0);
}
