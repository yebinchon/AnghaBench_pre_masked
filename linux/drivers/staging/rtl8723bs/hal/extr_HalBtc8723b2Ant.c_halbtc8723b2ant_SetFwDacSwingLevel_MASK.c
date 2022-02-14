
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int (* fBtcFillH2c ) (TYPE_1__*,int,int,int *) ;} ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*,int,int,int *) ;

__attribute__((used)) static void FUNC_2(
 PBTC_COEXIST VAR_2, u8 VAR_3
)
{
 u8 VAR_4[1] = {0};



 VAR_4[0] = VAR_3;

 FUNC_0(
  VAR_1,
  VAR_0,
  ("[BTCoex], Set Dac Swing Level = 0x%x\n", VAR_3)
 );
 FUNC_0(
  VAR_1,
  VAR_0,
  ("[BTCoex], FW write 0x64 = 0x%x\n", VAR_4[0])
 );

 VAR_2->fBtcFillH2c(VAR_2, 0x64, 1, VAR_4);
}
