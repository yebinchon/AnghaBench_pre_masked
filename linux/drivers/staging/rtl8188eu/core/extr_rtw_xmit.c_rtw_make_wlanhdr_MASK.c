
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_4__ {int agg_enable_bitmap; scalar_t__ ampdu_enable; } ;
struct TYPE_3__ {int* txseq_tid; } ;
struct sta_info {int* BA_starting_seqctrl; TYPE_2__ htpriv; TYPE_1__ sta_xmitpriv; scalar_t__ qos_option; } ;
struct qos_priv {scalar_t__ qos_option; } ;
struct pkt_attrib {int subtype; int hdrlen; int priority; int seqnum; int ampdu_en; scalar_t__ ht_en; int ack_policy; int eosp; scalar_t__ encrypt; scalar_t__ mdata; int src; int dst; int ra; struct sta_info* psta; } ;
struct mlme_priv {struct qos_priv qospriv; } ;
struct ieee80211_hdr {int addr3; int addr2; int addr1; int frame_control; } ;
struct adapter {int stapriv; struct mlme_priv mlmepriv; } ;
typedef int s32 ;
typedef int __le16 ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,char*) ;
 scalar_t__ FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (int*,int ) ;
 int FUNC_5 (int*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int*,int) ;
 int FUNC_12 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_13 (struct mlme_priv*,int ) ;
 int FUNC_14 (struct mlme_priv*) ;
 int FUNC_15 (struct mlme_priv*) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int ,int ,int ) ;
 int FUNC_18 (int*,int ,int ) ;
 struct sta_info* FUNC_19 (struct adapter*) ;
 struct sta_info* FUNC_20 (int *,int ) ;

s32 FUNC_21(struct adapter *VAR_11, u8 *VAR_12, struct pkt_attrib *VAR_13)
{
 u16 *VAR_14;

 struct ieee80211_hdr *VAR_15 = (struct ieee80211_hdr *)VAR_12;
 struct mlme_priv *VAR_16 = &VAR_11->mlmepriv;
 struct qos_priv *VAR_17 = &VAR_16->qospriv;
 u8 VAR_18 = 0;

 int VAR_19 = VAR_8;
 __le16 *VAR_20 = &VAR_15->frame_control;

 struct sta_info *VAR_21;

 if (VAR_13->psta) {
  VAR_21 = VAR_13->psta;
 } else {
  if (FUNC_16(VAR_13->ra))
   VAR_21 = FUNC_19(VAR_11);
  else
   VAR_21 = FUNC_20(&VAR_11->stapriv, VAR_13->ra);
 }

 FUNC_18(VAR_12, 0, VAR_6);

 FUNC_7(VAR_20, VAR_13->subtype);

 if (VAR_13->subtype & VAR_4) {
  if (FUNC_13(VAR_16, VAR_5)) {


   FUNC_12(VAR_20);
   FUNC_17(VAR_15->addr1, FUNC_14(VAR_16), VAR_0);
   FUNC_17(VAR_15->addr2, VAR_13->src, VAR_0);
   FUNC_17(VAR_15->addr3, VAR_13->dst, VAR_0);

   if (VAR_17->qos_option)
    VAR_18 = 1;
  } else if (FUNC_13(VAR_16, VAR_3)) {

   FUNC_6(VAR_20);
   FUNC_17(VAR_15->addr1, VAR_13->dst, VAR_0);
   FUNC_17(VAR_15->addr2, FUNC_14(VAR_16), VAR_0);
   FUNC_17(VAR_15->addr3, VAR_13->src, VAR_0);

   if (VAR_21->qos_option)
    VAR_18 = 1;
  } else if (FUNC_13(VAR_16, VAR_2) ||
      FUNC_13(VAR_16, VAR_1)) {
   FUNC_17(VAR_15->addr1, VAR_13->dst, VAR_0);
   FUNC_17(VAR_15->addr2, VAR_13->src, VAR_0);
   FUNC_17(VAR_15->addr3, FUNC_14(VAR_16), VAR_0);

   if (VAR_21->qos_option)
    VAR_18 = 1;
  } else {
   FUNC_1(VAR_10, VAR_9, ("fw_state:%x is not allowed to xmit frame\n", FUNC_15(VAR_16)));
   VAR_19 = VAR_7;
   goto exit;
  }

  if (VAR_13->mdata)
   FUNC_8(VAR_20);

  if (VAR_13->encrypt)
   FUNC_10(VAR_20);

  if (VAR_18) {
   VAR_14 = (unsigned short *)(VAR_12 + VAR_13->hdrlen - 2);

   if (VAR_13->priority)
    FUNC_9(VAR_14, VAR_13->priority);

   FUNC_5(VAR_14, VAR_13->eosp);

   FUNC_4(VAR_14, VAR_13->ack_policy);
  }




  if (VAR_21) {
   VAR_21->sta_xmitpriv.txseq_tid[VAR_13->priority]++;
   VAR_21->sta_xmitpriv.txseq_tid[VAR_13->priority] &= 0xFFF;

   VAR_13->seqnum = VAR_21->sta_xmitpriv.txseq_tid[VAR_13->priority];

   FUNC_11(VAR_12, VAR_13->seqnum);


   if (VAR_13->ht_en && VAR_21->htpriv.ampdu_enable) {
    if (VAR_21->htpriv.agg_enable_bitmap & FUNC_0(VAR_13->priority))
     VAR_13->ampdu_en = 1;
   }


   if (VAR_13->ampdu_en) {
    u16 VAR_22;

    VAR_22 = VAR_21->BA_starting_seqctrl[VAR_13->priority & 0x0f];


    if (FUNC_3(VAR_13->seqnum, VAR_22)) {
     VAR_13->ampdu_en = 0;
    } else if (FUNC_2(VAR_13->seqnum, VAR_22)) {
     VAR_21->BA_starting_seqctrl[VAR_13->priority & 0x0f] = (VAR_22 + 1) & 0xfff;

     VAR_13->ampdu_en = 1;
    } else {
     VAR_21->BA_starting_seqctrl[VAR_13->priority & 0x0f] = (VAR_13->seqnum + 1) & 0xfff;
     VAR_13->ampdu_en = 1;
    }
   }
  }
 }
exit:

 return VAR_19;
}
