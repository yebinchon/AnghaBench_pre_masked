
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int PBTC_COEXIST ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_3 ;

void FUNC_1(PBTC_COEXIST VAR_4, u8 VAR_5)
{
 if (VAR_1 == VAR_5) {
  FUNC_0(VAR_2, VAR_3, ("[BTCoex], CONNECT START notify\n"));
 } else if (VAR_0 == VAR_5) {
  FUNC_0(VAR_2, VAR_3, ("[BTCoex], CONNECT FINISH notify\n"));
 }
}
