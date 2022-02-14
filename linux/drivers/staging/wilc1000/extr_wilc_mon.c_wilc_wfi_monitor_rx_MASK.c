
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {void* it_present; void* it_len; scalar_t__ it_version; } ;
struct wilc_wfi_radiotap_hdr {int rate; TYPE_1__ hdr; int tx_flags; } ;
struct wilc_wfi_radiotap_cb_hdr {int rate; TYPE_1__ hdr; int tx_flags; } ;
struct sk_buff {struct wilc_wfi_radiotap_hdr* cb; int protocol; int pkt_type; int ip_summed; struct net_device* dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 struct sk_buff* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct wilc_wfi_radiotap_hdr*,int ,int) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct sk_buff*) ;
 struct wilc_wfi_radiotap_hdr* FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*,int *,int) ;
 int FUNC_11 (struct sk_buff*) ;

void FUNC_12(struct net_device *VAR_10, u8 *VAR_11, u32 VAR_12)
{
 u32 VAR_13, VAR_14;
 struct sk_buff *VAR_15 = ((void*)0);
 struct wilc_wfi_radiotap_hdr *VAR_16;
 struct wilc_wfi_radiotap_cb_hdr *VAR_17;

 if (!VAR_10)
  return;

 if (!FUNC_7(VAR_10))
  return;


 VAR_13 = FUNC_4(VAR_11 - VAR_2);




 VAR_14 = FUNC_0(VAR_13);

 if (VAR_14 & VAR_6) {


  VAR_15 = FUNC_3(VAR_12 + sizeof(*VAR_17));
  if (!VAR_15)
   return;

  FUNC_10(VAR_15, VAR_11, VAR_12);

  VAR_17 = FUNC_9(VAR_15, sizeof(*VAR_17));
  FUNC_6(VAR_17, 0, sizeof(*VAR_17));

  VAR_17->hdr.it_version = 0;

  VAR_17->hdr.it_len = FUNC_1(sizeof(*VAR_17));

  VAR_17->hdr.it_present = FUNC_2(VAR_9);

  VAR_17->rate = 5;

  if (VAR_14 & VAR_7) {

   VAR_17->tx_flags = VAR_4;
  } else {
   VAR_17->tx_flags = VAR_3;
  }

 } else {
  VAR_15 = FUNC_3(VAR_12 + sizeof(*VAR_16));

  if (!VAR_15)
   return;

  FUNC_10(VAR_15, VAR_11, VAR_12);
  VAR_16 = FUNC_9(VAR_15, sizeof(*VAR_16));
  FUNC_6(VAR_16, 0, sizeof(struct wilc_wfi_radiotap_hdr));
  VAR_16->hdr.it_version = 0;
  VAR_16->hdr.it_len = FUNC_1(sizeof(*VAR_16));
  VAR_16->hdr.it_present = FUNC_2
    (1 << VAR_5);
  VAR_16->rate = 5;
 }

 VAR_15->dev = VAR_10;
 FUNC_11(VAR_15);
 VAR_15->ip_summed = VAR_0;
 VAR_15->pkt_type = VAR_8;
 VAR_15->protocol = FUNC_5(VAR_1);
 FUNC_6(VAR_15->cb, 0, sizeof(VAR_15->cb));

 FUNC_8(VAR_15);
}
