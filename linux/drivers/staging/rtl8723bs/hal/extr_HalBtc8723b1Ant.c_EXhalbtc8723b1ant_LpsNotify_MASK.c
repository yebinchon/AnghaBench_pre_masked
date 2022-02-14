
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_5__ {int bUnderLps; } ;
struct TYPE_4__ {scalar_t__ bStopCoexDm; scalar_t__ bManualControl; } ;
typedef TYPE_1__* PBTC_COEXIST ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;

void FUNC_1(PBTC_COEXIST VAR_5, u8 VAR_6)
{
 if (VAR_5->bManualControl || VAR_5->bStopCoexDm)
  return;

 if (VAR_1 == VAR_6) {
  FUNC_0(
   VAR_2, VAR_3, ("[BTCoex], LPS ENABLE notify\n")
  );
  VAR_4->bUnderLps = 1;
 } else if (VAR_0 == VAR_6) {
  FUNC_0(
   VAR_2, VAR_3, ("[BTCoex], LPS DISABLE notify\n")
  );
  VAR_4->bUnderLps = 0;
 }
}
