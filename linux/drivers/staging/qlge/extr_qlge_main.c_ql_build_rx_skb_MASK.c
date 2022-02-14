
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; int data_len; int truesize; int data; } ;
struct rx_ring {int lbq_buf_size; } ;
struct ql_adapter {int ndev; int pdev; } ;
struct ib_mac_iocb_rsp {int flags4; int flags3; int hdr_len; int data_len; } ;
struct TYPE_3__ {int offset; int va; int page; } ;
struct TYPE_4__ {TYPE_1__ pg_chunk; struct sk_buff* skb; } ;
struct bq_desc {TYPE_2__ p; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*,size_t) ;
 int FUNC_1 (struct bq_desc*,int ) ;
 int FUNC_2 (struct bq_desc*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 struct sk_buff* FUNC_4 (int ,int) ;
 int FUNC_5 (struct ql_adapter*,int ,int ,int ,char*,...) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int VAR_10 ;
 struct bq_desc* FUNC_10 (struct ql_adapter*,struct rx_ring*) ;
 struct bq_desc* FUNC_11 (struct rx_ring*) ;
 int FUNC_12 (struct sk_buff*,int) ;
 int FUNC_13 (struct ql_adapter*,struct ib_mac_iocb_rsp*,int ,size_t*) ;
 int VAR_11 ;
 int FUNC_14 (struct sk_buff*,int,int ,int,int) ;
 int FUNC_15 (struct sk_buff*,int) ;
 int FUNC_16 (struct sk_buff*,int ,int) ;
 int FUNC_17 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_18 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_19(struct ql_adapter *VAR_12,
           struct rx_ring *VAR_13,
           struct ib_mac_iocb_rsp *VAR_14)
{
 struct bq_desc *VAR_15;
 struct bq_desc *VAR_16;
 struct sk_buff *VAR_17 = ((void*)0);
 u32 VAR_18 = FUNC_3(VAR_14->data_len);
 u32 VAR_19 = FUNC_3(VAR_14->hdr_len);
 size_t VAR_20 = VAR_0;




 if (VAR_14->flags4 & VAR_4 &&
     VAR_14->flags4 & VAR_3) {
  FUNC_5(VAR_12, VAR_11, VAR_5, VAR_12->ndev,
        "Header of %d bytes in small buffer.\n", VAR_19);



  VAR_16 = FUNC_11(VAR_13);
  FUNC_9(VAR_12->pdev,
    FUNC_1(VAR_16, VAR_8),
    FUNC_2(VAR_16, VAR_9),
    VAR_7);
  VAR_17 = VAR_16->p.skb;
  FUNC_12(VAR_17, VAR_19);
  FUNC_15(VAR_17, VAR_19);
  VAR_16->p.skb = ((void*)0);
 }




 if (FUNC_18(!VAR_18)) {
  FUNC_5(VAR_12, VAR_11, VAR_5, VAR_12->ndev,
        "No Data buffer in this packet.\n");
  return VAR_17;
 }

 if (VAR_14->flags3 & VAR_2) {
  if (VAR_14->flags4 & VAR_3) {
   FUNC_5(VAR_12, VAR_11, VAR_5, VAR_12->ndev,
         "Headers in small, data of %d bytes in small, combine them.\n",
         VAR_18);







   VAR_16 = FUNC_11(VAR_13);
   FUNC_6(VAR_12->pdev,
          FUNC_1
          (VAR_16, VAR_8),
          FUNC_2
          (VAR_16, VAR_9),
          VAR_7);
   FUNC_16(VAR_17, VAR_16->p.skb->data, VAR_18);
   FUNC_7(VAR_12->pdev,
             FUNC_1
             (VAR_16,
       VAR_8),
             FUNC_2
             (VAR_16,
       VAR_9),
             VAR_7);
  } else {
   FUNC_5(VAR_12, VAR_11, VAR_5, VAR_12->ndev,
         "%d bytes in a single small buffer.\n",
         VAR_18);
   VAR_16 = FUNC_11(VAR_13);
   VAR_17 = VAR_16->p.skb;
   FUNC_12(VAR_17, VAR_18);
   FUNC_15(VAR_17, VAR_18);
   FUNC_9(VAR_12->pdev,
      FUNC_1(VAR_16,
       VAR_8),
      FUNC_2(VAR_16,
             VAR_9),
      VAR_7);
   VAR_16->p.skb = ((void*)0);
  }
 } else if (VAR_14->flags3 & VAR_1) {
  if (VAR_14->flags4 & VAR_3) {
   FUNC_5(VAR_12, VAR_11, VAR_5, VAR_12->ndev,
         "Header in small, %d bytes in large. Chain large to small!\n",
         VAR_18);





   VAR_15 = FUNC_10(VAR_12, VAR_13);
   FUNC_5(VAR_12, VAR_11, VAR_5, VAR_12->ndev,
         "Chaining page at offset = %d, for %d bytes  to skb.\n",
         VAR_15->p.pg_chunk.offset, VAR_18);
   FUNC_14(VAR_17, 0, VAR_15->p.pg_chunk.page,
      VAR_15->p.pg_chunk.offset,
      VAR_18);
   VAR_17->len += VAR_18;
   VAR_17->data_len += VAR_18;
   VAR_17->truesize += VAR_18;
  } else {





   VAR_15 = FUNC_10(VAR_12, VAR_13);
   VAR_17 = FUNC_4(VAR_12->ndev, VAR_18);
   if (VAR_17 == ((void*)0)) {
    FUNC_5(VAR_12, VAR_10, VAR_5, VAR_12->ndev,
          "No skb available, drop the packet.\n");
    return ((void*)0);
   }
   FUNC_8(VAR_12->pdev,
           FUNC_1(VAR_15,
            VAR_8),
           FUNC_2(VAR_15, VAR_9),
           VAR_7);
   FUNC_17(VAR_17, VAR_6);
   FUNC_5(VAR_12, VAR_11, VAR_5, VAR_12->ndev,
         "%d bytes of headers and data in large. Chain page to new skb and pull tail.\n",
         VAR_18);
   FUNC_14(VAR_17, 0,
      VAR_15->p.pg_chunk.page,
      VAR_15->p.pg_chunk.offset,
      VAR_18);
   VAR_17->len += VAR_18;
   VAR_17->data_len += VAR_18;
   VAR_17->truesize += VAR_18;
   FUNC_13(VAR_12, VAR_14,
           VAR_15->p.pg_chunk.va,
           &VAR_20);
   FUNC_0(VAR_17, VAR_20);
  }
 } else {
  int VAR_21, VAR_22 = 0;
  VAR_16 = FUNC_11(VAR_13);
  FUNC_9(VAR_12->pdev,
     FUNC_1(VAR_16, VAR_8),
     FUNC_2(VAR_16, VAR_9),
     VAR_7);
  if (!(VAR_14->flags4 & VAR_3)) {
   FUNC_5(VAR_12, VAR_11, VAR_5, VAR_12->ndev,
         "%d bytes of headers & data in chain of large.\n",
         VAR_18);
   VAR_17 = VAR_16->p.skb;
   VAR_16->p.skb = ((void*)0);
   FUNC_17(VAR_17, VAR_6);
  }
  do {
   VAR_15 = FUNC_10(VAR_12, VAR_13);
   VAR_21 = (VAR_18 < VAR_13->lbq_buf_size) ? VAR_18 :
    VAR_13->lbq_buf_size;

   FUNC_5(VAR_12, VAR_11, VAR_5, VAR_12->ndev,
         "Adding page %d to skb for %d bytes.\n",
         VAR_22, VAR_21);
   FUNC_14(VAR_17, VAR_22,
      VAR_15->p.pg_chunk.page,
      VAR_15->p.pg_chunk.offset,
      VAR_21);
   VAR_17->len += VAR_21;
   VAR_17->data_len += VAR_21;
   VAR_17->truesize += VAR_21;
   VAR_18 -= VAR_21;
   VAR_22++;
  } while (VAR_18 > 0);
  FUNC_13(VAR_12, VAR_14, VAR_15->p.pg_chunk.va,
          &VAR_20);
  FUNC_0(VAR_17, VAR_20);
 }
 return VAR_17;
}
