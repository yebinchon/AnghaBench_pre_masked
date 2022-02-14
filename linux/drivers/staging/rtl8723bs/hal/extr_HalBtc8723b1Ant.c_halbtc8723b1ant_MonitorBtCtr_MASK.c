
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_9__ {int highPriorityTx; int highPriorityRx; int lowPriorityTx; int lowPriorityRx; int popEventCnt; int bC2hBtInquiryPage; scalar_t__ bUnderIps; } ;
struct TYPE_8__ {int (* fBtcRead4Byte ) (TYPE_1__*,int) ;int (* fBtcWrite1Byte ) (TYPE_1__*,int,int) ;} ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_5__* VAR_4 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_5(PBTC_COEXIST VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8;
 u32 VAR_9 = 0, VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
 static u8 VAR_13;




 if (VAR_4->bUnderIps) {
  VAR_4->highPriorityTx = 65535;
  VAR_4->highPriorityRx = 65535;
  VAR_4->lowPriorityTx = 65535;
  VAR_4->lowPriorityRx = 65535;
  return;
 }

 VAR_6 = 0x770;
 VAR_7 = 0x774;

 VAR_8 = VAR_5->fBtcRead4Byte(VAR_5, VAR_6);
 VAR_9 = VAR_8 & VAR_3;
 VAR_10 = (VAR_8 & VAR_2)>>16;

 VAR_8 = VAR_5->fBtcRead4Byte(VAR_5, VAR_7);
 VAR_11 = VAR_8 & VAR_3;
 VAR_12 = (VAR_8 & VAR_2)>>16;

 VAR_4->highPriorityTx = VAR_9;
 VAR_4->highPriorityRx = VAR_10;
 VAR_4->lowPriorityTx = VAR_11;
 VAR_4->lowPriorityRx = VAR_12;

 if ((VAR_4->lowPriorityTx >= 1050) && (!VAR_4->bC2hBtInquiryPage))
  VAR_4->popEventCnt++;

 FUNC_0(
  VAR_1,
  VAR_0,
  (
   "[BTCoex], Hi-Pri Rx/Tx: %d/%d, Lo-Pri Rx/Tx: %d/%d\n",
   VAR_10,
   VAR_9,
   VAR_12,
   VAR_11
  )
 );


 VAR_5->fBtcWrite1Byte(VAR_5, 0x76e, 0xc);

 if ((VAR_9 == 0) && (VAR_10 == 0) && (VAR_11 == 0) && (VAR_12 == 0)) {
  VAR_13++;
  if (VAR_13 >= 3) {
   FUNC_1(VAR_5);
   VAR_13 = 0;
  }
 }
}
