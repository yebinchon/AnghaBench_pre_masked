
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct rxpd {int rx_pkt_length; int rx_pkt_offset; int rx_pkt_type; } ;
struct TYPE_5__ {int h_proto; } ;
struct rx_packet_hdr {TYPE_2__ eth803_hdr; } ;
struct TYPE_4__ {int iftype; } ;
struct mwifiex_private {scalar_t__ bss_role; TYPE_3__* adapter; TYPE_1__ wdev; int curr_addr; } ;
struct TYPE_6__ {int fw_cap_info; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct sk_buff* FUNC_1 (struct sk_buff_head*) ;
 int FUNC_2 (struct sk_buff_head*) ;
 int FUNC_3 (struct sk_buff*,struct sk_buff_head*,int ,int ,int ,int *,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,int ,char*) ;
 int FUNC_6 (struct mwifiex_private*,int *,int ) ;
 int FUNC_7 (struct mwifiex_private*,struct sk_buff*) ;
 int FUNC_8 (struct mwifiex_private*,struct sk_buff*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct sk_buff*,scalar_t__) ;
 int FUNC_11 (struct sk_buff_head*) ;
 int FUNC_12 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct mwifiex_private *VAR_4,
       struct sk_buff *VAR_5)
{
 struct rxpd *VAR_6 = (struct rxpd *)(VAR_5->data);
 int VAR_7;

 if (FUNC_4(VAR_6->rx_pkt_type) == VAR_3) {
  struct sk_buff_head VAR_8;
  struct sk_buff *VAR_9;

  FUNC_2(&VAR_8);

  FUNC_10(VAR_5, FUNC_4(VAR_6->rx_pkt_offset));
  FUNC_12(VAR_5, FUNC_4(VAR_6->rx_pkt_length));

  FUNC_3(VAR_5, &VAR_8, VAR_4->curr_addr,
      VAR_4->wdev.iftype, 0, ((void*)0), ((void*)0));

  while (!FUNC_11(&VAR_8)) {
   struct rx_packet_hdr *VAR_10;

   VAR_9 = FUNC_1(&VAR_8);
   VAR_10 = (struct rx_packet_hdr *)VAR_9->data;
   if (FUNC_0(VAR_4->adapter->fw_cap_info) &&
       FUNC_9(VAR_10->eth803_hdr.h_proto) == VAR_1) {
    FUNC_6(VAR_4,
          (u8 *)VAR_10,
          VAR_5->len);
   }

   if (VAR_4->bss_role == VAR_2)
    VAR_7 = FUNC_8(VAR_4, VAR_9);
   else
    VAR_7 = FUNC_7(VAR_4, VAR_9);
   if (VAR_7 == -1)
    FUNC_5(VAR_4->adapter, VAR_0,
         "Rx of A-MSDU failed");
  }
  return 0;
 }

 return -1;
}
