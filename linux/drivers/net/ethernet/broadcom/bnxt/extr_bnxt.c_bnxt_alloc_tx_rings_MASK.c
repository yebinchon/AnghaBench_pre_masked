
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct tx_push_bd {int dummy; } ;
struct pci_dev {int dev; } ;
struct bnxt_ring_struct {int queue_id; int grp_idx; int ring_mem; } ;
struct bnxt_tx_ring_info {int data_mapping; scalar_t__ tx_push_mapping; int tx_push; TYPE_1__* bnapi; struct bnxt_ring_struct tx_ring_struct; } ;
struct bnxt {int tx_push_size; int tx_nr_rings; size_t* tc_to_qidx; int tx_nr_rings_xdp; int tx_nr_rings_per_tc; TYPE_2__* q_info; struct bnxt_tx_ring_info* tx_ring; scalar_t__ tx_push_thresh; struct pci_dev* pdev; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_4__ {int queue_id; } ;
struct TYPE_3__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct bnxt*,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int,scalar_t__*,int ) ;

__attribute__((used)) static int FUNC_4(struct bnxt *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 struct pci_dev *VAR_6 = VAR_2->pdev;

 VAR_2->tx_push_size = 0;
 if (VAR_2->tx_push_thresh) {
  int VAR_7;

  VAR_7 = FUNC_0(sizeof(struct tx_push_bd) +
     VAR_2->tx_push_thresh);

  if (VAR_7 > 256) {
   VAR_7 = 0;
   VAR_2->tx_push_thresh = 0;
  }

  VAR_2->tx_push_size = VAR_7;
 }

 for (VAR_3 = 0, VAR_4 = 0; VAR_3 < VAR_2->tx_nr_rings; VAR_3++) {
  struct bnxt_tx_ring_info *VAR_8 = &VAR_2->tx_ring[VAR_3];
  struct bnxt_ring_struct *VAR_9;
  u8 VAR_10;

  VAR_9 = &VAR_8->tx_ring_struct;

  VAR_5 = FUNC_1(VAR_2, &VAR_9->ring_mem);
  if (VAR_5)
   return VAR_5;

  VAR_9->grp_idx = VAR_8->bnapi->index;
  if (VAR_2->tx_push_size) {
   dma_addr_t VAR_11;




   VAR_8->tx_push = FUNC_3(&VAR_6->dev,
      VAR_2->tx_push_size,
      &VAR_8->tx_push_mapping,
      VAR_1);

   if (!VAR_8->tx_push)
    return -VAR_0;

   VAR_11 = VAR_8->tx_push_mapping +
    sizeof(struct tx_push_bd);
   VAR_8->data_mapping = FUNC_2(VAR_11);
  }
  VAR_10 = VAR_2->tc_to_qidx[VAR_4];
  VAR_9->queue_id = VAR_2->q_info[VAR_10].queue_id;
  if (VAR_3 < VAR_2->tx_nr_rings_xdp)
   continue;
  if (VAR_3 % VAR_2->tx_nr_rings_per_tc == (VAR_2->tx_nr_rings_per_tc - 1))
   VAR_4++;
 }
 return 0;
}
