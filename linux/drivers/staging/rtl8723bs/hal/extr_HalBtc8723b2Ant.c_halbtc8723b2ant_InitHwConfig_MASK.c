
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_13__ {int btRf0x1eBackup; } ;
struct TYPE_12__ {int (* fBtcRead1Byte ) (TYPE_1__*,int) ;int (* fBtcWrite1ByteBitMask ) (TYPE_1__*,int,int,int) ;int (* fBtcWrite1Byte ) (TYPE_1__*,int,int) ;int (* fBtcGetRfReg ) (TYPE_1__*,int ,int,int) ;} ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int,int) ;
 TYPE_8__* VAR_5 ;
 int FUNC_3 (TYPE_1__*,int ,int,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int,int) ;
 int FUNC_6 (TYPE_1__*,int,int) ;
 int FUNC_7 (TYPE_1__*,int,int) ;
 int FUNC_8 (TYPE_1__*,int,int,int) ;

__attribute__((used)) static void FUNC_9(PBTC_COEXIST VAR_6, bool VAR_7)
{
 u8 VAR_8 = 0;

 FUNC_0(VAR_1, VAR_4, ("[BTCoex], 2Ant Init HW Config!!\n"));


 VAR_5->btRf0x1eBackup =
  VAR_6->fBtcGetRfReg(VAR_6, VAR_2, 0x1e, 0xfffff);


 VAR_8 = VAR_6->fBtcRead1Byte(VAR_6, 0x790);
 VAR_8 &= 0xc0;
 VAR_8 |= 0x5;
 VAR_6->fBtcWrite1Byte(VAR_6, 0x790, VAR_8);


 FUNC_2(VAR_6, VAR_0, 1, 0);


 FUNC_1(VAR_6, VAR_3, 0);


 VAR_6->fBtcWrite1Byte(VAR_6, 0x76e, 0xc);
 VAR_6->fBtcWrite1Byte(VAR_6, 0x778, 0x3);
 VAR_6->fBtcWrite1ByteBitMask(VAR_6, 0x40, 0x20, 0x1);
}
