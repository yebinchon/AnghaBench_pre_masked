
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct sk_buff {scalar_t__ len; scalar_t__ ip_summed; int protocol; int truesize; int data_len; } ;
struct napi_struct {int dummy; } ;
struct rx_ring {int cq_id; int rx_bytes; int rx_packets; int rx_dropped; struct napi_struct napi; } ;
struct ql_adapter {struct net_device* ndev; } ;
struct net_device {scalar_t__ mtu; int features; } ;
struct iphdr {int frag_off; } ;
struct ib_mac_iocb_rsp {int flags2; int flags1; int flags3; } ;
struct TYPE_3__ {int page; scalar_t__ offset; void* va; } ;
struct TYPE_4__ {TYPE_1__ pg_chunk; } ;
struct bq_desc {TYPE_2__ p; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct sk_buff*,int,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_12 ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct napi_struct*,struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct net_device*,size_t) ;
 int FUNC_6 (struct ql_adapter*,int ,struct net_device*,char*) ;
 int FUNC_7 (struct ql_adapter*,int ,int ,struct net_device*,char*,...) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct ql_adapter*,int,struct rx_ring*) ;
 struct bq_desc* FUNC_12 (struct ql_adapter*,struct rx_ring*) ;
 int FUNC_13 (struct ql_adapter*,struct ib_mac_iocb_rsp*,void*,size_t*) ;
 int VAR_13 ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*,int ,int ,scalar_t__,size_t) ;
 int FUNC_16 (struct sk_buff*,void*,size_t) ;
 int FUNC_17 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_18(struct ql_adapter *VAR_14,
     struct rx_ring *VAR_15,
     struct ib_mac_iocb_rsp *VAR_16,
     u32 VAR_17,
     u16 VAR_18)
{
 struct net_device *VAR_19 = VAR_14->ndev;
 struct sk_buff *VAR_20 = ((void*)0);
 void *VAR_21;
 struct bq_desc *VAR_22 = FUNC_12(VAR_14, VAR_15);
 struct napi_struct *VAR_23 = &VAR_15->napi;
 size_t VAR_24 = VAR_1;

 VAR_20 = FUNC_5(VAR_19, VAR_17);
 if (!VAR_20) {
  VAR_15->rx_dropped++;
  FUNC_10(VAR_22->p.pg_chunk.page);
  return;
 }

 VAR_21 = VAR_22->p.pg_chunk.va;
 FUNC_9(VAR_21);


 if (VAR_16->flags2 & VAR_4) {
  FUNC_11(VAR_14, VAR_16->flags2, VAR_15);
  goto err_out;
 }


 FUNC_13(VAR_14, VAR_16, VAR_21, &VAR_24);




 if (VAR_20->len > VAR_19->mtu + VAR_24) {
  FUNC_6(VAR_14, VAR_12, VAR_14->ndev,
     "Segment too small, dropping.\n");
  VAR_15->rx_dropped++;
  goto err_out;
 }
 FUNC_16(VAR_20, VAR_21, VAR_24);
 FUNC_7(VAR_14, VAR_13, VAR_10, VAR_14->ndev,
       "%d bytes of headers and data in large. Chain page to new skb and pull tail.\n",
       VAR_17);
 FUNC_15(VAR_20, 0, VAR_22->p.pg_chunk.page,
    VAR_22->p.pg_chunk.offset + VAR_24,
    VAR_17 - VAR_24);
 VAR_20->len += VAR_17 - VAR_24;
 VAR_20->data_len += VAR_17 - VAR_24;
 VAR_20->truesize += VAR_17 - VAR_24;

 VAR_15->rx_packets++;
 VAR_15->rx_bytes += VAR_20->len;
 VAR_20->protocol = FUNC_2(VAR_20, VAR_19);
 FUNC_14(VAR_20);

 if ((VAR_19->features & VAR_11) &&
  !(VAR_16->flags1 & VAR_3)) {

  if (VAR_16->flags2 & VAR_5) {
   FUNC_7(VAR_14, VAR_13, VAR_10, VAR_14->ndev,
         "TCP checksum done!\n");
   VAR_20->ip_summed = VAR_0;
  } else if ((VAR_16->flags2 & VAR_6) &&
    (VAR_16->flags3 & VAR_7)) {

   struct iphdr *VAR_25 =
    (struct iphdr *)((u8 *)VAR_21 + VAR_24);
   if (!(VAR_25->frag_off &
    FUNC_3(VAR_8|VAR_9))) {
    VAR_20->ip_summed = VAR_0;
    FUNC_7(VAR_14, VAR_13, VAR_10,
          VAR_14->ndev,
          "UDP checksum done!\n");
   }
  }
 }

 FUNC_17(VAR_20, VAR_15->cq_id);
 if (VAR_18 != 0xffff)
  FUNC_0(VAR_20, FUNC_3(VAR_2), VAR_18);
 if (VAR_20->ip_summed == VAR_0)
  FUNC_4(VAR_23, VAR_20);
 else
  FUNC_8(VAR_20);
 return;
err_out:
 FUNC_1(VAR_20);
 FUNC_10(VAR_22->p.pg_chunk.page);
}
