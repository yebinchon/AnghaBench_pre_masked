
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_short ;
struct timer_list {int dummy; } ;
struct TYPE_4__ {void* expires; } ;
struct pcnet_dev {int fast_poll; int flags; int phy_id; int eth_phy; int link_status; int pna_phy; TYPE_2__ watchdog; void* mii_reset; int stale; TYPE_1__* p_dev; } ;
struct net_device {unsigned int base_addr; int irq; } ;
struct TYPE_3__ {struct net_device* priv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,struct net_device*) ;
 struct pcnet_dev* FUNC_3 (int ,struct timer_list*,int ) ;
 int FUNC_4 (scalar_t__) ;
 struct pcnet_dev* VAR_9 ;
 void* VAR_10 ;
 int FUNC_5 (unsigned int,int,int) ;
 int FUNC_6 (unsigned int,int,int ,int) ;
 int FUNC_7 (struct net_device*,char*,...) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int,scalar_t__) ;
 scalar_t__ FUNC_10 (void*,void*) ;
 int VAR_11 ;
 int FUNC_11 (unsigned int,int,int ) ;

__attribute__((used)) static void FUNC_12(struct timer_list *VAR_12)
{
    struct pcnet_dev *VAR_13 = FUNC_3(VAR_13, VAR_12, VAR_11);
    struct net_device *VAR_14 = VAR_13->p_dev->priv;
    unsigned int VAR_15 = VAR_14->base_addr;
    unsigned int VAR_16 = VAR_15 + VAR_2;
    u_short VAR_17;

    if (!FUNC_8(VAR_14)) goto reschedule;



    if (VAR_13->stale++ && (FUNC_4(VAR_15 + VAR_3) & VAR_4)) {
 if (!VAR_13->fast_poll)
     FUNC_7(VAR_14, "interrupt(s) dropped!\n");
 FUNC_2(VAR_14->irq, VAR_14);
 VAR_13->fast_poll = VAR_6;
    }
    if (VAR_13->fast_poll) {
 VAR_13->fast_poll--;
 VAR_13->watchdog.expires = VAR_10 + 1;
 FUNC_1(&VAR_13->watchdog);
 return;
    }

    if (!(VAR_13->flags & VAR_5))
 goto reschedule;

    FUNC_5(VAR_16, VAR_13->phy_id, 1);
    VAR_17 = FUNC_5(VAR_16, VAR_13->phy_id, 1);
    if (!VAR_17 || (VAR_17 == 0xffff)) {
 if (VAR_13->eth_phy) {
     VAR_13->phy_id = VAR_13->eth_phy = 0;
 } else {
     FUNC_7(VAR_14, "MII is missing!\n");
     VAR_13->flags &= ~VAR_5;
 }
 goto reschedule;
    }

    VAR_17 &= 0x0004;
    if (VAR_17 != VAR_13->link_status) {
 u_short VAR_18 = FUNC_5(VAR_16, VAR_13->phy_id, 5);
 FUNC_7(VAR_14, "%s link beat\n", VAR_17 ? "found" : "lost");
 if (VAR_17 && (VAR_13->flags & VAR_8)) {

     FUNC_9((VAR_18 & 0x0140) ? 4 : 0, VAR_15 + VAR_1);
 } else if (VAR_17 && (VAR_13->flags & VAR_7)) {

     FUNC_11(VAR_14->base_addr, 4, (VAR_18 & 0x140) ? VAR_0 : 0);
 }
 if (VAR_17) {
     if (VAR_13->phy_id == VAR_13->eth_phy) {
  if (VAR_18)
      FUNC_7(VAR_14, "autonegotiation complete: "
    "%sbaseT-%cD selected\n",
    ((VAR_18 & 0x0180) ? "100" : "10"),
    ((VAR_18 & 0x0140) ? 'F' : 'H'));
  else
      FUNC_7(VAR_14, "link partner did not autonegotiate\n");
     }
     FUNC_0(VAR_14, 1);
 }
 VAR_13->link_status = VAR_17;
    }
    if (VAR_13->pna_phy && FUNC_10(VAR_10, VAR_13->mii_reset + 6*VAR_6)) {
 VAR_17 = FUNC_5(VAR_16, VAR_13->eth_phy, 1) & 0x0004;
 if (((VAR_13->phy_id == VAR_13->pna_phy) && VAR_17) ||
     ((VAR_13->phy_id != VAR_13->pna_phy) && !VAR_17)) {

     FUNC_6(VAR_16, VAR_13->phy_id, 0, 0x0400);
     VAR_13->phy_id ^= VAR_13->pna_phy ^ VAR_13->eth_phy;
     FUNC_7(VAR_14, "switched to %s transceiver\n",
   (VAR_13->phy_id == VAR_13->eth_phy) ? "ethernet" : "PNA");
     FUNC_6(VAR_16, VAR_13->phy_id, 0,
         (VAR_13->phy_id == VAR_13->eth_phy) ? 0x1000 : 0);
     VAR_13->link_status = 0;
     VAR_13->mii_reset = VAR_10;
 }
    }

reschedule:
    VAR_13->watchdog.expires = VAR_10 + VAR_6;
    FUNC_1(&VAR_13->watchdog);
}
