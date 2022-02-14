
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int dummy; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
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
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*,int ,int ) ;
 int FUNC_4 (struct ath_hw*,int ) ;
 int FUNC_5 (struct ath_hw*,int ,int) ;
 struct ath_common* FUNC_6 (struct ath_hw*) ;
 scalar_t__ FUNC_7 (struct ath_hw*) ;
 int FUNC_8 (struct ath_hw*) ;
 int FUNC_9 (struct ath_hw*,int ,int ,int ,int ) ;
 int FUNC_10 (struct ath_common*,char*,int,int) ;

__attribute__((used)) static void FUNC_11(struct ath_hw *VAR_13)
{
 struct ath_common *VAR_14 = FUNC_6(VAR_13);

 FUNC_8(VAR_13);


 FUNC_5(VAR_13, VAR_1, VAR_2);

 if (!FUNC_9(VAR_13, VAR_1, VAR_3, 0, VAR_0)) {
  FUNC_10(VAR_14, "Failed to stop Rx DMA in 10ms AR_CR=0x%08x AR_DIAG_SW=0x%08x\n",
   FUNC_4(VAR_13, VAR_1), FUNC_4(VAR_13, VAR_5));
  return;
 }

 if (FUNC_0(VAR_13) || FUNC_2(VAR_13)) {
  if (!FUNC_4(VAR_13, VAR_8))
   FUNC_3(VAR_13, VAR_6, VAR_4);
 } else if (FUNC_1(VAR_13)){
  if (!(FUNC_4(VAR_13, VAR_9) &
        VAR_7))
   FUNC_3(VAR_13, VAR_6, VAR_4);
 }

 if (FUNC_7(VAR_13))
  FUNC_5(VAR_13, VAR_12, 0x2);

 FUNC_5(VAR_13, VAR_10, VAR_11);
}
