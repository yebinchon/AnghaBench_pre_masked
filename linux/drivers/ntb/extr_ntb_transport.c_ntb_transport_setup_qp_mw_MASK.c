
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntb_transport_qp {unsigned int rx_max_frame; unsigned int rx_max_entry; unsigned int rx_alloc_entry; scalar_t__ tx_index; scalar_t__ tx_pkts; scalar_t__ rx_pkts; TYPE_1__* rx_buff; TYPE_1__* remote_rx_info; int rx_free_q; int ntb_rx_q_lock; scalar_t__ rx_index; } ;
struct ntb_transport_mw {TYPE_1__* virt_addr; scalar_t__ xlat_size; } ;
struct ntb_transport_ctx {unsigned int mw_count; unsigned int qp_count; struct ntb_transport_mw* mw_vec; struct ntb_dev* ndev; struct ntb_transport_qp* qp_vec; } ;
struct ntb_rx_info {int dummy; } ;
struct ntb_queue_entry {int entry; struct ntb_transport_qp* qp; } ;
struct ntb_payload_header {int dummy; } ;
struct ntb_dev {int dev; } ;
struct TYPE_2__ {int entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct ntb_transport_ctx*,unsigned int) ;
 int FUNC_1 (int *) ;
 struct ntb_queue_entry* FUNC_2 (int,int ,int) ;
 int FUNC_3 (void*,int ,int) ;
 unsigned int FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (int *,int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct ntb_transport_ctx *VAR_3,
         unsigned int VAR_4)
{
 struct ntb_transport_qp *VAR_5 = &VAR_3->qp_vec[VAR_4];
 struct ntb_transport_mw *VAR_6;
 struct ntb_dev *VAR_7 = VAR_3->ndev;
 struct ntb_queue_entry *VAR_8;
 unsigned int VAR_9, VAR_10;
 unsigned int VAR_11, VAR_12, VAR_13;
 unsigned int VAR_14;
 int VAR_15;

 VAR_12 = VAR_3->mw_count;
 VAR_13 = VAR_3->qp_count;

 VAR_11 = FUNC_0(VAR_3, VAR_4);
 VAR_6 = &VAR_3->mw_vec[VAR_11];

 if (!VAR_6->virt_addr)
  return -VAR_0;

 if (VAR_11 < VAR_13 % VAR_12)
  VAR_10 = VAR_13 / VAR_12 + 1;
 else
  VAR_10 = VAR_13 / VAR_12;

 VAR_9 = (unsigned int)VAR_6->xlat_size / VAR_10;
 VAR_5->rx_buff = VAR_6->virt_addr + VAR_9 * (VAR_4 / VAR_12);
 VAR_9 -= sizeof(struct ntb_rx_info);

 VAR_5->remote_rx_info = VAR_5->rx_buff + VAR_9;


 VAR_5->rx_max_frame = FUNC_4(VAR_2, VAR_9 / 2);
 VAR_5->rx_max_entry = VAR_9 / VAR_5->rx_max_frame;
 VAR_5->rx_index = 0;






 VAR_15 = FUNC_1(&VAR_7->dev);
 for (VAR_14 = VAR_5->rx_alloc_entry; VAR_14 < VAR_5->rx_max_entry; VAR_14++) {
  VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_1, VAR_15);
  if (!VAR_8)
   return -VAR_0;

  VAR_8->qp = VAR_5;
  FUNC_5(&VAR_5->ntb_rx_q_lock, &VAR_8->entry,
        &VAR_5->rx_free_q);
  VAR_5->rx_alloc_entry++;
 }

 VAR_5->remote_rx_info->entry = VAR_5->rx_max_entry - 1;


 for (VAR_14 = 0; VAR_14 < VAR_5->rx_max_entry; VAR_14++) {
  void *VAR_16 = (VAR_5->rx_buff + VAR_5->rx_max_frame * (VAR_14 + 1) -
    sizeof(struct ntb_payload_header));
  FUNC_3(VAR_16, 0, sizeof(struct ntb_payload_header));
 }

 VAR_5->rx_pkts = 0;
 VAR_5->tx_pkts = 0;
 VAR_5->tx_index = 0;

 return 0;
}
