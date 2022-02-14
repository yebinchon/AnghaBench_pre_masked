
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hns_nic_ring_data {int queue_index; TYPE_2__* ring; int napi; int fini_process; int ex_process; int poll_one; } ;
struct hns_nic_priv {int netdev; struct hns_nic_ring_data* ring_data; int enet_ver; struct hnae_handle* ae_handle; } ;
struct hnae_handle {int q_num; TYPE_1__** qs; } ;
struct TYPE_4__ {void* irq_init_flag; } ;
struct TYPE_3__ {TYPE_2__ rx_ring; TYPE_2__ tx_ring; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_1 (int,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct hns_nic_ring_data* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int *,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct hns_nic_priv *VAR_14)
{
 struct hnae_handle *VAR_15 = VAR_14->ae_handle;
 struct hns_nic_ring_data *VAR_16;
 bool VAR_17 = FUNC_0(VAR_14->enet_ver);
 int VAR_18;

 if (VAR_15->q_num > VAR_4) {
  FUNC_3(VAR_14->netdev, "too much queue (%d)\n", VAR_15->q_num);
  return -VAR_0;
 }

 VAR_14->ring_data = FUNC_2(FUNC_1(VAR_15->q_num,
           sizeof(*VAR_14->ring_data), 2),
      VAR_2);
 if (!VAR_14->ring_data)
  return -VAR_1;

 for (VAR_18 = 0; VAR_18 < VAR_15->q_num; VAR_18++) {
  VAR_16 = &VAR_14->ring_data[VAR_18];
  VAR_16->queue_index = VAR_18;
  VAR_16->ring = &VAR_15->qs[VAR_18]->tx_ring;
  VAR_16->poll_one = VAR_13;
  VAR_16->fini_process = VAR_17 ? VAR_11 :
   VAR_12;

  FUNC_4(VAR_14->netdev, &VAR_16->napi,
          VAR_6, VAR_3);
  VAR_16->ring->irq_init_flag = VAR_5;
 }
 for (VAR_18 = VAR_15->q_num; VAR_18 < VAR_15->q_num * 2; VAR_18++) {
  VAR_16 = &VAR_14->ring_data[VAR_18];
  VAR_16->queue_index = VAR_18 - VAR_15->q_num;
  VAR_16->ring = &VAR_15->qs[VAR_18 - VAR_15->q_num]->rx_ring;
  VAR_16->poll_one = VAR_9;
  VAR_16->ex_process = VAR_10;
  VAR_16->fini_process = VAR_17 ? VAR_7 :
   VAR_8;

  FUNC_4(VAR_14->netdev, &VAR_16->napi,
          VAR_6, VAR_3);
  VAR_16->ring->irq_init_flag = VAR_5;
 }

 return 0;
}
