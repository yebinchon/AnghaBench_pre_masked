
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {struct net_device* dev; } ;
struct hns_nic_ring_data {int queue_index; TYPE_1__ napi; struct hnae_ring* ring; } ;
struct hns_nic_priv {int state; scalar_t__ link; } ;
struct TYPE_4__ {int tx_pkts; int tx_bytes; int restart_queue; int io_err_cnt; } ;
struct hnae_ring {int next_to_clean; int max_desc_num_per_pkt; TYPE_2__ stats; int * desc_cb; int next_to_use; scalar_t__ io_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hnae_ring*,int*,int*) ;
 scalar_t__ FUNC_1 (struct hnae_ring*) ;
 int FUNC_2 (struct hnae_ring*,int) ;
 int FUNC_3 (struct net_device*,char*,int,int ,int) ;
 struct netdev_queue* FUNC_4 (struct net_device*,int ) ;
 struct hns_nic_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct netdev_queue*,int,int) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (struct netdev_queue*) ;
 int FUNC_10 (struct netdev_queue*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct hnae_ring*) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (int ,int *) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(struct hns_nic_ring_data *VAR_3,
          int VAR_4, void *VAR_5)
{
 struct hnae_ring *VAR_6 = VAR_3->ring;
 struct net_device *VAR_7 = VAR_3->napi.dev;
 struct netdev_queue *VAR_8;
 struct hns_nic_priv *VAR_9 = FUNC_5(VAR_7);
 int VAR_10;
 int VAR_11, VAR_12;

 VAR_10 = FUNC_12(VAR_6->io_base + VAR_2);
 FUNC_14();

 if (FUNC_1(VAR_6) || VAR_10 == VAR_6->next_to_clean)
  return 0;

 if (!FUNC_2(VAR_6, VAR_10)) {
  FUNC_3(VAR_7, "wrong head (%d, %d-%d)\n", VAR_10,
      VAR_6->next_to_use, VAR_6->next_to_clean);
  VAR_6->stats.io_err_cnt++;
  return -VAR_0;
 }

 VAR_11 = 0;
 VAR_12 = 0;
 while (VAR_10 != VAR_6->next_to_clean) {
  FUNC_0(VAR_6, &VAR_11, &VAR_12);

  FUNC_11(&VAR_6->desc_cb[VAR_6->next_to_clean]);
 }

 VAR_6->stats.tx_pkts += VAR_12;
 VAR_6->stats.tx_bytes += VAR_11;

 VAR_8 = FUNC_4(VAR_7, VAR_3->queue_index);
 FUNC_6(VAR_8, VAR_12, VAR_11);

 if (FUNC_17(VAR_9->link && !FUNC_7(VAR_7)))
  FUNC_8(VAR_7);

 if (FUNC_17(VAR_12 && FUNC_7(VAR_7) &&
       (FUNC_13(VAR_6) >= VAR_6->max_desc_num_per_pkt * 2))) {



  FUNC_15();
  if (FUNC_9(VAR_8) &&
      !FUNC_16(VAR_1, &VAR_9->state)) {
   FUNC_10(VAR_8);
   VAR_6->stats.restart_queue++;
  }
 }
 return 0;
}
