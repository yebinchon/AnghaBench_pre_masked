
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


 int FUNC_0 (struct adapter*) ;

__attribute__((used)) static void FUNC_1(PBTC_COEXIST VAR_0)
{
 struct adapter *VAR_1;


 VAR_1 = VAR_0->Adapter;

 VAR_0->btInfo.bBtCtrlLps = 1;
 VAR_0->btInfo.bBtLpsOn = 0;

 FUNC_0(VAR_1);
}
