
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ql_tx_buf_cb {int seg_count; TYPE_4__* skb; int * map; } ;
struct ql3_adapter {int tx_count; TYPE_2__* ndev; int pdev; struct ql_tx_buf_cb* tx_buf; } ;
struct ob_mac_iocb_rsp {int flags; size_t transaction_id; } ;
struct TYPE_7__ {scalar_t__ len; } ;
struct TYPE_5__ {int tx_bytes; int tx_packets; int tx_errors; } ;
struct TYPE_6__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_2__*,char*,...) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct ql3_adapter *VAR_4,
       struct ob_mac_iocb_rsp *VAR_5)
{
 struct ql_tx_buf_cb *VAR_6;
 int VAR_7;

 if (VAR_5->flags & VAR_0) {
  FUNC_5(VAR_4->ndev,
       "Frame too short but it was padded and sent\n");
 }

 VAR_6 = &VAR_4->tx_buf[VAR_5->transaction_id];


 if (VAR_5->flags & VAR_0) {
  FUNC_4(VAR_4->ndev,
      "Frame too short to be legal, frame not sent\n");

  VAR_4->ndev->stats.tx_errors++;
  goto frame_not_sent;
 }

 if (VAR_6->seg_count == 0) {
  FUNC_4(VAR_4->ndev, "tx_cb->seg_count == 0: %d\n",
      VAR_5->transaction_id);

  VAR_4->ndev->stats.tx_errors++;
  goto invalid_seg_count;
 }

 FUNC_7(VAR_4->pdev,
    FUNC_2(&VAR_6->map[0], VAR_2),
    FUNC_3(&VAR_6->map[0], VAR_3),
    VAR_1);
 VAR_6->seg_count--;
 if (VAR_6->seg_count) {
  for (VAR_7 = 1; VAR_7 < VAR_6->seg_count; VAR_7++) {
   FUNC_6(VAR_4->pdev,
           FUNC_2(&VAR_6->map[VAR_7],
            VAR_2),
           FUNC_3(&VAR_6->map[VAR_7], VAR_3),
           VAR_1);
  }
 }
 VAR_4->ndev->stats.tx_packets++;
 VAR_4->ndev->stats.tx_bytes += VAR_6->skb->len;

frame_not_sent:
 FUNC_1(VAR_6->skb);
 VAR_6->skb = ((void*)0);

invalid_seg_count:
 FUNC_0(&VAR_4->tx_count);
}
