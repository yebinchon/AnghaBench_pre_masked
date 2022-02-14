
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int PBTC_COEXIST ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;

void FUNC_4(PBTC_COEXIST VAR_4, u8 VAR_5)
{
 FUNC_0(VAR_0, VAR_3, ("[BTCoex], Pnp notify\n"));

 if (VAR_1 == VAR_5) {
  FUNC_0(VAR_0, VAR_3, ("[BTCoex], Pnp notify to SLEEP\n"));
 } else if (VAR_2 == VAR_5) {
  FUNC_0(VAR_0, VAR_3, ("[BTCoex], Pnp notify to WAKE UP\n"));
  FUNC_2(VAR_4, 0);
  FUNC_1(VAR_4);
  FUNC_3(VAR_4);
 }
}
