
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {int size; int next2proc; int gen; int basePA; } ;
struct TYPE_8__ {int size; int basePA; } ;
struct TYPE_14__ {int size; int next2fill; int next2comp; int gen; int basePA; } ;
struct vmxnet3_tx_queue {int txdata_desc_size; int stopped; TYPE_2__ comp_ring; TYPE_1__ data_ring; TYPE_7__ tx_ring; } ;
struct TYPE_12__ {int size; int next2proc; int gen; int basePA; } ;
struct TYPE_11__ {int desc_size; int basePA; } ;
struct vmxnet3_rx_queue {TYPE_5__ comp_ring; TYPE_4__ data_ring; TYPE_3__* rx_ring; } ;
struct TYPE_13__ {int num_intrs; } ;
struct vmxnet3_adapter {int num_tx_queues; int num_rx_queues; struct vmxnet3_rx_queue* rx_queue; struct vmxnet3_tx_queue* tx_queue; TYPE_6__ intr; } ;
struct net_device {int dummy; } ;
struct ethtool_regs {int version; } ;
struct TYPE_10__ {int size; int next2fill; int next2comp; int gen; int basePA; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vmxnet3_adapter*,scalar_t__) ;
 int FUNC_3 (struct vmxnet3_adapter*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (void*,int ,int ) ;
 struct vmxnet3_adapter* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static void
FUNC_7(struct net_device *VAR_14, struct ethtool_regs *VAR_15, void *VAR_16)
{
 struct vmxnet3_adapter *VAR_17 = FUNC_5(VAR_14);
 u32 *VAR_18 = VAR_16;
 int VAR_19 = 0, VAR_20 = 0;

 FUNC_4(VAR_16, 0, FUNC_6(VAR_14));

 VAR_15->version = 2;



 VAR_18[VAR_20++] = FUNC_3(VAR_17, VAR_13);
 VAR_18[VAR_20++] = FUNC_3(VAR_17, VAR_12);
 VAR_18[VAR_20++] = FUNC_3(VAR_17, VAR_3);
 VAR_18[VAR_20++] = FUNC_3(VAR_17, VAR_2);
 VAR_18[VAR_20++] = FUNC_3(VAR_17, VAR_1);
 VAR_18[VAR_20++] = FUNC_3(VAR_17, VAR_8);
 VAR_18[VAR_20++] = FUNC_3(VAR_17, VAR_7);
 VAR_18[VAR_20++] = FUNC_3(VAR_17, VAR_5);
 VAR_18[VAR_20++] = FUNC_3(VAR_17, VAR_4);

 VAR_18[VAR_20++] = VAR_17->intr.num_intrs;
 for (VAR_19 = 0; VAR_19 < VAR_17->intr.num_intrs; VAR_19++) {
  VAR_18[VAR_20++] = FUNC_2(VAR_17, VAR_6
       + VAR_19 * VAR_0);
 }

 VAR_18[VAR_20++] = VAR_17->num_tx_queues;
 for (VAR_19 = 0; VAR_19 < VAR_17->num_tx_queues; VAR_19++) {
  struct vmxnet3_tx_queue *VAR_21 = &VAR_17->tx_queue[VAR_19];

  VAR_18[VAR_20++] = FUNC_2(VAR_17, VAR_11 +
       VAR_19 * VAR_0);

  VAR_18[VAR_20++] = FUNC_1(VAR_21->tx_ring.basePA);
  VAR_18[VAR_20++] = FUNC_0(VAR_21->tx_ring.basePA);
  VAR_18[VAR_20++] = VAR_21->tx_ring.size;
  VAR_18[VAR_20++] = VAR_21->tx_ring.next2fill;
  VAR_18[VAR_20++] = VAR_21->tx_ring.next2comp;
  VAR_18[VAR_20++] = VAR_21->tx_ring.gen;

  VAR_18[VAR_20++] = FUNC_1(VAR_21->data_ring.basePA);
  VAR_18[VAR_20++] = FUNC_0(VAR_21->data_ring.basePA);
  VAR_18[VAR_20++] = VAR_21->data_ring.size;
  VAR_18[VAR_20++] = VAR_21->txdata_desc_size;

  VAR_18[VAR_20++] = FUNC_1(VAR_21->comp_ring.basePA);
  VAR_18[VAR_20++] = FUNC_0(VAR_21->comp_ring.basePA);
  VAR_18[VAR_20++] = VAR_21->comp_ring.size;
  VAR_18[VAR_20++] = VAR_21->comp_ring.next2proc;
  VAR_18[VAR_20++] = VAR_21->comp_ring.gen;

  VAR_18[VAR_20++] = VAR_21->stopped;
 }

 VAR_18[VAR_20++] = VAR_17->num_rx_queues;
 for (VAR_19 = 0; VAR_19 < VAR_17->num_rx_queues; VAR_19++) {
  struct vmxnet3_rx_queue *VAR_22 = &VAR_17->rx_queue[VAR_19];

  VAR_18[VAR_20++] = FUNC_2(VAR_17, VAR_9 +
        VAR_19 * VAR_0);
  VAR_18[VAR_20++] = FUNC_2(VAR_17, VAR_10 +
        VAR_19 * VAR_0);

  VAR_18[VAR_20++] = FUNC_1(VAR_22->rx_ring[0].basePA);
  VAR_18[VAR_20++] = FUNC_0(VAR_22->rx_ring[0].basePA);
  VAR_18[VAR_20++] = VAR_22->rx_ring[0].size;
  VAR_18[VAR_20++] = VAR_22->rx_ring[0].next2fill;
  VAR_18[VAR_20++] = VAR_22->rx_ring[0].next2comp;
  VAR_18[VAR_20++] = VAR_22->rx_ring[0].gen;

  VAR_18[VAR_20++] = FUNC_1(VAR_22->rx_ring[1].basePA);
  VAR_18[VAR_20++] = FUNC_0(VAR_22->rx_ring[1].basePA);
  VAR_18[VAR_20++] = VAR_22->rx_ring[1].size;
  VAR_18[VAR_20++] = VAR_22->rx_ring[1].next2fill;
  VAR_18[VAR_20++] = VAR_22->rx_ring[1].next2comp;
  VAR_18[VAR_20++] = VAR_22->rx_ring[1].gen;

  VAR_18[VAR_20++] = FUNC_1(VAR_22->data_ring.basePA);
  VAR_18[VAR_20++] = FUNC_0(VAR_22->data_ring.basePA);
  VAR_18[VAR_20++] = VAR_22->rx_ring[0].size;
  VAR_18[VAR_20++] = VAR_22->data_ring.desc_size;

  VAR_18[VAR_20++] = FUNC_1(VAR_22->comp_ring.basePA);
  VAR_18[VAR_20++] = FUNC_0(VAR_22->comp_ring.basePA);
  VAR_18[VAR_20++] = VAR_22->comp_ring.size;
  VAR_18[VAR_20++] = VAR_22->comp_ring.next2proc;
  VAR_18[VAR_20++] = VAR_22->comp_ring.gen;
 }
}
