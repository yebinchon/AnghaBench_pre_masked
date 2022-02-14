
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tx_ring_desc {TYPE_1__* skb; int map_cnt; } ;
struct tx_ring {int tx_count; int tx_packets; int tx_bytes; struct tx_ring_desc* q; } ;
struct ql_adapter {int ndev; struct tx_ring* tx_ring; } ;
struct ob_mac_iocb_rsp {size_t txq_idx; size_t tid; int flags1; } ;
struct TYPE_2__ {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ob_mac_iocb_rsp*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_4 (struct ql_adapter*,struct tx_ring_desc*,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct ql_adapter *VAR_6,
       struct ob_mac_iocb_rsp *VAR_7)
{
 struct tx_ring *VAR_8;
 struct tx_ring_desc *VAR_9;

 FUNC_0(VAR_7);
 VAR_8 = &VAR_6->tx_ring[VAR_7->txq_idx];
 VAR_9 = &VAR_8->q[VAR_7->tid];
 FUNC_4(VAR_6, VAR_9, VAR_9->map_cnt);
 VAR_8->tx_bytes += (VAR_9->skb)->len;
 VAR_8->tx_packets++;
 FUNC_2(VAR_9->skb);
 VAR_9->skb = ((void*)0);

 if (FUNC_5(VAR_7->flags1 & (VAR_1 |
     VAR_4 |
     VAR_2 |
     VAR_3 | VAR_0))) {
  if (VAR_7->flags1 & VAR_1) {
   FUNC_3(VAR_6, VAR_5, VAR_6->ndev,
       "Total descriptor length did not match transfer length.\n");
  }
  if (VAR_7->flags1 & VAR_4) {
   FUNC_3(VAR_6, VAR_5, VAR_6->ndev,
       "Frame too short to be valid, not sent.\n");
  }
  if (VAR_7->flags1 & VAR_2) {
   FUNC_3(VAR_6, VAR_5, VAR_6->ndev,
       "Frame too long, but sent anyway.\n");
  }
  if (VAR_7->flags1 & VAR_0) {
   FUNC_3(VAR_6, VAR_5, VAR_6->ndev,
       "PCI backplane error. Frame not sent.\n");
  }
 }
 FUNC_1(&VAR_8->tx_count);
}
