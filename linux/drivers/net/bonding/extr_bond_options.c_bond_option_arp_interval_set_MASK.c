
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ arp_validate; int * arp_targets; scalar_t__ miimon; scalar_t__ arp_interval; } ;
struct bonding {int arp_work; int wq; int mii_work; int * recv_probe; TYPE_1__ params; TYPE_2__* dev; } ;
struct bond_opt_value {scalar_t__ value; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,char*,...) ;
 int FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct bonding *VAR_2,
     const struct bond_opt_value *VAR_3)
{
 FUNC_1(VAR_2->dev, "Setting ARP monitoring interval to %llu\n",
     VAR_3->value);
 VAR_2->params.arp_interval = VAR_3->value;
 if (VAR_3->value) {
  if (VAR_2->params.miimon) {
   FUNC_1(VAR_2->dev, "ARP monitoring cannot be used with MII monitoring. Disabling MII monitoring\n");
   VAR_2->params.miimon = 0;
  }
  if (!VAR_2->params.arp_targets[0])
   FUNC_1(VAR_2->dev, "ARP monitoring has been set up, but no ARP targets have been specified\n");
 }
 if (VAR_2->dev->flags & VAR_0) {





  if (!VAR_3->value) {
   if (VAR_2->params.arp_validate)
    VAR_2->recv_probe = ((void*)0);
   FUNC_0(&VAR_2->arp_work);
  } else {

   VAR_2->recv_probe = VAR_1;
   FUNC_0(&VAR_2->mii_work);
   FUNC_2(VAR_2->wq, &VAR_2->arp_work, 0);
  }
 }

 return 0;
}
