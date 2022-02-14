
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct sk_buff {scalar_t__ len; scalar_t__ ip_summed; scalar_t__ data; int protocol; } ;
struct rx_ring {int napi; int cq_id; int rx_bytes; int rx_packets; int rx_dropped; } ;
struct ql_adapter {struct net_device* ndev; int flags; int pdev; } ;
struct net_device {scalar_t__ mtu; int features; } ;
struct iphdr {int frag_off; } ;
struct ib_mac_iocb_rsp {int flags2; int flags1; int flags3; } ;
struct TYPE_2__ {struct sk_buff* skb; } ;
struct bq_desc {TYPE_1__ p; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct sk_buff*,int,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct bq_desc*,int ) ;
 int FUNC_3 (struct bq_desc*,int ) ;
 int FUNC_4 (struct sk_buff*,struct net_device*) ;
 int FUNC_5 (int) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_6 (int *,struct sk_buff*) ;
 struct sk_buff* FUNC_7 (struct net_device*,scalar_t__) ;
 int FUNC_8 (struct ql_adapter*,int ,int ,struct net_device*,char*,...) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int ,int ,int ,int ) ;
 int FUNC_11 (int ,int ,int ,int ) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct ql_adapter*,int,struct rx_ring*) ;
 int FUNC_14 (struct ql_adapter*,struct sk_buff*) ;
 struct bq_desc* FUNC_15 (struct rx_ring*) ;
 int VAR_22 ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*,scalar_t__,scalar_t__) ;
 int FUNC_18 (struct sk_buff*,int ) ;
 int FUNC_19 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_20 (int ,int *) ;

__attribute__((used)) static void FUNC_21(struct ql_adapter *VAR_23,
     struct rx_ring *VAR_24,
     struct ib_mac_iocb_rsp *VAR_25,
     u32 VAR_26,
     u16 VAR_27)
{
 struct net_device *VAR_28 = VAR_23->ndev;
 struct sk_buff *VAR_29 = ((void*)0);
 struct sk_buff *VAR_30 = ((void*)0);
 struct bq_desc *VAR_31 = FUNC_15(VAR_24);

 VAR_29 = VAR_31->p.skb;

 VAR_30 = FUNC_7(VAR_23->ndev, VAR_26 + VAR_17);
 if (VAR_30 == ((void*)0)) {
  VAR_24->rx_dropped++;
  return;
 }
 FUNC_19(VAR_30, VAR_17);

 FUNC_10(VAR_23->pdev,
        FUNC_2(VAR_31, VAR_20),
        FUNC_3(VAR_31, VAR_21),
        VAR_18);

 FUNC_17(VAR_30, VAR_29->data, VAR_26);

 FUNC_11(VAR_23->pdev,
           FUNC_2(VAR_31, VAR_20),
           FUNC_3(VAR_31, VAR_21),
           VAR_18);
 VAR_29 = VAR_30;


 if (VAR_25->flags2 & VAR_4) {
  FUNC_13(VAR_23, VAR_25->flags2, VAR_24);
  FUNC_1(VAR_29);
  return;
 }


 if (FUNC_20(VAR_19, &VAR_23->flags)) {
  FUNC_14(VAR_23, VAR_29);
  FUNC_1(VAR_29);
  return;
 }




 if (VAR_29->len > VAR_28->mtu + VAR_1) {
  FUNC_1(VAR_29);
  VAR_24->rx_dropped++;
  return;
 }

 FUNC_12(VAR_29->data);
 if (VAR_25->flags1 & VAR_6) {
  FUNC_8(VAR_23, VAR_22, VAR_15, VAR_23->ndev,
        "%s Multicast.\n",
        (VAR_25->flags1 & VAR_6) ==
        VAR_5 ? "Hash" :
        (VAR_25->flags1 & VAR_6) ==
        VAR_8 ? "Registered" :
        (VAR_25->flags1 & VAR_6) ==
        VAR_7 ? "Promiscuous" : "");
 }
 if (VAR_25->flags2 & VAR_9)
  FUNC_8(VAR_23, VAR_22, VAR_15, VAR_23->ndev,
        "Promiscuous Packet.\n");

 VAR_24->rx_packets++;
 VAR_24->rx_bytes += VAR_29->len;
 VAR_29->protocol = FUNC_4(VAR_29, VAR_28);
 FUNC_16(VAR_29);




 if ((VAR_28->features & VAR_16) &&
  !(VAR_25->flags1 & VAR_3)) {

  if (VAR_25->flags2 & VAR_10) {
   FUNC_8(VAR_23, VAR_22, VAR_15, VAR_23->ndev,
         "TCP checksum done!\n");
   VAR_29->ip_summed = VAR_0;
  } else if ((VAR_25->flags2 & VAR_11) &&
    (VAR_25->flags3 & VAR_12)) {

   struct iphdr *VAR_32 = (struct iphdr *) VAR_29->data;
   if (!(VAR_32->frag_off &
    FUNC_5(VAR_13|VAR_14))) {
    VAR_29->ip_summed = VAR_0;
    FUNC_8(VAR_23, VAR_22, VAR_15,
          VAR_23->ndev,
          "UDP checksum done!\n");
   }
  }
 }

 FUNC_18(VAR_29, VAR_24->cq_id);
 if (VAR_27 != 0xffff)
  FUNC_0(VAR_29, FUNC_5(VAR_2), VAR_27);
 if (VAR_29->ip_summed == VAR_0)
  FUNC_6(&VAR_24->napi, VAR_29);
 else
  FUNC_9(VAR_29);
}
