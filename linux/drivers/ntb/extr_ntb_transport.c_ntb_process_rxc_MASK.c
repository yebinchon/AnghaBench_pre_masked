
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ntb_transport_qp {int rx_max_frame; int rx_index; int qp_num; int rx_bytes; int rx_max_entry; scalar_t__ rx_pkts; TYPE_2__* ndev; int rx_err_oflow; int rx_err_no_buf; int rx_post_q; int rx_pend_q; int ntb_rx_q_lock; int rx_err_ver; int rx_ring_empty; void* rx_buff; } ;
struct ntb_queue_entry {int rx_index; int len; int flags; struct ntb_payload_header* rx_hdr; } ;
struct ntb_payload_header {scalar_t__ ver; int len; int flags; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct ntb_queue_entry*,void*) ;
 int FUNC_2 (struct ntb_transport_qp*) ;
 struct ntb_queue_entry* FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (struct ntb_transport_qp*) ;

__attribute__((used)) static int FUNC_5(struct ntb_transport_qp *VAR_4)
{
 struct ntb_payload_header *VAR_5;
 struct ntb_queue_entry *VAR_6;
 void *VAR_7;

 VAR_7 = VAR_4->rx_buff + VAR_4->rx_max_frame * VAR_4->rx_index;
 VAR_5 = VAR_7 + VAR_4->rx_max_frame - sizeof(struct ntb_payload_header);

 FUNC_0(&VAR_4->ndev->pdev->dev, "qp %d: RX ver %u len %d flags %x\n",
  VAR_4->qp_num, VAR_5->ver, VAR_5->len, VAR_5->flags);

 if (!(VAR_5->flags & VAR_0)) {
  FUNC_0(&VAR_4->ndev->pdev->dev, "done flag not set\n");
  VAR_4->rx_ring_empty++;
  return -VAR_1;
 }

 if (VAR_5->flags & VAR_3) {
  FUNC_0(&VAR_4->ndev->pdev->dev, "link down flag set\n");
  FUNC_4(VAR_4);
  VAR_5->flags = 0;
  return -VAR_1;
 }

 if (VAR_5->ver != (u32)VAR_4->rx_pkts) {
  FUNC_0(&VAR_4->ndev->pdev->dev,
   "version mismatch, expected %llu - got %u\n",
   VAR_4->rx_pkts, VAR_5->ver);
  VAR_4->rx_err_ver++;
  return -VAR_2;
 }

 VAR_6 = FUNC_3(&VAR_4->ntb_rx_q_lock, &VAR_4->rx_pend_q, &VAR_4->rx_post_q);
 if (!VAR_6) {
  FUNC_0(&VAR_4->ndev->pdev->dev, "no receive buffer\n");
  VAR_4->rx_err_no_buf++;
  return -VAR_1;
 }

 VAR_6->rx_hdr = VAR_5;
 VAR_6->rx_index = VAR_4->rx_index;

 if (VAR_5->len > VAR_6->len) {
  FUNC_0(&VAR_4->ndev->pdev->dev,
   "receive buffer overflow! Wanted %d got %d\n",
   VAR_5->len, VAR_6->len);
  VAR_4->rx_err_oflow++;

  VAR_6->len = -VAR_2;
  VAR_6->flags |= VAR_0;

  FUNC_2(VAR_4);
 } else {
  FUNC_0(&VAR_4->ndev->pdev->dev,
   "RX OK index %u ver %u size %d into buf size %d\n",
   VAR_4->rx_index, VAR_5->ver, VAR_5->len, VAR_6->len);

  VAR_4->rx_bytes += VAR_5->len;
  VAR_4->rx_pkts++;

  VAR_6->len = VAR_5->len;

  FUNC_1(VAR_6, VAR_7);
 }

 VAR_4->rx_index++;
 VAR_4->rx_index %= VAR_4->rx_max_entry;

 return 0;
}
