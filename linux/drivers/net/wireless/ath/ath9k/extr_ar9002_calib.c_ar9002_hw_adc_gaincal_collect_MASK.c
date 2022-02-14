
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int * totalAdcQEvenPhase; int * totalAdcQOddPhase; int * totalAdcIEvenPhase; int * totalAdcIOddPhase; int cal_samples; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (struct ath_hw*,int ) ;
 int FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (int ,int ,char*,int ,int,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct ath_hw *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2->totalAdcIOddPhase[VAR_3] +=
   FUNC_4(VAR_2, FUNC_0(VAR_3));
  VAR_2->totalAdcIEvenPhase[VAR_3] +=
   FUNC_4(VAR_2, FUNC_1(VAR_3));
  VAR_2->totalAdcQOddPhase[VAR_3] +=
   FUNC_4(VAR_2, FUNC_2(VAR_3));
  VAR_2->totalAdcQEvenPhase[VAR_3] +=
   FUNC_4(VAR_2, FUNC_3(VAR_3));

  FUNC_6(FUNC_5(VAR_2), VAR_1,
   "%d: Chn %d oddi=0x%08x; eveni=0x%08x; oddq=0x%08x; evenq=0x%08x;\n",
   VAR_2->cal_samples, VAR_3,
   VAR_2->totalAdcIOddPhase[VAR_3],
   VAR_2->totalAdcIEvenPhase[VAR_3],
   VAR_2->totalAdcQOddPhase[VAR_3],
   VAR_2->totalAdcQEvenPhase[VAR_3]);
 }
}
