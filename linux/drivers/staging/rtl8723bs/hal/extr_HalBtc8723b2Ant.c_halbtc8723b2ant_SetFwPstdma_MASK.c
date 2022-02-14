
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int* psTdmaPara; } ;
struct TYPE_5__ {int (* fBtcFillH2c ) (TYPE_1__*,int,int,int*) ;} ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 (TYPE_1__*,int,int,int*) ;

__attribute__((used)) static void FUNC_2(
 PBTC_COEXIST VAR_3,
 u8 VAR_4,
 u8 VAR_5,
 u8 VAR_6,
 u8 VAR_7,
 u8 VAR_8
)
{
 u8 VAR_9[5] = {0};

 VAR_9[0] = VAR_4;
 VAR_9[1] = VAR_5;
 VAR_9[2] = VAR_6;
 VAR_9[3] = VAR_7;
 VAR_9[4] = VAR_8;

 VAR_2->psTdmaPara[0] = VAR_4;
 VAR_2->psTdmaPara[1] = VAR_5;
 VAR_2->psTdmaPara[2] = VAR_6;
 VAR_2->psTdmaPara[3] = VAR_7;
 VAR_2->psTdmaPara[4] = VAR_8;

 FUNC_0(
  VAR_1,
  VAR_0,
  (
   "[BTCoex], FW write 0x60(5bytes) = 0x%x%08x\n",
   VAR_9[0],
   VAR_9[1]<<24|
   VAR_9[2]<<16|
   VAR_9[3]<<8|
   VAR_9[4]
  )
 );

 VAR_3->fBtcFillH2c(VAR_3, 0x60, 5, VAR_9);
}
