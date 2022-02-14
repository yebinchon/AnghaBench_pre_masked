
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_2__ {int phy_id; } ;
struct smc_private {int manfid; scalar_t__ cardid; int cfg; TYPE_1__ mii_if; scalar_t__ rx_ovrn; scalar_t__ duplex; } ;
struct pcmcia_device {int manf_id; scalar_t__ card_id; int dev; int irq; struct net_device* priv; } ;
struct net_device {int if_port; unsigned int base_addr; int dev_addr; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;






 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (struct net_device*,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct pcmcia_device*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (struct net_device*) ;
 char** VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct net_device*,int,int) ;
 int FUNC_9 (struct pcmcia_device*) ;
 int FUNC_10 (struct pcmcia_device*) ;
 int FUNC_11 (struct pcmcia_device*) ;
 int FUNC_12 (struct pcmcia_device*) ;
 int FUNC_13 (struct net_device*,char*,int,int) ;
 int FUNC_14 (struct net_device*,char*,...) ;
 int FUNC_15 (struct net_device*,char*) ;
 struct smc_private* FUNC_16 (struct net_device*) ;
 int FUNC_17 (struct pcmcia_device*) ;
 int FUNC_18 (struct pcmcia_device*,int,scalar_t__) ;
 int FUNC_19 (struct pcmcia_device*) ;
 int FUNC_20 (struct pcmcia_device*,int ) ;
 int FUNC_21 (char*,char*) ;
 scalar_t__ FUNC_22 (struct net_device*) ;
 int FUNC_23 (struct pcmcia_device*) ;
 int FUNC_24 (struct pcmcia_device*) ;
 int VAR_16 ;
 int FUNC_25 (struct pcmcia_device*) ;
 int FUNC_26 (struct net_device*) ;

__attribute__((used)) static int FUNC_27(struct pcmcia_device *VAR_17)
{
    struct net_device *VAR_18 = VAR_17->priv;
    struct smc_private *VAR_19 = FUNC_16(VAR_18);
    char *VAR_20;
    int VAR_21, VAR_22, VAR_23 = 0;
    unsigned int VAR_24;
    u_long VAR_25;

    FUNC_3(&VAR_17->dev, "smc91c92_config\n");

    VAR_19->manfid = VAR_17->manf_id;
    VAR_19->cardid = VAR_17->card_id;

    if ((VAR_19->manfid == 130) &&
 (VAR_19->cardid != VAR_13)) {
 VAR_21 = FUNC_17(VAR_17);
    } else if ((VAR_19->manfid == 132) ||
        ((VAR_19->manfid == 133) &&
  ((VAR_19->cardid == VAR_12) ||
   (VAR_19->cardid == VAR_11)))) {
 VAR_21 = FUNC_9(VAR_17);
    } else {
 VAR_21 = FUNC_24(VAR_17);
    }
    if (VAR_21)
     goto config_failed;

    VAR_21 = FUNC_20(VAR_17, VAR_16);
    if (VAR_21)
     goto config_failed;
    VAR_21 = FUNC_19(VAR_17);
    if (VAR_21)
     goto config_failed;

    if (VAR_19->manfid == 132)
 FUNC_11(VAR_17);

    VAR_18->irq = VAR_17->irq;

    if ((VAR_15 >= 0) && (VAR_15 <= 2))
 VAR_18->if_port = VAR_15;
    else
 FUNC_5(&VAR_17->dev, "invalid if_port requested\n");

    switch (VAR_19->manfid) {
    case 130:
    case 129:
 VAR_21 = FUNC_18(VAR_17, VAR_19->manfid, VAR_19->cardid); break;
    case 128:
    case 131:
 VAR_21 = FUNC_25(VAR_17); break;
    case 0x128:
    case 133:
 VAR_21 = FUNC_10(VAR_17); break;
    case 132:
    default:
 VAR_21 = FUNC_12(VAR_17); break;
    }

    if (VAR_21 != 0) {
 FUNC_5(&VAR_17->dev, "Unable to find hardware address.\n");
 goto config_failed;
    }

    VAR_19->duplex = 0;
    VAR_19->rx_ovrn = 0;

    VAR_22 = FUNC_2(VAR_17);
    VAR_20 = "???";
    if (VAR_22 > 0)
 switch (VAR_22 >> 4) {
 case 3: VAR_20 = "92"; break;
 case 4: VAR_20 = ((VAR_22 & 15) >= 6) ? "96" : "94"; break;
 case 5: VAR_20 = "95"; break;
 case 7: VAR_20 = "100"; break;
 case 8: VAR_20 = "100-FD"; break;
 case 9: VAR_20 = "110"; break;
 }

    VAR_24 = VAR_18->base_addr;
    if (VAR_22 > 0) {
 u_long VAR_26;
 FUNC_1(0);
 VAR_25 = FUNC_7(VAR_24 + VAR_10) & 0xff;
 if (VAR_25 == 0xff) VAR_25++;

 VAR_26 = ((VAR_22 >> 4) > 3) ? FUNC_7(VAR_24 + VAR_9) : 0x0200;
 VAR_25 *= 128 * (1<<((VAR_26 >> 9) & 7));
 FUNC_1(1);
 VAR_19->cfg = FUNC_7(VAR_24 + VAR_7) & ~VAR_1;
 VAR_19->cfg |= VAR_5 | VAR_0 | VAR_6;
 if (VAR_19->manfid == 130)
     VAR_19->cfg |= VAR_3 | VAR_2;
 if ((VAR_22 >> 4) >= 7)
     VAR_19->cfg |= VAR_4;
    } else
 VAR_25 = 0;

    if (VAR_19->cfg & VAR_4) {
 FUNC_1(3);

 for (VAR_21 = 0; VAR_21 < 32; VAR_21++) {
     VAR_23 = FUNC_8(VAR_18, VAR_21, 1);
     if ((VAR_23 != 0) && (VAR_23 != 0xffff)) break;
 }
 VAR_19->mii_if.phy_id = (VAR_21 < 32) ? VAR_21 : -1;

 FUNC_1(0);
    }

    FUNC_0(VAR_18, &VAR_17->dev);

    if (FUNC_22(VAR_18) != 0) {
 FUNC_4(&VAR_17->dev, "register_netdev() failed\n");
 goto config_undo;
    }

    FUNC_14(VAR_18, "smc91c%s rev %d: io %#3lx, irq %d, hw_addr %pM\n",
  VAR_20, (VAR_22 & 0x0f), VAR_18->base_addr, VAR_18->irq, VAR_18->dev_addr);

    if (VAR_22 > 0) {
 if (VAR_25 & 0x3ff)
     FUNC_14(VAR_18, "  %lu byte", VAR_25);
 else
     FUNC_14(VAR_18, "  %lu kb", VAR_25>>10);
 FUNC_21(" buffer, %s xcvr\n",
  (VAR_19->cfg & VAR_4) ? "MII" : VAR_14[VAR_18->if_port]);
    }

    if (VAR_19->cfg & VAR_4) {
 if (VAR_19->mii_if.phy_id != -1) {
     FUNC_13(VAR_18, "  MII transceiver at index %d, status %x\n",
         VAR_19->mii_if.phy_id, VAR_23);
 } else {
     FUNC_15(VAR_18, "  No MII transceivers found!\n");
 }
    }
    return 0;

config_undo:
    FUNC_26(VAR_18);
config_failed:
    FUNC_23(VAR_17);
    FUNC_6(VAR_18);
    return -VAR_8;
}
