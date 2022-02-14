
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* u32 ;
typedef int u16 ;
struct TYPE_13__ {int vlan; } ;
struct TYPE_12__ {scalar_t__ addr; } ;
struct TYPE_11__ {int vlan; } ;
struct ionic_rx_filter_add_cmd {TYPE_5__ mac_vlan; TYPE_4__ mac; TYPE_3__ vlan; int match; } ;
struct ionic_rx_filter {unsigned int filter_id; int by_id; int by_hash; int cmd; int rxq_index; void* flow_id; } ;
struct TYPE_16__ {int lock; struct hlist_head* by_id; struct hlist_head* by_hash; } ;
struct ionic_lif {TYPE_8__ rx_filters; TYPE_1__* ionic; } ;
struct TYPE_14__ {int filter_id; } ;
struct TYPE_15__ {TYPE_6__ rx_filter_add; } ;
struct TYPE_10__ {struct ionic_rx_filter_add_cmd rx_filter_add; } ;
struct ionic_admin_ctx {TYPE_7__ comp; TYPE_2__ cmd; } ;
struct hlist_head {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_9__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 unsigned int VAR_4 ;



 struct ionic_rx_filter* FUNC_1 (struct device*,int,int ) ;
 unsigned int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (int *,struct hlist_head*) ;
 int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (int *,struct ionic_rx_filter_add_cmd*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct ionic_lif *VAR_5, u32 VAR_6, u16 VAR_7,
    u32 VAR_8, struct ionic_admin_ctx *VAR_9)
{
 struct device *VAR_10 = VAR_5->ionic->dev;
 struct ionic_rx_filter_add_cmd *VAR_11;
 struct ionic_rx_filter *VAR_12;
 struct hlist_head *VAR_13;
 unsigned int VAR_14;

 VAR_11 = &VAR_9->cmd.rx_filter_add;

 switch (FUNC_4(VAR_11->match)) {
 case 128:
  VAR_14 = FUNC_4(VAR_11->vlan.vlan);
  break;
 case 130:
  VAR_14 = *(u32 *)VAR_11->mac.addr;
  break;
 case 129:
  VAR_14 = FUNC_4(VAR_11->mac_vlan.vlan);
  break;
 default:
  return -VAR_0;
 }

 VAR_12 = FUNC_1(VAR_10, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->flow_id = VAR_6;
 VAR_12->filter_id = FUNC_5(VAR_9->comp.rx_filter_add.filter_id);
 VAR_12->rxq_index = VAR_7;
 FUNC_6(&VAR_12->cmd, VAR_11, sizeof(VAR_12->cmd));

 FUNC_0(&VAR_12->by_hash);
 FUNC_0(&VAR_12->by_id);

 FUNC_7(&VAR_5->rx_filters.lock);

 VAR_14 = FUNC_2(VAR_14, VAR_3);
 VAR_13 = &VAR_5->rx_filters.by_hash[VAR_14];
 FUNC_3(&VAR_12->by_hash, VAR_13);

 VAR_14 = VAR_12->filter_id & VAR_4;
 VAR_13 = &VAR_5->rx_filters.by_id[VAR_14];
 FUNC_3(&VAR_12->by_id, VAR_13);

 FUNC_8(&VAR_5->rx_filters.lock);

 return 0;
}
