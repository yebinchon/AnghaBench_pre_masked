
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sk_buff {int ip_summed; int truesize; int data_len; int len; } ;
struct napi_struct {int dev; } ;
struct rx_ring {int cq_id; int rx_bytes; int rx_packets; int rx_dropped; struct napi_struct napi; } ;
struct ql_adapter {int ndev; } ;
struct ib_mac_iocb_rsp {int flags2; } ;
struct TYPE_4__ {int offset; int page; int va; } ;
struct TYPE_5__ {TYPE_1__ pg_chunk; } ;
struct bq_desc {TYPE_2__ p; } ;
struct TYPE_6__ {int nr_frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_1 (struct sk_buff*,int ,int) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 struct sk_buff* FUNC_3 (struct napi_struct*) ;
 int FUNC_4 (struct napi_struct*) ;
 int FUNC_5 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct ql_adapter*,int,struct rx_ring*) ;
 struct bq_desc* FUNC_9 (struct ql_adapter*,struct rx_ring*) ;
 int FUNC_10 (struct sk_buff*,int ) ;
 TYPE_3__* FUNC_11 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_12(struct ql_adapter *VAR_4,
     struct rx_ring *VAR_5,
     struct ib_mac_iocb_rsp *VAR_6,
     u32 VAR_7,
     u16 VAR_8)
{
 struct sk_buff *VAR_9;
 struct bq_desc *VAR_10 = FUNC_9(VAR_4, VAR_5);
 struct napi_struct *VAR_11 = &VAR_5->napi;


 if (VAR_6->flags2 & VAR_2) {
  FUNC_8(VAR_4, VAR_6->flags2, VAR_5);
  FUNC_7(VAR_10->p.pg_chunk.page);
  return;
 }
 VAR_11->dev = VAR_4->ndev;

 VAR_9 = FUNC_3(VAR_11);
 if (!VAR_9) {
  FUNC_5(VAR_4, VAR_3, VAR_4->ndev,
     "Couldn't get an skb, exiting.\n");
  VAR_5->rx_dropped++;
  FUNC_7(VAR_10->p.pg_chunk.page);
  return;
 }
 FUNC_6(VAR_10->p.pg_chunk.va);
 FUNC_0(VAR_9, FUNC_11(VAR_9)->nr_frags,
        VAR_10->p.pg_chunk.page,
        VAR_10->p.pg_chunk.offset,
        VAR_7);

 VAR_9->len += VAR_7;
 VAR_9->data_len += VAR_7;
 VAR_9->truesize += VAR_7;
 FUNC_11(VAR_9)->nr_frags++;

 VAR_5->rx_packets++;
 VAR_5->rx_bytes += VAR_7;
 VAR_9->ip_summed = VAR_0;
 FUNC_10(VAR_9, VAR_5->cq_id);
 if (VAR_8 != 0xffff)
  FUNC_1(VAR_9, FUNC_2(VAR_1), VAR_8);
 FUNC_4(VAR_11);
}
