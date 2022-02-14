
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int cb; int protocol; int pkt_type; int dev; scalar_t__ data; } ;
struct libipw_rx_stats {int dummy; } ;
struct libipw_hdr_4addr {int addr2; int addr3; int frame_ctl; } ;
struct TYPE_4__ {int length; } ;
struct TYPE_5__ {TYPE_1__ frame; } ;
struct ipw_rx_packet {TYPE_2__ u; } ;
struct ipw_rx_mem_buffer {struct sk_buff* skb; } ;
struct ipw_priv {int config; TYPE_3__* ieee; int bssid; } ;
struct TYPE_6__ {scalar_t__ iw_mode; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct ipw_priv*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,struct libipw_hdr_4addr*,struct libipw_rx_stats*) ;
 int FUNC_7 (int ,struct libipw_rx_stats*,int) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,scalar_t__) ;
 int FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (struct sk_buff*,scalar_t__) ;
 int FUNC_13 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_14(struct ipw_priv *VAR_7,
       struct ipw_rx_mem_buffer *VAR_8,
       struct libipw_rx_stats *VAR_9)
{
 struct sk_buff *VAR_10 = VAR_8->skb;
 struct ipw_rx_packet *VAR_11 = (struct ipw_rx_packet *)VAR_10->data;
 struct libipw_hdr_4addr *VAR_12 = (struct libipw_hdr_4addr *)
     (VAR_10->data + VAR_4);

 FUNC_6(VAR_7->ieee, VAR_12, VAR_9);

 if (VAR_7->ieee->iw_mode == VAR_5 &&
     ((FUNC_1(FUNC_5(VAR_12->frame_ctl)) ==
       VAR_3) ||
      (FUNC_1(FUNC_5(VAR_12->frame_ctl)) ==
       VAR_2))) {
  if (FUNC_3(VAR_12->addr3, VAR_7->bssid))
   FUNC_4(VAR_7, VAR_12->addr2);
 }

 if (VAR_7->config & VAR_0) {
  FUNC_0("sending stat packet\n");



  FUNC_12(VAR_10, FUNC_5(VAR_11->u.frame.length) +
   VAR_4);


  FUNC_10(VAR_10, VAR_4);


  FUNC_7(FUNC_11(VAR_10, sizeof(*VAR_9)), VAR_9, sizeof(*VAR_9));

  VAR_10->dev = VAR_7->ieee->dev;


  FUNC_13(VAR_10);

  VAR_10->pkt_type = VAR_6;
  VAR_10->protocol = FUNC_2(VAR_1);
  FUNC_8(VAR_10->cb, 0, sizeof(VAR_8->skb->cb));
  FUNC_9(VAR_10);
  VAR_8->skb = ((void*)0);
 }
}
