
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {struct net_device* dev; } ;
struct ef4_nic {int rx_prefix_size; int rx_ip_align; int rx_packet_hash_offset; int rx_packet_ts_offset; int workqueue; int workqueue_name; TYPE_3__* type; int interrupt_mode; TYPE_2__* msi_context; int * channel; int flush_wq; int mac_work; TYPE_1__ mdio; int * phy_op; int mac_lock; int stats_lock; struct net_device* net_dev; int name; int state; int msg_enable; struct pci_dev* pci_dev; int selftest_work; int monitor_work; int reset_work; int mtd_list; int biu_lock; int secondary_list; int node; } ;
struct TYPE_6__ {int rx_prefix_size; int rx_hash_offset; int rx_ts_offset; int max_interrupt_mode; } ;
struct TYPE_5__ {int index; struct ef4_nic* efx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (struct ef4_nic*,int,int *) ;
 int VAR_5 ;
 int FUNC_5 (struct ef4_nic*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int *) ;
 int VAR_10 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 char* FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (int ,int,char*,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,char*,int) ;

__attribute__((used)) static int FUNC_13(struct ef4_nic *VAR_11,
      struct pci_dev *VAR_12, struct net_device *VAR_13)
{
 int VAR_14;


 FUNC_1(&VAR_11->node);
 FUNC_1(&VAR_11->secondary_list);
 FUNC_11(&VAR_11->biu_lock);



 FUNC_2(&VAR_11->reset_work, VAR_8);
 FUNC_0(&VAR_11->monitor_work, VAR_7);
 FUNC_0(&VAR_11->selftest_work, VAR_9);
 VAR_11->pci_dev = VAR_12;
 VAR_11->msg_enable = VAR_4;
 VAR_11->state = VAR_3;
 FUNC_12(VAR_11->name, FUNC_9(VAR_12), sizeof(VAR_11->name));

 VAR_11->net_dev = VAR_13;
 VAR_11->rx_prefix_size = VAR_11->type->rx_prefix_size;
 VAR_11->rx_ip_align =
  VAR_2 ? (VAR_11->rx_prefix_size + VAR_2) % 4 : 0;
 VAR_11->rx_packet_hash_offset =
  VAR_11->type->rx_hash_offset - VAR_11->type->rx_prefix_size;
 VAR_11->rx_packet_ts_offset =
  VAR_11->type->rx_ts_offset - VAR_11->type->rx_prefix_size;
 FUNC_11(&VAR_11->stats_lock);
 FUNC_8(&VAR_11->mac_lock);
 VAR_11->phy_op = &VAR_5;
 VAR_11->mdio.dev = VAR_13;
 FUNC_2(&VAR_11->mac_work, VAR_6);
 FUNC_6(&VAR_11->flush_wq);

 for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
  VAR_11->channel[VAR_14] = FUNC_4(VAR_11, VAR_14, ((void*)0));
  if (!VAR_11->channel[VAR_14])
   goto fail;
  VAR_11->msi_context[VAR_14].efx = VAR_11;
  VAR_11->msi_context[VAR_14].index = VAR_14;
 }


 VAR_11->interrupt_mode = FUNC_7(VAR_11->type->max_interrupt_mode,
      VAR_10);


 FUNC_10(VAR_11->workqueue_name, sizeof(VAR_11->workqueue_name), "sfc%s",
   FUNC_9(VAR_12));
 VAR_11->workqueue = FUNC_3(VAR_11->workqueue_name);
 if (!VAR_11->workqueue)
  goto fail;

 return 0;

fail:
 FUNC_5(VAR_11);
 return -VAR_1;
}
