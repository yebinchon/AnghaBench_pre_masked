
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_5__ {struct hnae_queue* q; } ;
struct TYPE_4__ {struct hnae_queue* q; } ;
struct hnae_queue {TYPE_2__ tx_ring; TYPE_1__ rx_ring; } ;
struct ring_pair_cb {int used_by_vf; struct hnae_queue q; } ;
struct hnae_handle {int q_num; int vf_id; size_t dport_id; int media_type; int port_type; int if_support; int phy_dev; int phy_if; struct hnae_queue** qs; int coal_param; struct hnae_ae_dev* dev; int owner_dev; } ;
struct hnae_vf_cb {size_t port_index; TYPE_3__* mac_cb; struct dsaf_device* dsaf_dev; struct hnae_handle ae_handle; } ;
struct hnae_ae_dev {int dummy; } ;
struct dsaf_device {TYPE_3__** mac_cb; int dev; } ;
struct TYPE_6__ {int media_type; int mac_type; int if_support; int phy_dev; int phy_if; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hnae_handle* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 struct ring_pair_cb* FUNC_2 (struct dsaf_device*,size_t) ;
 struct dsaf_device* FUNC_3 (struct hnae_ae_dev*) ;
 int FUNC_4 (struct dsaf_device*,size_t) ;
 int FUNC_5 (struct dsaf_device*,size_t) ;
 int FUNC_6 (struct hnae_vf_cb*) ;
 struct hnae_vf_cb* FUNC_7 (int,int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static struct hnae_handle *FUNC_9(struct hnae_ae_dev *VAR_4,
          u32 VAR_5)
{
 int VAR_6;
 int VAR_7;
 int VAR_8;
 struct dsaf_device *VAR_9;
 struct hnae_handle *VAR_10;
 struct ring_pair_cb *VAR_11;
 struct hnae_vf_cb *VAR_12;

 VAR_9 = FUNC_3(VAR_4);

 VAR_11 = FUNC_2(VAR_9, VAR_5);
 VAR_6 = FUNC_5(VAR_9, VAR_5);
 VAR_7 = FUNC_4(VAR_9, VAR_5);

 VAR_12 = FUNC_7(sizeof(*VAR_12) +
   VAR_7 * sizeof(struct hnae_queue *), VAR_2);
 if (FUNC_8(!VAR_12)) {
  FUNC_1(VAR_9->dev, "malloc vf_cb fail!\n");
  VAR_10 = FUNC_0(-VAR_1);
  goto handle_err;
 }
 VAR_10 = &VAR_12->ae_handle;

 VAR_10->owner_dev = VAR_9->dev;
 VAR_10->dev = VAR_4;
 VAR_10->q_num = VAR_7;
 VAR_10->coal_param = VAR_3;


 for (VAR_10->vf_id = 0;
  VAR_10->vf_id < VAR_6; VAR_10->vf_id++) {
  if (!VAR_11->used_by_vf)
   break;
  VAR_11 += VAR_7;
 }
 if (VAR_10->vf_id >= VAR_6) {
  FUNC_1(VAR_9->dev, "malloc queue fail!\n");
  VAR_10 = FUNC_0(-VAR_0);
  goto vf_id_err;
 }

 VAR_10->qs = (struct hnae_queue **)(&VAR_10->qs + 1);
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  VAR_10->qs[VAR_8] = &VAR_11->q;
  VAR_10->qs[VAR_8]->rx_ring.q = VAR_10->qs[VAR_8];
  VAR_10->qs[VAR_8]->tx_ring.q = VAR_10->qs[VAR_8];

  VAR_11->used_by_vf = 1;
  VAR_11++;
 }

 VAR_12->dsaf_dev = VAR_9;
 VAR_12->port_index = VAR_5;
 VAR_12->mac_cb = VAR_9->mac_cb[VAR_5];

 VAR_10->phy_if = VAR_12->mac_cb->phy_if;
 VAR_10->phy_dev = VAR_12->mac_cb->phy_dev;
 VAR_10->if_support = VAR_12->mac_cb->if_support;
 VAR_10->port_type = VAR_12->mac_cb->mac_type;
 VAR_10->media_type = VAR_12->mac_cb->media_type;
 VAR_10->dport_id = VAR_5;

 return VAR_10;
vf_id_err:
 FUNC_6(VAR_12);
handle_err:
 return VAR_10;
}
