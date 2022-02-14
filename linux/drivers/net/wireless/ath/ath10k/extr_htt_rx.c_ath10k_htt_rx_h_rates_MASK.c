
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ieee80211_supported_band {int dummy; } ;
struct ieee80211_rx_status {size_t band; int rate_idx; int nss; int encoding; int bw; int enc_flags; int freq; } ;
struct TYPE_18__ {int info0; } ;
struct TYPE_16__ {int info0; } ;
struct TYPE_17__ {TYPE_7__ common; } ;
struct TYPE_15__ {int info4; int info3; int info2; int info1; int info0; } ;
struct TYPE_13__ {int info1; int info0; } ;
struct TYPE_14__ {TYPE_4__ common; } ;
struct TYPE_12__ {int info1; int info0; } ;
struct TYPE_11__ {int flags; } ;
struct htt_rx_desc {int msdu_payload; TYPE_9__ mpdu_end; TYPE_8__ msdu_end; TYPE_6__ ppdu_start; TYPE_5__ msdu_start; TYPE_3__ mpdu_start; TYPE_2__ attention; } ;
struct TYPE_10__ {struct ieee80211_supported_band* sbands; } ;
struct ath10k {TYPE_1__ mac; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;





 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ath10k*,int ,int *,char*,int ,int) ;
 int FUNC_5 (struct ieee80211_supported_band*,int,int) ;
 int FUNC_6 (struct ath10k*,char*,int,...) ;

__attribute__((used)) static void FUNC_7(struct ath10k *VAR_9,
      struct ieee80211_rx_status *VAR_10,
      struct htt_rx_desc *VAR_11)
{
 struct ieee80211_supported_band *VAR_12;
 u8 VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 u8 VAR_19 = 0;
 u8 VAR_20;
 u32 VAR_21, VAR_22, VAR_23;

 VAR_21 = FUNC_2(VAR_11->ppdu_start.info1);
 VAR_22 = FUNC_2(VAR_11->ppdu_start.info2);
 VAR_23 = FUNC_2(VAR_11->ppdu_start.info3);

 VAR_19 = FUNC_1(VAR_21, VAR_7);

 switch (VAR_19) {
 case 130:



  if (!VAR_10->freq)
   return;

  VAR_13 = VAR_21 & VAR_6;
  VAR_14 = FUNC_1(VAR_21, VAR_5);
  VAR_14 &= ~VAR_8;

  VAR_12 = &VAR_9->mac.sbands[VAR_10->band];
  VAR_10->rate_idx = FUNC_5(VAR_12, VAR_14, VAR_13);
  break;
 case 132:
 case 131:

  VAR_17 = VAR_22 & 0x1F;
  VAR_18 = VAR_17 >> 3;
  VAR_15 = (VAR_22 >> 7) & 1;
  VAR_16 = (VAR_23 >> 7) & 1;

  VAR_10->rate_idx = VAR_17;
  VAR_10->encoding = VAR_3;
  if (VAR_16)
   VAR_10->enc_flags |= VAR_2;
  if (VAR_15)
   VAR_10->bw = VAR_1;
  break;
 case 129:
 case 128:



  VAR_15 = VAR_22 & 3;
  VAR_16 = VAR_23 & 1;
  VAR_20 = (VAR_22 >> 4) & 0x3F;

  if (FUNC_0(VAR_20)) {
   VAR_17 = (VAR_23 >> 4) & 0x0F;
   VAR_18 = ((VAR_22 >> 10) & 0x07) + 1;
  } else {
   VAR_17 = 0;
   VAR_18 = 1;
  }

  if (VAR_17 > 0x09) {
   FUNC_6(VAR_9, "invalid MCS received %u\n", VAR_17);
   FUNC_6(VAR_9, "rxd %08x mpdu start %08x %08x msdu start %08x %08x ppdu start %08x %08x %08x %08x %08x\n",
        FUNC_2(VAR_11->attention.flags),
        FUNC_2(VAR_11->mpdu_start.info0),
        FUNC_2(VAR_11->mpdu_start.info1),
        FUNC_2(VAR_11->msdu_start.common.info0),
        FUNC_2(VAR_11->msdu_start.common.info1),
        VAR_11->ppdu_start.info0,
        FUNC_2(VAR_11->ppdu_start.info1),
        FUNC_2(VAR_11->ppdu_start.info2),
        FUNC_2(VAR_11->ppdu_start.info3),
        FUNC_2(VAR_11->ppdu_start.info4));

   FUNC_6(VAR_9, "msdu end %08x mpdu end %08x\n",
        FUNC_2(VAR_11->msdu_end.common.info0),
        FUNC_2(VAR_11->mpdu_end.info0));

   FUNC_4(VAR_9, VAR_0, ((void*)0),
     "rx desc msdu payload: ",
     VAR_11->msdu_payload, 50);
  }

  VAR_10->rate_idx = VAR_17;
  VAR_10->nss = VAR_18;

  if (VAR_16)
   VAR_10->enc_flags |= VAR_2;

  VAR_10->bw = FUNC_3(VAR_15);
  VAR_10->encoding = VAR_4;
  break;
 default:
  break;
 }
}
