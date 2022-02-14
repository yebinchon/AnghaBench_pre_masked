
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bCurLowPenaltyRa; int bPreLowPenaltyRa; } ;
typedef int PBTC_COEXIST ;


 int FUNC_0 (int ,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_1(
 PBTC_COEXIST VAR_1, bool VAR_2, bool VAR_3
)
{
 VAR_0->bCurLowPenaltyRa = VAR_3;

 if (!VAR_2) {
  if (VAR_0->bPreLowPenaltyRa == VAR_0->bCurLowPenaltyRa)
   return;
 }
 FUNC_0(
  VAR_1, VAR_0->bCurLowPenaltyRa
 );

 VAR_0->bPreLowPenaltyRa = VAR_0->bCurLowPenaltyRa;
}
