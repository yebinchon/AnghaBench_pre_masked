
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;
struct hns3_nic_priv {int state; } ;
struct TYPE_12__ {int tx_bytes; int tx_pkts; int restart_queue; int io_err_cnt; } ;
struct hns3_enet_ring {int next_to_clean; TYPE_6__ stats; TYPE_5__* tqp; int syncp; TYPE_4__* tqp_vector; int next_to_use; } ;
struct TYPE_11__ {int tqp_index; scalar_t__ io_base; TYPE_2__* handle; } ;
struct TYPE_9__ {int total_bytes; int total_packets; } ;
struct TYPE_10__ {TYPE_3__ tx_group; } ;
struct TYPE_7__ {struct net_device* netdev; } ;
struct TYPE_8__ {TYPE_1__ kinfo; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hns3_enet_ring*,int,int*,int*) ;
 scalar_t__ FUNC_1 (struct hns3_enet_ring*) ;
 int FUNC_2 (struct hns3_enet_ring*,int) ;
 int FUNC_3 (struct net_device*,char*,int,int ,int) ;
 struct netdev_queue* FUNC_4 (struct net_device*,int ) ;
 struct hns3_nic_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct netdev_queue*,int,int) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct netdev_queue*) ;
 int FUNC_9 (struct netdev_queue*) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (struct hns3_enet_ring*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int) ;

void FUNC_18(struct hns3_enet_ring *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->tqp->handle->kinfo.netdev;
 struct hns3_nic_priv *VAR_5 = FUNC_5(VAR_4);
 struct netdev_queue *VAR_6;
 int VAR_7, VAR_8;
 int VAR_9;

 VAR_9 = FUNC_10(VAR_3->tqp->io_base + VAR_2);
 FUNC_12();

 if (FUNC_1(VAR_3) || VAR_9 == VAR_3->next_to_clean)
  return;

 if (FUNC_17(!FUNC_2(VAR_3, VAR_9))) {
  FUNC_3(VAR_4, "wrong head (%d, %d-%d)\n", VAR_9,
      VAR_3->next_to_use, VAR_3->next_to_clean);

  FUNC_15(&VAR_3->syncp);
  VAR_3->stats.io_err_cnt++;
  FUNC_16(&VAR_3->syncp);
  return;
 }

 VAR_7 = 0;
 VAR_8 = 0;
 FUNC_0(VAR_3, VAR_9, &VAR_7, &VAR_8);

 VAR_3->tqp_vector->tx_group.total_bytes += VAR_7;
 VAR_3->tqp_vector->tx_group.total_packets += VAR_8;

 FUNC_15(&VAR_3->syncp);
 VAR_3->stats.tx_bytes += VAR_7;
 VAR_3->stats.tx_pkts += VAR_8;
 FUNC_16(&VAR_3->syncp);

 VAR_6 = FUNC_4(VAR_4, VAR_3->tqp->tqp_index);
 FUNC_6(VAR_6, VAR_8, VAR_7);

 if (FUNC_17(VAR_8 && FUNC_7(VAR_4) &&
       (FUNC_11(VAR_3) > VAR_0))) {



  FUNC_13();
  if (FUNC_8(VAR_6) &&
      !FUNC_14(VAR_1, &VAR_5->state)) {
   FUNC_9(VAR_6);
   VAR_3->stats.restart_queue++;
  }
 }
}
