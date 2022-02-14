
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {struct net_device* dev; } ;
struct TYPE_5__ {int list; } ;
struct efx_nic {int rx_prefix_size; int rx_ip_align; int rx_packet_hash_offset; int rx_packet_ts_offset; int num_mac_stats; int workqueue; int workqueue_name; TYPE_4__* type; int interrupt_mode; TYPE_3__* msi_context; int * channel; int flush_wq; int mac_work; TYPE_2__ mdio; int * phy_op; int rps_hash_table; int rps_hash_lock; int rps_mutex; int mac_lock; int vi_stride; int stats_lock; int rss_lock; TYPE_1__ rss_context; struct net_device* net_dev; int name; int state; int msg_enable; struct pci_dev* pci_dev; int selftest_work; int monitor_work; int reset_work; int mtd_list; int biu_lock; int secondary_list; int node; } ;
struct TYPE_8__ {int rx_prefix_size; int rx_hash_offset; int rx_ts_offset; scalar_t__ max_interrupt_mode; scalar_t__ min_interrupt_mode; } ;
struct TYPE_7__ {int index; struct efx_nic* efx; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_10 ;
 int FUNC_6 (struct efx_nic*,int,int *) ;
 int VAR_11 ;
 int FUNC_7 (struct efx_nic*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_8 (int *) ;
 int VAR_16 ;
 int FUNC_9 (int ,int,int ) ;
 int FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (int *) ;
 char* FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (int ,int,char*,char*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,char*,int) ;

__attribute__((used)) static int FUNC_17(struct efx_nic *VAR_17,
      struct pci_dev *VAR_18, struct net_device *VAR_19)
{
 int VAR_20 = -VAR_4, VAR_21;


 FUNC_2(&VAR_17->node);
 FUNC_2(&VAR_17->secondary_list);
 FUNC_15(&VAR_17->biu_lock);



 FUNC_3(&VAR_17->reset_work, VAR_14);
 FUNC_1(&VAR_17->monitor_work, VAR_13);
 FUNC_1(&VAR_17->selftest_work, VAR_15);
 VAR_17->pci_dev = VAR_18;
 VAR_17->msg_enable = VAR_10;
 VAR_17->state = VAR_9;
 FUNC_16(VAR_17->name, FUNC_13(VAR_18), sizeof(VAR_17->name));

 VAR_17->net_dev = VAR_19;
 VAR_17->rx_prefix_size = VAR_17->type->rx_prefix_size;
 VAR_17->rx_ip_align =
  VAR_8 ? (VAR_17->rx_prefix_size + VAR_8) % 4 : 0;
 VAR_17->rx_packet_hash_offset =
  VAR_17->type->rx_hash_offset - VAR_17->type->rx_prefix_size;
 VAR_17->rx_packet_ts_offset =
  VAR_17->type->rx_ts_offset - VAR_17->type->rx_prefix_size;
 FUNC_2(&VAR_17->rss_context.list);
 FUNC_12(&VAR_17->rss_lock);
 FUNC_15(&VAR_17->stats_lock);
 VAR_17->vi_stride = VAR_1;
 VAR_17->num_mac_stats = VAR_7;
 FUNC_0(VAR_7 - 1 != VAR_6);
 FUNC_12(&VAR_17->mac_lock);







 VAR_17->phy_op = &VAR_11;
 VAR_17->mdio.dev = VAR_19;
 FUNC_3(&VAR_17->mac_work, VAR_12);
 FUNC_8(&VAR_17->flush_wq);

 for (VAR_21 = 0; VAR_21 < VAR_2; VAR_21++) {
  VAR_17->channel[VAR_21] = FUNC_6(VAR_17, VAR_21, ((void*)0));
  if (!VAR_17->channel[VAR_21])
   goto fail;
  VAR_17->msi_context[VAR_21].efx = VAR_17;
  VAR_17->msi_context[VAR_21].index = VAR_21;
 }


 if (FUNC_4(VAR_17->type->max_interrupt_mode >
    VAR_17->type->min_interrupt_mode)) {
  VAR_20 = -VAR_3;
  goto fail;
 }
 VAR_17->interrupt_mode = FUNC_10(VAR_17->type->max_interrupt_mode,
      VAR_16);
 VAR_17->interrupt_mode = FUNC_11(VAR_17->type->min_interrupt_mode,
      VAR_16);


 FUNC_14(VAR_17->workqueue_name, sizeof(VAR_17->workqueue_name), "sfc%s",
   FUNC_13(VAR_18));
 VAR_17->workqueue = FUNC_5(VAR_17->workqueue_name);
 if (!VAR_17->workqueue)
  goto fail;

 return 0;

fail:
 FUNC_7(VAR_17);
 return VAR_20;
}
