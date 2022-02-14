
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int bUnderLps; } ;
typedef int PBTC_COEXIST ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

void FUNC_1(PBTC_COEXIST VAR_5, u8 VAR_6)
{
 if (VAR_1 == VAR_6) {
  FUNC_0(VAR_2, VAR_3, ("[BTCoex], LPS ENABLE notify\n"));
  VAR_4->bUnderLps = 1;
 } else if (VAR_0 == VAR_6) {
  FUNC_0(VAR_2, VAR_3, ("[BTCoex], LPS DISABLE notify\n"));
  VAR_4->bUnderLps = 0;
 }
}
