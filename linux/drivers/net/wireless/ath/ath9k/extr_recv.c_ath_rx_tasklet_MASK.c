
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_rx_status {int rs_datalen; int flag; int rs_tstamp; int is_mybeacon; scalar_t__ rs_more; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;
struct TYPE_4__ {int rxbuf; struct sk_buff* frag; } ;
struct ath_softc {int ps_flags; TYPE_2__ rx; struct ath_hw* sc_ah; int sc_pm_lock; int dev; struct ieee80211_hw* hw; } ;
struct ath_rxbuf {int list; int bf_buf_addr; struct sk_buff* bf_mpdu; } ;
struct ath_rx_status {int rs_datalen; int flag; int rs_tstamp; int is_mybeacon; scalar_t__ rs_more; } ;
struct TYPE_3__ {int hw_caps; int rx_status_len; } ;
struct ath_hw {int imask; TYPE_1__ caps; } ;
struct ath_common {int rx_bufsize; } ;
typedef int rs ;
typedef enum ath9k_rx_qtype { ____Placeholder_ath9k_rx_qtype } ath9k_rx_qtype ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct ath_softc*,int ) ;
 int FUNC_2 (struct ath_softc*,struct ieee80211_rx_status*) ;
 int FUNC_3 (struct ath_softc*,struct ieee80211_rx_status*,struct ieee80211_rx_status*) ;
 scalar_t__ FUNC_4 (struct ath_softc*) ;
 int FUNC_5 (struct ath_common*,struct sk_buff*,struct ieee80211_rx_status*,struct ieee80211_rx_status*,int) ;
 struct ath_common* FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (struct ath_hw*) ;
 int FUNC_8 (struct ath_hw*) ;
 int FUNC_9 (struct ath_hw*) ;
 int FUNC_10 (struct ath_softc*,struct sk_buff*,struct ieee80211_rx_status*,struct ieee80211_rx_status*,int*,int ) ;
 int FUNC_11 (struct ath_softc*,struct ieee80211_rx_status*,struct sk_buff*) ;
 int FUNC_12 (struct ath_hw*,struct sk_buff*,int ) ;
 struct ath_rxbuf* FUNC_13 (struct ath_softc*,struct ieee80211_rx_status*,int) ;
 struct ath_rxbuf* FUNC_14 (struct ath_softc*,struct ieee80211_rx_status*) ;
 int FUNC_15 (struct ath_softc*,struct ath_rxbuf*,int) ;
 int FUNC_16 (struct ath_softc*,struct ieee80211_rx_status*,struct sk_buff*) ;
 int FUNC_17 (struct ath_softc*,int) ;
 int FUNC_18 (struct ath_softc*,struct sk_buff*,int ) ;
 struct sk_buff* FUNC_19 (struct ath_common*,int ,int ) ;
 int FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (struct sk_buff*) ;
 int FUNC_22 (int ,scalar_t__,int ,int) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int ,int ,int ,int) ;
 scalar_t__ FUNC_25 (int ) ;
 int FUNC_26 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_27 (int *,int *) ;
 int FUNC_28 (struct ieee80211_rx_status*,int ,int) ;
 scalar_t__ FUNC_29 (struct sk_buff*,int ,int,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_30 (struct sk_buff*,int ,int) ;
 int FUNC_31 (struct sk_buff*,int) ;
 int FUNC_32 (struct sk_buff*,int) ;
 int FUNC_33 (struct sk_buff*) ;
 int FUNC_34 (struct sk_buff*,int) ;
 int FUNC_35 (int *,unsigned long) ;
 int FUNC_36 (int *,unsigned long) ;
 scalar_t__ FUNC_37 (int ) ;

int FUNC_38(struct ath_softc *VAR_15, int VAR_16, bool VAR_17)
{
 struct ath_rxbuf *VAR_18;
 struct sk_buff *VAR_19 = ((void*)0), *VAR_20, *VAR_21;
 struct ieee80211_rx_status *VAR_22;
 struct ath_hw *VAR_23 = VAR_15->sc_ah;
 struct ath_common *VAR_24 = FUNC_6(VAR_23);
 struct ieee80211_hw *VAR_25 = VAR_15->hw;
 int VAR_26;
 struct ath_rx_status VAR_27;
 enum ath9k_rx_qtype VAR_28;
 bool VAR_29 = !!(VAR_23->caps.hw_caps & VAR_0);
 int VAR_30;
 u64 VAR_31 = 0;
 unsigned long VAR_32;
 dma_addr_t VAR_33;
 unsigned int VAR_34 = 512;
 struct ieee80211_hdr *VAR_35;

 if (VAR_29)
  VAR_30 = VAR_5;
 else
  VAR_30 = VAR_6;

 VAR_28 = VAR_17 ? VAR_3 : VAR_4;

 VAR_31 = FUNC_7(VAR_23);

 do {
  bool VAR_36 = 0;

  FUNC_28(&VAR_27, 0, sizeof(VAR_27));
  if (VAR_29)
   VAR_18 = FUNC_13(VAR_15, &VAR_27, VAR_28);
  else
   VAR_18 = FUNC_14(VAR_15, &VAR_27);

  if (!VAR_18)
   break;

  VAR_19 = VAR_18->bf_mpdu;
  if (!VAR_19)
   continue;





  if (VAR_15->rx.frag)
   VAR_21 = VAR_15->rx.frag;
  else
   VAR_21 = VAR_19;

  VAR_22 = FUNC_0(VAR_21);
  FUNC_28(VAR_22, 0, sizeof(struct ieee80211_rx_status));

  VAR_26 = FUNC_10(VAR_15, VAR_21, &VAR_27, VAR_22,
       &VAR_36, VAR_31);
  if (VAR_26)
   goto requeue_drop_frag;



  VAR_20 = FUNC_19(VAR_24, VAR_24->rx_bufsize, VAR_7);





  if (!VAR_20) {
   FUNC_1(VAR_15, VAR_13);
   goto requeue_drop_frag;
  }


  VAR_33 = FUNC_22(VAR_15->dev, VAR_20->data,
           VAR_24->rx_bufsize, VAR_30);
  if (FUNC_37(FUNC_23(VAR_15->dev, VAR_33))) {
   FUNC_21(VAR_20);
   goto requeue_drop_frag;
  }


  FUNC_24(VAR_15->dev, VAR_18->bf_buf_addr,
     VAR_24->rx_bufsize, VAR_30);

  VAR_18->bf_mpdu = VAR_20;
  VAR_18->bf_buf_addr = VAR_33;

  FUNC_32(VAR_19, VAR_27.rs_datalen + VAR_23->caps.rx_status_len);
  if (VAR_23->caps.rx_status_len)
   FUNC_31(VAR_19, VAR_23->caps.rx_status_len);

  if (!VAR_27.rs_more)
   FUNC_5(VAR_24, VAR_21, &VAR_27,
           VAR_22, VAR_36);

  if (VAR_27.rs_more) {
   FUNC_1(VAR_15, VAR_12);





   if (VAR_15->rx.frag) {

    FUNC_21(VAR_15->rx.frag);
    FUNC_21(VAR_19);
    FUNC_1(VAR_15, VAR_14);
    VAR_19 = ((void*)0);
   }
   VAR_15->rx.frag = VAR_19;
   goto requeue;
  }

  if (VAR_15->rx.frag) {
   int VAR_37 = VAR_19->len - FUNC_33(VAR_21);

   if (FUNC_29(VAR_21, 0, VAR_37, VAR_7) < 0) {
    FUNC_20(VAR_19);
    FUNC_1(VAR_15, VAR_13);
    goto requeue_drop_frag;
   }

   VAR_15->rx.frag = ((void*)0);

   FUNC_30(VAR_19, FUNC_32(VAR_21, VAR_19->len),
        VAR_19->len);
   FUNC_21(VAR_19);
   VAR_19 = VAR_21;
  }

  if (VAR_22->flag & VAR_11)
   FUNC_34(VAR_19, VAR_19->len - 8);

  FUNC_35(&VAR_15->sc_pm_lock, VAR_32);
  if ((VAR_15->ps_flags & (VAR_8 |
         VAR_9 |
         VAR_10)) ||
      FUNC_4(VAR_15))
   FUNC_18(VAR_15, VAR_19, VAR_27.is_mybeacon);
  FUNC_36(&VAR_15->sc_pm_lock, VAR_32);

  FUNC_2(VAR_15, &VAR_27);
  FUNC_3(VAR_15, &VAR_27, VAR_22);
  FUNC_11(VAR_15, &VAR_27, VAR_19);
  FUNC_16(VAR_15, &VAR_27, VAR_19);

  VAR_35 = (struct ieee80211_hdr *)VAR_19->data;
  if (FUNC_25(VAR_35->frame_control))
   FUNC_12(VAR_15->sc_ah, VAR_19, VAR_27.rs_tstamp);

  FUNC_26(VAR_25, VAR_19);

requeue_drop_frag:
  if (VAR_15->rx.frag) {
   FUNC_21(VAR_15->rx.frag);
   VAR_15->rx.frag = ((void*)0);
  }
requeue:
  FUNC_27(&VAR_18->list, &VAR_15->rx.rxbuf);

  if (!VAR_29) {
   FUNC_15(VAR_15, VAR_18, VAR_16);
   if (!VAR_16)
    FUNC_8(VAR_23);
  } else if (!VAR_16) {
   FUNC_17(VAR_15, VAR_28);
  }

  if (!VAR_34--)
   break;
 } while (1);

 if (!(VAR_23->imask & VAR_1)) {
  VAR_23->imask |= (VAR_1 | VAR_2);
  FUNC_9(VAR_23);
 }

 return 0;
}
