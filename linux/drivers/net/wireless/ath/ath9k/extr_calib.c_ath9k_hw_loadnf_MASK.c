
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ath_hw {int rxchainmask; int nf_override; int * nf_regs; TYPE_1__* caldata; } ;
struct ath_common {int dummy; } ;
struct ath9k_nfcal_hist {int privNF; } ;
struct ath9k_channel {int dummy; } ;
typedef int s16 ;
struct TYPE_4__ {int nominal; int* cal; } ;
struct TYPE_3__ {struct ath9k_nfcal_hist* nfCalHist; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ath_hw*) ;
 int VAR_6 ;
 int FUNC_1 (struct ath9k_channel*) ;
 unsigned int VAR_7 ;
 int FUNC_2 (struct ath_hw*,int ,int) ;
 int FUNC_3 (struct ath_hw*,int ) ;
 int FUNC_4 (struct ath_hw*,int ,int,int) ;
 int FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_hw*,int ,int) ;
 struct ath_common* FUNC_7 (struct ath_hw*) ;
 TYPE_2__* FUNC_8 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_9 (struct ath_common*,int ,char*,int) ;
 int FUNC_10 (int) ;

int FUNC_11(struct ath_hw *VAR_8, struct ath9k_channel *VAR_9)
{
 struct ath9k_nfcal_hist *VAR_10 = ((void*)0);
 unsigned VAR_11, VAR_12;
 u8 VAR_13 = (VAR_8->rxchainmask << 3) | VAR_8->rxchainmask;
 struct ath_common *VAR_14 = FUNC_7(VAR_8);
 s16 VAR_15 = FUNC_8(VAR_8, VAR_9)->nominal;
 u32 VAR_16 = FUNC_3(VAR_8, VAR_2);

 if (VAR_8->caldata)
  VAR_10 = VAR_8->caldata->nfCalHist;

 FUNC_0(VAR_8);
 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
  if (VAR_13 & (1 << VAR_11)) {
   s16 VAR_17;

   if ((VAR_11 >= VAR_1) && !FUNC_1(VAR_9))
    continue;

   if (VAR_8->nf_override)
    VAR_17 = VAR_8->nf_override;
   else if (VAR_10)
    VAR_17 = VAR_10[VAR_11].privNF;
   else {

    VAR_17 =
        FUNC_8(VAR_8, VAR_9)->cal[VAR_11];
    if (VAR_17 > -60 || VAR_17 < -127)
     VAR_17 = VAR_15;
   }

   FUNC_4(VAR_8, VAR_8->nf_regs[VAR_11],
    (((u32) VAR_17 << 1) & 0x1ff), 0x1ff);
  }
 }





 if (VAR_16 & VAR_4) {
  FUNC_2(VAR_8, VAR_2, VAR_4);
  FUNC_5(VAR_8);
  FUNC_0(VAR_8);
 }





 FUNC_2(VAR_8, VAR_2,
      VAR_3);
 FUNC_2(VAR_8, VAR_2,
      VAR_5);
 FUNC_6(VAR_8, VAR_2, VAR_4);
 FUNC_5(VAR_8);







 for (VAR_12 = 0; VAR_12 < 22200; VAR_12++) {
  if ((FUNC_3(VAR_8, VAR_2) &
         VAR_4) == 0)
   break;
  FUNC_10(10);
 }




 if (VAR_16 & VAR_4) {
  FUNC_0(VAR_8);
  if (VAR_16 & VAR_3)
   FUNC_6(VAR_8, VAR_2,
        VAR_3);
  if (VAR_16 & VAR_5)
   FUNC_6(VAR_8, VAR_2,
        VAR_5);
  FUNC_6(VAR_8, VAR_2, VAR_4);
  FUNC_5(VAR_8);
 }
 if (VAR_12 == 22200) {
  FUNC_9(VAR_14, VAR_0,
   "Timeout while waiting for nf to load: AR_PHY_AGC_CONTROL=0x%x\n",
   FUNC_3(VAR_8, VAR_2));
  return -VAR_6;
 }






 FUNC_0(VAR_8);
 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
  if (VAR_13 & (1 << VAR_11)) {
   if ((VAR_11 >= VAR_1) && !FUNC_1(VAR_9))
    continue;

   FUNC_4(VAR_8, VAR_8->nf_regs[VAR_11],
     (((u32) (-50) << 1) & 0x1ff), 0x1ff);
  }
 }
 FUNC_5(VAR_8);

 return 0;
}
