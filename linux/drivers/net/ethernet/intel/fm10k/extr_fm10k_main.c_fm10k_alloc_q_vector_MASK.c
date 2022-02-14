
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct fm10k_ring {unsigned int queue_index; int count; struct fm10k_q_vector* q_vector; int l2_accel; int netdev; int * dev; } ;
struct TYPE_9__ {unsigned int count; int itr_scale; int itr; struct fm10k_ring* ring; } ;
struct TYPE_6__ {unsigned int count; int itr_scale; int itr; int work_limit; struct fm10k_ring* ring; } ;
struct fm10k_q_vector {unsigned int v_idx; TYPE_4__ rx; TYPE_1__ tx; struct fm10k_ring* ring; struct fm10k_intfc* interface; int napi; } ;
struct TYPE_7__ {int itr_scale; } ;
struct TYPE_8__ {TYPE_2__ mac; } ;
struct fm10k_intfc {struct fm10k_ring** rx_ring; int rx_ring_count; int l2_accel; int netdev; TYPE_5__* pdev; TYPE_3__ hw; int rx_itr; struct fm10k_ring** tx_ring; int tx_ring_count; int tx_itr; struct fm10k_q_vector** q_vector; } ;
struct TYPE_10__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fm10k_q_vector*) ;
 int VAR_4 ;
 struct fm10k_q_vector* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct fm10k_q_vector*,struct fm10k_ring*,int) ;

__attribute__((used)) static int FUNC_5(struct fm10k_intfc *VAR_5,
    unsigned int VAR_6, unsigned int VAR_7,
    unsigned int VAR_8, unsigned int VAR_9,
    unsigned int VAR_10, unsigned int VAR_11)
{
 struct fm10k_q_vector *VAR_12;
 struct fm10k_ring *VAR_13;
 int VAR_14;

 VAR_14 = VAR_8 + VAR_10;


 VAR_12 = FUNC_1(FUNC_4(VAR_12, VAR_13, VAR_14), VAR_2);
 if (!VAR_12)
  return -VAR_0;


 FUNC_2(VAR_5->netdev, &VAR_12->napi,
         VAR_4, VAR_3);


 VAR_5->q_vector[VAR_7] = VAR_12;
 VAR_12->interface = VAR_5;
 VAR_12->v_idx = VAR_7;


 VAR_13 = VAR_12->ring;


 VAR_12->tx.ring = VAR_13;
 VAR_12->tx.work_limit = VAR_1;
 VAR_12->tx.itr = VAR_5->tx_itr;
 VAR_12->tx.itr_scale = VAR_5->hw.mac.itr_scale;
 VAR_12->tx.count = VAR_8;

 while (VAR_8) {

  VAR_13->dev = &VAR_5->pdev->dev;
  VAR_13->netdev = VAR_5->netdev;


  VAR_13->q_vector = VAR_12;


  VAR_13->count = VAR_5->tx_ring_count;
  VAR_13->queue_index = VAR_9;


  VAR_5->tx_ring[VAR_9] = VAR_13;


  VAR_8--;
  VAR_9 += VAR_6;


  VAR_13++;
 }


 VAR_12->rx.ring = VAR_13;
 VAR_12->rx.itr = VAR_5->rx_itr;
 VAR_12->rx.itr_scale = VAR_5->hw.mac.itr_scale;
 VAR_12->rx.count = VAR_10;

 while (VAR_10) {

  VAR_13->dev = &VAR_5->pdev->dev;
  VAR_13->netdev = VAR_5->netdev;
  FUNC_3(VAR_13->l2_accel, VAR_5->l2_accel);


  VAR_13->q_vector = VAR_12;


  VAR_13->count = VAR_5->rx_ring_count;
  VAR_13->queue_index = VAR_11;


  VAR_5->rx_ring[VAR_11] = VAR_13;


  VAR_10--;
  VAR_11 += VAR_6;


  VAR_13++;
 }

 FUNC_0(VAR_12);

 return 0;
}
