
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct TYPE_9__ {scalar_t__* wifiChnlInfo; } ;
struct TYPE_8__ {int (* fBtcFillH2c ) (TYPE_1__*,int,int,scalar_t__*) ;int (* fBtcGet ) (TYPE_1__*,int ,scalar_t__*) ;} ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,char*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 TYPE_6__* VAR_9 ;
 int FUNC_1 (TYPE_1__*,int ,scalar_t__*) ;
 int FUNC_2 (TYPE_1__*,int ,scalar_t__*) ;
 int FUNC_3 (TYPE_1__*,int ,scalar_t__*) ;
 int FUNC_4 (TYPE_1__*,int,int,scalar_t__*) ;

void FUNC_5(PBTC_COEXIST VAR_10, u8 VAR_11)
{
 u8 VAR_12[3] = {0};
 u32 VAR_13;
 u8 VAR_14;
 u8 VAR_15 = 0;

 if (VAR_4 == VAR_11) {
  FUNC_0(VAR_6, VAR_8, ("[BTCoex], MEDIA connect notify\n"));
 } else {
  FUNC_0(VAR_6, VAR_8, ("[BTCoex], MEDIA disconnect notify\n"));
 }


 VAR_10->fBtcGet(VAR_10, VAR_2, &VAR_14);
 if ((VAR_4 == VAR_11) && (VAR_14 <= 14)) {
  VAR_12[0] = 0x1;
  VAR_12[1] = VAR_14;
  VAR_10->fBtcGet(VAR_10, VAR_3, &VAR_13);
  if (VAR_7 == VAR_13)
   VAR_12[2] = 0x30;
  else {
   VAR_10->fBtcGet(VAR_10, VAR_1, &VAR_15);
   if (VAR_15 < 10)
    VAR_12[2] = 0x30;
   else
    VAR_12[2] = 0x20;
  }
 }

 VAR_9->wifiChnlInfo[0] = VAR_12[0];
 VAR_9->wifiChnlInfo[1] = VAR_12[1];
 VAR_9->wifiChnlInfo[2] = VAR_12[2];

 FUNC_0(
  VAR_5,
  VAR_0,
  (
   "[BTCoex], FW write 0x66 = 0x%x\n",
   VAR_12[0]<<16|VAR_12[1]<<8|VAR_12[2]
  )
 );

 VAR_10->fBtcFillH2c(VAR_10, 0x66, 3, VAR_12);
}
