
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int bStopCoexDm; } ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int ,int,int) ;
 int FUNC_4 (TYPE_1__*,int ,int,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int,int) ;

void FUNC_6(PBTC_COEXIST VAR_6)
{
 FUNC_0(VAR_2, VAR_5, ("[BTCoex], Halt notify\n"));

 FUNC_3(VAR_6, VAR_3, 0x0, 0x0);
 FUNC_4(VAR_6, VAR_4, 0, 0);
 FUNC_5(VAR_6, VAR_0, 0, 1);

 FUNC_2(VAR_6, VAR_4, 1);

 FUNC_1(VAR_6, VAR_1);

 VAR_6->bStopCoexDm = 1;
}
