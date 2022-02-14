
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int highPriorityTx; int highPriorityRx; int lowPriorityTx; int lowPriorityRx; } ;
struct TYPE_7__ {int (* fBtcRead4Byte ) (TYPE_1__*,int) ;int (* fBtcWrite1Byte ) (TYPE_1__*,int,int) ;} ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__* VAR_4 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_4(PBTC_COEXIST VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8;
 u32 VAR_9 = 0, VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;

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

 FUNC_0(
  VAR_1,
  VAR_0,
  (
   "[BTCoex], High Priority Tx/Rx (reg 0x%x) = 0x%x(%d)/0x%x(%d)\n",
   VAR_6,
   VAR_9,
   VAR_9,
   VAR_10,
   VAR_10
  )
 );
 FUNC_0(
  VAR_1,
  VAR_0,
  (
   "[BTCoex], Low Priority Tx/Rx (reg 0x%x) = 0x%x(%d)/0x%x(%d)\n",
   VAR_7,
   VAR_11,
   VAR_11,
   VAR_12,
   VAR_12
  )
 );


 VAR_5->fBtcWrite1Byte(VAR_5, 0x76e, 0xc);
}
