
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* fBtcSetBtReg ) (TYPE_1__*,int ,int,int) ;} ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int,int) ;

void FUNC_5(PBTC_COEXIST VAR_5)
{
 FUNC_0(VAR_2, VAR_4, ("[BTCoex], Halt notify\n"));

 FUNC_3(VAR_5);
 VAR_5->fBtcSetBtReg(VAR_5, VAR_0, 0x3c, 0x15);
 FUNC_2(VAR_5, VAR_3, 1);

 FUNC_1(VAR_5, VAR_1);
}
