
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath_nf_limits {scalar_t__ max; } ;
struct ath_hw {int rxchainmask; int curchan; } ;
struct ath_common {int dummy; } ;
struct ath9k_nfcal_hist {size_t currIndex; scalar_t__ invalidNFcount; scalar_t__ privNF; void** nfCalBuffer; } ;
struct ath9k_hw_cal_data {int cal_flags; struct ath9k_nfcal_hist* nfCalHist; } ;
typedef void* int16_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct ath_common* FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (void**) ;
 struct ath_nf_limits* FUNC_3 (struct ath_hw*,int ) ;
 int FUNC_4 (struct ath_common*,int ,char*,int,scalar_t__,scalar_t__,char*) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct ath_hw *VAR_5,
           struct ath9k_hw_cal_data *VAR_6,
           int16_t *VAR_7)
{
 struct ath_common *VAR_8 = FUNC_1(VAR_5);
 struct ath_nf_limits *VAR_9;
 struct ath9k_nfcal_hist *VAR_10;
 bool VAR_11 = 0;
 u8 VAR_12 = (VAR_5->rxchainmask << 3) | VAR_5->rxchainmask;
 int VAR_13;

 VAR_10 = VAR_6->nfCalHist;
 VAR_9 = FUNC_3(VAR_5, VAR_5->curchan);

 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
  if (!(VAR_12 & (1 << VAR_13)) ||
      ((VAR_13 >= VAR_0) && !FUNC_0(VAR_5->curchan)))
   continue;

  VAR_10[VAR_13].nfCalBuffer[VAR_10[VAR_13].currIndex] = VAR_7[VAR_13];

  if (++VAR_10[VAR_13].currIndex >= VAR_1)
   VAR_10[VAR_13].currIndex = 0;

  if (VAR_10[VAR_13].invalidNFcount > 0) {
   VAR_10[VAR_13].invalidNFcount--;
   VAR_10[VAR_13].privNF = VAR_7[VAR_13];
  } else {
   VAR_10[VAR_13].privNF =
    FUNC_2(VAR_10[VAR_13].nfCalBuffer);
  }

  if (!VAR_10[VAR_13].privNF)
   continue;

  if (VAR_10[VAR_13].privNF > VAR_9->max) {
   VAR_11 = 1;

   FUNC_4(VAR_8, VAR_2,
    "NFmid[%d] (%d) > MAX (%d), %s\n",
    VAR_13, VAR_10[VAR_13].privNF, VAR_9->max,
    (FUNC_6(VAR_3, &VAR_6->cal_flags) ?
     "not corrected (due to interference)" :
     "correcting to MAX"));
   if (!FUNC_6(VAR_3, &VAR_6->cal_flags))
    VAR_10[VAR_13].privNF = VAR_9->max;
  }
 }






 if (!VAR_11)
  FUNC_5(VAR_3, &VAR_6->cal_flags);
}
