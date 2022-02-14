
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_13__ {int (* fBtcRead1Byte ) (TYPE_1__*,int) ;int (* fBtcRead4Byte ) (TYPE_1__*,int) ;int (* fBtcWrite1ByteBitMask ) (TYPE_1__*,int,int,int) ;int (* fBtcWrite1Byte ) (TYPE_1__*,int,int) ;} ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int,int) ;
 int FUNC_3 (TYPE_1__*,int ,int,int) ;
 int FUNC_4 (TYPE_1__*,int,int,int) ;
 int FUNC_5 (TYPE_1__*,int,int) ;
 int FUNC_6 (TYPE_1__*,int,int) ;
 int FUNC_7 (TYPE_1__*,int,int,int) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_11(
 PBTC_COEXIST VAR_6,
 bool VAR_7,
 bool VAR_8
)
{
 u32 VAR_9 = 0;
 u8 VAR_10 = 0, VAR_11 = 0;

 FUNC_0(
  VAR_2,
  VAR_4,
  ("[BTCoex], 1Ant Init HW Config!!\n")
 );

 VAR_6->fBtcWrite1ByteBitMask(VAR_6, 0x550, 0x8, 0x1);


 VAR_6->fBtcWrite1Byte(VAR_6, 0x790, 0x5);


 VAR_6->fBtcWrite1Byte(VAR_6, 0x778, 0x1);
 VAR_6->fBtcWrite1ByteBitMask(VAR_6, 0x40, 0x20, 0x1);


 if (VAR_8) {
  FUNC_3(VAR_6, VAR_1, 1, 0);
  FUNC_2(VAR_6, VAR_3, 0, 9);
 } else
  FUNC_3(VAR_6, VAR_0, 1, 0);


 FUNC_1(VAR_6, VAR_3, 0);

 VAR_9 = VAR_6->fBtcRead4Byte(VAR_6, 0x948);
 VAR_10 = VAR_6->fBtcRead1Byte(VAR_6, 0x765);
 VAR_11 = VAR_6->fBtcRead1Byte(VAR_6, 0x67);

 FUNC_0(
  VAR_2,
  VAR_5,
  (
   "############# [BTCoex], 0x948 = 0x%x, 0x765 = 0x%x, 0x67 = 0x%x\n",
   VAR_9,
   VAR_10,
   VAR_11
  )
 );
}
