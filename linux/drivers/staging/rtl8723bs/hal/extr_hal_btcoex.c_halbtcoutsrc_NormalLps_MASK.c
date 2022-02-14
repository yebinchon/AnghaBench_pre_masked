
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct adapter {int dummy; } ;
struct TYPE_4__ {int bBtCtrlLps; int bBtLpsOn; } ;
struct TYPE_5__ {TYPE_1__ btInfo; struct adapter* Adapter; } ;
typedef TYPE_2__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (struct adapter*) ;

__attribute__((used)) static void FUNC_2(PBTC_COEXIST VAR_2)
{
 struct adapter *VAR_3;


 FUNC_0(VAR_1, VAR_0, ("[BTCoex], Normal LPS behavior!!!\n"));

 VAR_3 = VAR_2->Adapter;

 if (VAR_2->btInfo.bBtCtrlLps) {
  VAR_2->btInfo.bBtLpsOn = 0;
  FUNC_1(VAR_3);
  VAR_2->btInfo.bBtCtrlLps = 0;


 }
}
