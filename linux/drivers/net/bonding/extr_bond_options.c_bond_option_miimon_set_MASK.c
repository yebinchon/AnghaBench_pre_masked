
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int miimon; int updelay; int downdelay; int peer_notif_delay; scalar_t__ arp_validate; scalar_t__ arp_interval; } ;
struct bonding {int mii_work; int wq; int arp_work; TYPE_2__* dev; TYPE_1__ params; } ;
struct bond_opt_value {int value; } ;
struct TYPE_4__ {int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,char*,...) ;
 int FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct bonding *VAR_2,
      const struct bond_opt_value *VAR_3)
{
 FUNC_1(VAR_2->dev, "Setting MII monitoring interval to %llu\n",
     VAR_3->value);
 VAR_2->params.miimon = VAR_3->value;
 if (VAR_2->params.updelay)
  FUNC_1(VAR_2->dev, "Note: Updating updelay (to %d) since it is a multiple of the miimon value\n",
      VAR_2->params.updelay * VAR_2->params.miimon);
 if (VAR_2->params.downdelay)
  FUNC_1(VAR_2->dev, "Note: Updating downdelay (to %d) since it is a multiple of the miimon value\n",
      VAR_2->params.downdelay * VAR_2->params.miimon);
 if (VAR_2->params.peer_notif_delay)
  FUNC_1(VAR_2->dev, "Note: Updating peer_notif_delay (to %d) since it is a multiple of the miimon value\n",
      VAR_2->params.peer_notif_delay * VAR_2->params.miimon);
 if (VAR_3->value && VAR_2->params.arp_interval) {
  FUNC_1(VAR_2->dev, "MII monitoring cannot be used with ARP monitoring - disabling ARP monitoring...\n");
  VAR_2->params.arp_interval = 0;
  if (VAR_2->params.arp_validate)
   VAR_2->params.arp_validate = VAR_0;
 }
 if (VAR_2->dev->flags & VAR_1) {





  if (!VAR_3->value) {
   FUNC_0(&VAR_2->mii_work);
  } else {
   FUNC_0(&VAR_2->arp_work);
   FUNC_2(VAR_2->wq, &VAR_2->mii_work, 0);
  }
 }

 return 0;
}
