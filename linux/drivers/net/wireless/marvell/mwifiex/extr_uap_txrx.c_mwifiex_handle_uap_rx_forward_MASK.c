
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct uap_rxpd {int rx_pkt_offset; } ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int h_dest; } ;
struct rx_packet_hdr {TYPE_1__ eth803_hdr; } ;
struct mwifiex_private {int media_connected; struct mwifiex_adapter* adapter; } ;
struct mwifiex_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct mwifiex_adapter*,int ,char*) ;
 scalar_t__ FUNC_5 (struct mwifiex_private*,int *) ;
 int FUNC_6 (struct mwifiex_private*,struct sk_buff*) ;
 int FUNC_7 (struct mwifiex_private*,struct sk_buff*) ;
 struct sk_buff* FUNC_8 (struct sk_buff*,int ) ;

int FUNC_9(struct mwifiex_private *VAR_3,
      struct sk_buff *VAR_4)
{
 struct mwifiex_adapter *VAR_5 = VAR_3->adapter;
 struct uap_rxpd *VAR_6;
 struct rx_packet_hdr *VAR_7;
 u8 VAR_8[VAR_1];
 struct sk_buff *VAR_9;

 VAR_6 = (struct uap_rxpd *)(VAR_4->data);
 VAR_7 = (void *)VAR_6 + FUNC_2(VAR_6->rx_pkt_offset);


 if (!VAR_3->media_connected) {
  FUNC_4(VAR_5, VAR_0,
       "drop packet in disconnected state.\n");
  FUNC_0(VAR_4);
  return 0;
 }

 FUNC_3(VAR_8, VAR_7->eth803_hdr.h_dest, VAR_1);

 if (FUNC_1(VAR_8)) {
  VAR_9 = FUNC_8(VAR_4, VAR_2);
  FUNC_7(VAR_3, VAR_9);
 } else {
  if (FUNC_5(VAR_3, VAR_8)) {

   FUNC_7(VAR_3, VAR_4);
   return 0;
  }
 }


 return FUNC_6(VAR_3, VAR_4);
}
