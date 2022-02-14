
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int phy_id; } ;
struct jme_adapter {int phylink; int reg_ghc; int reg_gpreg1; int dev; int chiprev; TYPE_2__* pdev; scalar_t__ fpgaver; TYPE_1__ mii_if; } ;
struct TYPE_4__ {int device; } ;


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
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct jme_adapter*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct jme_adapter*) ;
 int FUNC_4 (struct jme_adapter*) ;
 int FUNC_5 (struct jme_adapter*,int ) ;
 int FUNC_6 (struct jme_adapter*,int ,int) ;
 int VAR_28 ;
 struct jme_adapter* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct jme_adapter*,int ,int ,char*,...) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (int) ;

__attribute__((used)) static int
FUNC_14(struct net_device *VAR_29, int VAR_30)
{
 struct jme_adapter *VAR_31 = FUNC_7(VAR_29);
 u32 VAR_32, VAR_33 = VAR_12, VAR_34;
 char VAR_35[64];
 int VAR_36 = 0;

 VAR_35[0] = '\0';

 if (VAR_31->fpgaver)
  VAR_32 = FUNC_1(VAR_31);
 else
  VAR_32 = FUNC_5(VAR_31, VAR_11);

 if (VAR_32 & VAR_21) {
  if (!(VAR_32 & VAR_16)) {




   VAR_32 = VAR_21;

   VAR_34 = FUNC_2(VAR_31->dev,
      VAR_31->mii_if.phy_id,
      VAR_15);

   VAR_32 |= ((VAR_34 & VAR_2) &&
     (VAR_34 & VAR_1) == 0) ?
     130 :
     (VAR_34 & VAR_1) ?
     129 :
     128;

   VAR_32 |= (VAR_34 & VAR_0) ?
      VAR_17 : 0;

   FUNC_12(VAR_35, "Forced: ");
  } else {



   while (!(VAR_32 & VAR_19) &&
    --VAR_33) {

    FUNC_13(1);

    if (VAR_31->fpgaver)
     VAR_32 = FUNC_1(VAR_31);
    else
     VAR_32 = FUNC_5(VAR_31, VAR_11);
   }
   if (!VAR_33)
    FUNC_11("Waiting speed resolve timeout\n");

   FUNC_12(VAR_35, "ANed: ");
  }

  if (VAR_31->phylink == VAR_32) {
   VAR_36 = 1;
   goto out;
  }
  if (VAR_30)
   goto out;

  VAR_31->phylink = VAR_32;





  switch (VAR_32 & VAR_20) {
  case 128:
   VAR_31->reg_ghc |= VAR_6;
   FUNC_12(VAR_35, "10 Mbps, ");
   break;
  case 129:
   VAR_31->reg_ghc |= VAR_5;
   FUNC_12(VAR_35, "100 Mbps, ");
   break;
  case 130:
   VAR_31->reg_ghc |= VAR_4;
   FUNC_12(VAR_35, "1000 Mbps, ");
   break;
  default:
   break;
  }

  if (VAR_32 & VAR_17) {
   FUNC_6(VAR_31, VAR_13, VAR_25);
   FUNC_6(VAR_31, VAR_14, VAR_26);
   VAR_31->reg_ghc |= VAR_3;
  } else {
   FUNC_6(VAR_31, VAR_13, VAR_25 |
      VAR_22 |
      VAR_23 |
      VAR_24);
   FUNC_6(VAR_31, VAR_14, VAR_27);
  }

  FUNC_6(VAR_31, VAR_9, VAR_31->reg_ghc);

  if (FUNC_0(VAR_31->pdev->device, VAR_31->chiprev)) {
   VAR_31->reg_gpreg1 &= ~(VAR_7 |
          VAR_8);
   if (!(VAR_32 & VAR_17))
    VAR_31->reg_gpreg1 |= VAR_7;
   switch (VAR_32 & VAR_20) {
   case 128:
    FUNC_4(VAR_31);
    VAR_31->reg_gpreg1 |= VAR_8;
    break;
   case 129:
    FUNC_3(VAR_31);
    VAR_31->reg_gpreg1 |= VAR_8;
    break;
   case 130:
    FUNC_4(VAR_31);
    break;
   default:
    break;
   }
  }
  FUNC_6(VAR_31, VAR_10, VAR_31->reg_gpreg1);

  FUNC_12(VAR_35, (VAR_32 & VAR_17) ?
     "Full-Duplex, " :
     "Half-Duplex, ");
  FUNC_12(VAR_35, (VAR_32 & VAR_18) ?
     "MDI-X" :
     "MDI");
  FUNC_10(VAR_31, VAR_28, VAR_31->dev, "Link is up at %s\n", VAR_35);
  FUNC_9(VAR_29);
 } else {
  if (VAR_30)
   goto out;

  FUNC_10(VAR_31, VAR_28, VAR_31->dev, "Link is down\n");
  VAR_31->phylink = 0;
  FUNC_8(VAR_29);
 }

out:
 return VAR_36;
}
