
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_short ;
struct timer_list {int dummy; } ;
struct TYPE_4__ {void* expires; } ;
struct TYPE_3__ {int phy_id; struct net_device* dev; } ;
struct smc_private {int fast_poll; int cfg; int link_status; int duplex; int media_status; int lock; TYPE_2__ media; scalar_t__ tx_err; scalar_t__ last_rx; TYPE_1__ mii_if; int watchdog; scalar_t__ rx_ovrn; } ;
struct net_device {unsigned int base_addr; scalar_t__ if_port; int irq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (TYPE_2__*) ;
 struct smc_private* FUNC_2 (int ,struct timer_list*,int ) ;
 int FUNC_3 (scalar_t__) ;
 void* VAR_13 ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (struct net_device*,int,int) ;
 int VAR_14 ;
 int FUNC_7 (struct net_device*,char*,...) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int,scalar_t__) ;
 struct smc_private* VAR_15 ;
 int FUNC_10 (int ,struct net_device*) ;
 int FUNC_11 (struct net_device*,int) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 scalar_t__ FUNC_14 (void*,scalar_t__) ;

__attribute__((used)) static void FUNC_15(struct timer_list *VAR_16)
{
    struct smc_private *VAR_17 = FUNC_2(VAR_17, VAR_16, VAR_14);
    struct net_device *VAR_18 = VAR_17->mii_if.dev;
    unsigned int VAR_19 = VAR_18->base_addr;
    u_short VAR_20, VAR_21, VAR_22;
    u_short VAR_23;
    unsigned long VAR_24;

    FUNC_12(&VAR_17->lock, VAR_24);

    VAR_22 = FUNC_3(VAR_19 + VAR_0);

    if (!FUNC_8(VAR_18))
 goto reschedule;

    FUNC_0(2);


    if (VAR_17->rx_ovrn) {
 FUNC_9(VAR_9, VAR_19 + VAR_10);
 VAR_17->rx_ovrn = 0;
    }
    VAR_20 = FUNC_3(VAR_19 + VAR_8);
    FUNC_0(0);
    VAR_21 = FUNC_3(VAR_19 + VAR_4) & VAR_6;
    FUNC_0(1);
    VAR_21 |= (FUNC_3(VAR_19 + VAR_3) & VAR_1) ? 2 : 1;

    FUNC_0(VAR_22);
    FUNC_13(&VAR_17->lock, VAR_24);



    if (VAR_17->watchdog++ && ((VAR_20>>8) & VAR_20)) {
 if (!VAR_17->fast_poll)
     FUNC_7(VAR_18, "interrupt(s) dropped!\n");
 FUNC_5(VAR_24);
 FUNC_10(VAR_18->irq, VAR_18);
 FUNC_4(VAR_24);
 VAR_17->fast_poll = VAR_7;
    }
    if (VAR_17->fast_poll) {
 VAR_17->fast_poll--;
 VAR_17->media.expires = VAR_13 + VAR_7/100;
 FUNC_1(&VAR_17->media);
 return;
    }

    FUNC_12(&VAR_17->lock, VAR_24);

    VAR_22 = FUNC_3(VAR_19 + VAR_0);

    if (VAR_17->cfg & VAR_2) {
 if (VAR_17->mii_if.phy_id < 0)
     goto reschedule;

 FUNC_0(3);
 VAR_23 = FUNC_6(VAR_18, VAR_17->mii_if.phy_id, 1);
 if (!VAR_23 || (VAR_23 == 0xffff)) {
     FUNC_7(VAR_18, "MII is missing!\n");
     VAR_17->mii_if.phy_id = -1;
     goto reschedule;
 }

 VAR_23 &= 0x0004;
 if (VAR_23 != VAR_17->link_status) {
     u_short VAR_25 = FUNC_6(VAR_18, VAR_17->mii_if.phy_id, 5);
     FUNC_7(VAR_18, "%s link beat\n", VAR_23 ? "found" : "lost");
     VAR_17->duplex = (((VAR_25 & 0x0100) || ((VAR_25 & 0x1c0) == 0x40))
      ? VAR_12 : 0);
     if (VAR_23) {
  FUNC_7(VAR_18, "autonegotiation complete: "
       "%dbaseT-%cD selected\n",
       (VAR_25 & 0x0180) ? 100 : 10, VAR_17->duplex ? 'F' : 'H');
     }
     FUNC_0(0);
     FUNC_9(FUNC_3(VAR_19 + VAR_11) | VAR_17->duplex, VAR_19 + VAR_11);
     VAR_17->link_status = VAR_23;
 }
 goto reschedule;
    }


    if (FUNC_14(VAR_13, VAR_17->last_rx + VAR_7)) {
 if (VAR_17->tx_err || (VAR_17->media_status & VAR_5))
     VAR_21 |= VAR_5;
    }
    VAR_17->tx_err = 0;

    if (VAR_21 != VAR_17->media_status) {
 if ((VAR_21 & VAR_17->media_status & 1) &&
     ((VAR_17->media_status ^ VAR_21) & VAR_6))
     FUNC_7(VAR_18, "%s link beat\n",
   VAR_17->media_status & VAR_6 ? "lost" : "found");
 else if ((VAR_21 & VAR_17->media_status & 2) &&
   ((VAR_17->media_status ^ VAR_21) & VAR_5))
     FUNC_7(VAR_18, "coax cable %s\n",
   VAR_21 & VAR_5 ? "problem" : "ok");
 if (VAR_18->if_port == 0) {
     if (VAR_21 & 1) {
  if (VAR_21 & VAR_6)
      FUNC_7(VAR_18, "flipped to 10baseT\n");
  else
      FUNC_11(VAR_18, 2);
     } else {
  if (VAR_21 & VAR_5)
      FUNC_11(VAR_18, 1);
  else
      FUNC_7(VAR_18, "flipped to 10base2\n");
     }
 }
 VAR_17->media_status = VAR_21;
    }

reschedule:
    VAR_17->media.expires = VAR_13 + VAR_7;
    FUNC_1(&VAR_17->media);
    FUNC_0(VAR_22);
    FUNC_13(&VAR_17->lock, VAR_24);
}
