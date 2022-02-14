
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int * totalIqCorrMeas; int * totalPowerMeasQ; int * totalPowerMeasI; int cal_samples; } ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct ath_hw*,int ) ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (int ,int ,char*,int ,int,int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct ath_hw *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2->totalPowerMeasI[VAR_3] +=
   FUNC_3(VAR_2, FUNC_0(VAR_3));
  VAR_2->totalPowerMeasQ[VAR_3] +=
   FUNC_3(VAR_2, FUNC_1(VAR_3));
  VAR_2->totalIqCorrMeas[VAR_3] +=
   (int32_t) FUNC_3(VAR_2, FUNC_2(VAR_3));
  FUNC_5(FUNC_4(VAR_2), VAR_1,
   "%d: Chn %d pmi=0x%08x;pmq=0x%08x;iqcm=0x%08x;\n",
   VAR_2->cal_samples, VAR_3, VAR_2->totalPowerMeasI[VAR_3],
   VAR_2->totalPowerMeasQ[VAR_3],
   VAR_2->totalIqCorrMeas[VAR_3]);
 }
}
