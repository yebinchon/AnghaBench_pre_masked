
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_10__ {int bStopCoexDm; } ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 (TYPE_1__*,int ,int,int) ;
 int FUNC_5 (TYPE_1__*,int ,int,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ,int,int) ;

void FUNC_8(PBTC_COEXIST VAR_7, u8 VAR_8)
{
 FUNC_0(VAR_1, VAR_5, ("[BTCoex], Pnp notify\n"));

 if (VAR_3 == VAR_8) {
  FUNC_0(VAR_1, VAR_5, ("[BTCoex], Pnp notify to SLEEP\n"));

  FUNC_4(VAR_7, VAR_2, 0x0, 0x0);
  FUNC_5(VAR_7, VAR_6, 0, 0);
  FUNC_1(VAR_7, VAR_6, 2);
  FUNC_7(VAR_7, VAR_0, 0, 1);

  VAR_7->bStopCoexDm = 1;
 } else if (VAR_4 == VAR_8) {
  FUNC_0(VAR_1, VAR_5, ("[BTCoex], Pnp notify to WAKE UP\n"));
  VAR_7->bStopCoexDm = 0;
  FUNC_3(VAR_7, 0, 0);
  FUNC_2(VAR_7);
  FUNC_6(VAR_7);
 }
}
