
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int RxStatus1; } ;
struct wlc_d11rxhdr {TYPE_1__ rxhdr; } ;
struct sk_buff {int len; int protocol; int pkt_type; int dev; scalar_t__ data; } ;
struct ieee80211_radiotap_header {void* it_len; } ;
struct brcmf_if {int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct brcmf_if*,int ) ;
 int FUNC_1 (struct brcmf_if*,struct sk_buff*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_radiotap_header*,int ,int) ;
 int FUNC_6 (struct sk_buff*,unsigned int) ;
 struct ieee80211_radiotap_header* FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*) ;

void FUNC_9(struct brcmf_if *VAR_6, struct sk_buff *VAR_7)
{
 if (FUNC_0(VAR_6, VAR_1)) {

 } else if (FUNC_0(VAR_6, VAR_0)) {
  struct wlc_d11rxhdr *VAR_8 = (struct wlc_d11rxhdr *)VAR_7->data;
  struct ieee80211_radiotap_header *VAR_9;
  unsigned int VAR_10;
  u16 VAR_11;

  VAR_11 = FUNC_4(VAR_8->rxhdr.RxStatus1);

  VAR_10 = sizeof(struct wlc_d11rxhdr);



  if (VAR_11 & VAR_5)
   VAR_10 += 2;
  VAR_10 += VAR_2;

  FUNC_6(VAR_7, VAR_10);


  VAR_9 = FUNC_7(VAR_7, sizeof(*VAR_9));
  FUNC_5(VAR_9, 0, sizeof(*VAR_9));
  VAR_9->it_len = FUNC_2(sizeof(*VAR_9));


  VAR_7->len -= 4;
 } else {
  struct ieee80211_radiotap_header *VAR_12;


  VAR_12 = FUNC_7(VAR_7, sizeof(*VAR_12));
  FUNC_5(VAR_12, 0, sizeof(*VAR_12));
  VAR_12->it_len = FUNC_2(sizeof(*VAR_12));


  VAR_7->len -= 4;
 }

 VAR_7->dev = VAR_6->ndev;
 FUNC_8(VAR_7);
 VAR_7->pkt_type = VAR_4;
 VAR_7->protocol = FUNC_3(VAR_3);

 FUNC_1(VAR_6, VAR_7);
}
