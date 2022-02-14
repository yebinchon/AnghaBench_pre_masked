
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int bC2hBtInfoReqSent; } ;
struct TYPE_5__ {int (* fBtcFillH2c ) (TYPE_1__*,int,int,int *) ;} ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 TYPE_3__* VAR_3 ;
 int FUNC_1 (TYPE_1__*,int,int,int *) ;

__attribute__((used)) static void FUNC_2(PBTC_COEXIST VAR_4)
{
 u8 VAR_5[1] = {0};

 VAR_3->bC2hBtInfoReqSent = 1;

 VAR_5[0] |= VAR_1;

 FUNC_0(
  VAR_2,
  VAR_0,
  ("[BTCoex], Query Bt Info, FW write 0x61 = 0x%x\n", VAR_5[0])
 );

 VAR_4->fBtcFillH2c(VAR_4, 0x61, 1, VAR_5);
}
