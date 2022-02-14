
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned short u16 ;
struct TYPE_2__ {int* txseq_tid; } ;
struct sta_info {TYPE_1__ sta_xmitpriv; } ;
struct qos_priv {scalar_t__ qos_option; } ;
struct pkt_attrib {int subtype; int hdrlen; size_t priority; int seqnum; int ra; struct sta_info* psta; int ack_policy; scalar_t__ encrypt; int src; int dst; } ;
struct mlme_priv {struct qos_priv qospriv; } ;
struct ieee80211_hdr {int addr3; int addr2; int addr1; int frame_ctl; } ;
struct _adapter {int stapriv; struct mlme_priv mlmepriv; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned short*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (unsigned short*,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_7 (struct mlme_priv*,int ) ;
 int FUNC_8 (struct mlme_priv*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int *,int ,int ) ;
 struct sta_info* FUNC_12 (struct _adapter*) ;
 struct sta_info* FUNC_13 (int *,int ) ;

__attribute__((used)) static int FUNC_14(struct _adapter *VAR_9, u8 *VAR_10,
   struct pkt_attrib *VAR_11)
{
 u16 *VAR_12;

 struct ieee80211_hdr *VAR_13 = (struct ieee80211_hdr *)VAR_10;
 struct mlme_priv *VAR_14 = &VAR_9->mlmepriv;
 struct qos_priv *VAR_15 = &VAR_14->qospriv;
 __le16 *VAR_16 = &VAR_13->frame_ctl;

 FUNC_11(VAR_10, 0, VAR_8);
 FUNC_2(VAR_16, VAR_11->subtype);
 if (VAR_11->subtype & VAR_5) {
  if (FUNC_7(VAR_14, VAR_7)) {

   FUNC_6(VAR_16);
   FUNC_10(VAR_13->addr1, FUNC_8(VAR_14),
    VAR_1);
   FUNC_10(VAR_13->addr2, VAR_11->src, VAR_1);
   FUNC_10(VAR_13->addr3, VAR_11->dst, VAR_1);
  } else if (FUNC_7(VAR_14, VAR_4)) {

   FUNC_1(VAR_16);
   FUNC_10(VAR_13->addr1, VAR_11->dst, VAR_1);
   FUNC_10(VAR_13->addr2, FUNC_8(VAR_14),
    VAR_1);
   FUNC_10(VAR_13->addr3, VAR_11->src, VAR_1);
  } else if (FUNC_7(VAR_14, VAR_3) ||
      FUNC_7(VAR_14,
      VAR_2)) {
   FUNC_10(VAR_13->addr1, VAR_11->dst, VAR_1);
   FUNC_10(VAR_13->addr2, VAR_11->src, VAR_1);
   FUNC_10(VAR_13->addr3, FUNC_8(VAR_14),
    VAR_1);
  } else if (FUNC_7(VAR_14, VAR_6)) {
   FUNC_10(VAR_13->addr1, VAR_11->dst, VAR_1);
   FUNC_10(VAR_13->addr2, VAR_11->src, VAR_1);
   FUNC_10(VAR_13->addr3, FUNC_8(VAR_14),
    VAR_1);
  } else {
   return -VAR_0;
  }

  if (VAR_11->encrypt)
   FUNC_4(VAR_16);
  if (VAR_15->qos_option) {
   VAR_12 = (unsigned short *)(VAR_10 + VAR_11->hdrlen - 2);
   if (VAR_11->priority)
    FUNC_3(VAR_12, VAR_11->priority);
   FUNC_0(VAR_12, VAR_11->ack_policy);
  }


  {
   struct sta_info *VAR_17;
   bool VAR_18 = FUNC_9(VAR_11->ra);

   if (VAR_11->psta) {
    VAR_17 = VAR_11->psta;
   } else {
    if (VAR_18)
     VAR_17 = FUNC_12(VAR_9);
    else
     VAR_17 =
      FUNC_13(&VAR_9->stapriv,
      VAR_11->ra);
   }
   if (VAR_17) {
    VAR_17->sta_xmitpriv.txseq_tid
        [VAR_11->priority]++;
    VAR_17->sta_xmitpriv.txseq_tid[VAR_11->priority]
         &= 0xFFF;
    VAR_11->seqnum = VAR_17->sta_xmitpriv.
        txseq_tid[VAR_11->priority];
    FUNC_5(VAR_10, VAR_11->seqnum);
   }
  }
 }
 return 0;
}
