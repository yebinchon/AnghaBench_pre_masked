
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hw {TYPE_1__* caldata; } ;
struct ath9k_nfcal_hist {int privNF; int * nfCalBuffer; int invalidNFcount; scalar_t__ currIndex; } ;
struct ath9k_channel {int channelFlags; int channel; } ;
struct TYPE_2__ {struct ath9k_nfcal_hist* nfCalHist; int channelFlags; int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath_hw*,struct ath9k_channel*,int) ;

void FUNC_1(struct ath_hw *VAR_4,
      struct ath9k_channel *VAR_5)
{
 struct ath9k_nfcal_hist *VAR_6;
 int VAR_7, VAR_8, VAR_9 = 0;

 VAR_4->caldata->channel = VAR_5->channel;
 VAR_4->caldata->channelFlags = VAR_5->channelFlags;
 VAR_6 = VAR_4->caldata->nfCalHist;
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_6[VAR_7].currIndex = 0;
  VAR_6[VAR_7].privNF = FUNC_0(VAR_4, VAR_5, VAR_9);
  VAR_6[VAR_7].invalidNFcount = VAR_1;
  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
   VAR_6[VAR_7].nfCalBuffer[VAR_8] = VAR_6[VAR_7].privNF;
  if (++VAR_9 >= VAR_0)
   VAR_9 = 0;
 }
}
