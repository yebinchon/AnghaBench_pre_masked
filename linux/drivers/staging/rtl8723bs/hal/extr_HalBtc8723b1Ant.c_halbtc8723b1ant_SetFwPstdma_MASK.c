
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int* psTdmaPara; } ;
struct TYPE_6__ {int (* fBtcFillH2c ) (TYPE_1__*,int,int,int*) ;int (* fBtcGet ) (TYPE_1__*,int ,int*) ;} ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_7 ;
 TYPE_4__* VAR_8 ;
 int FUNC_1 (TYPE_1__*,int ,int*) ;
 int FUNC_2 (TYPE_1__*,int,int,int*) ;

__attribute__((used)) static void FUNC_3(
 PBTC_COEXIST VAR_9, u8 VAR_10, u8 VAR_11, u8 VAR_12, u8 VAR_13, u8 VAR_14
)
{
 u8 VAR_15[5] = {0};
 u8 VAR_16 = VAR_10, VAR_17 = VAR_14;
 bool VAR_18 = 0;

 VAR_9->fBtcGet(VAR_9, VAR_4, &VAR_18);

 if (VAR_18) {
  if (VAR_10&VAR_1 && !(VAR_10&VAR_2)) {
   FUNC_0(
    VAR_6,
    VAR_7,
    ("[BTCoex], FW for 1Ant AP mode\n")
   );
   VAR_16 &= ~VAR_1;
   VAR_16 |= VAR_2;

   VAR_17 |= VAR_2;
   VAR_17 &= ~VAR_3;
  }
 }

 VAR_15[0] = VAR_16;
 VAR_15[1] = VAR_11;
 VAR_15[2] = VAR_12;
 VAR_15[3] = VAR_13;
 VAR_15[4] = VAR_17;

 VAR_8->psTdmaPara[0] = VAR_16;
 VAR_8->psTdmaPara[1] = VAR_11;
 VAR_8->psTdmaPara[2] = VAR_12;
 VAR_8->psTdmaPara[3] = VAR_13;
 VAR_8->psTdmaPara[4] = VAR_17;

 FUNC_0(
  VAR_5,
  VAR_0,
  (
   "[BTCoex], PS-TDMA H2C cmd = 0x%x%08x\n",
   VAR_15[0],
   VAR_15[1]<<24|
   VAR_15[2]<<16|
   VAR_15[3]<<8|
   VAR_15[4]
  )
 );

 VAR_9->fBtcFillH2c(VAR_9, 0x60, 5, VAR_15);
}
