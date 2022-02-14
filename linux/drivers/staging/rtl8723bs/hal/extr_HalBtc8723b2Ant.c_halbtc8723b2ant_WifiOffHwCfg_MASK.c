
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_11__ {int (* fBtcWrite1ByteBitMask ) (TYPE_1__*,int,int,int) ;int (* fBtcGet ) (TYPE_1__*,int ,int*) ;int (* fBtcWrite1Byte ) (TYPE_1__*,int,int) ;int (* fBtcFillH2c ) (TYPE_1__*,int,int,int*) ;int (* fBtcSetRfReg ) (TYPE_1__*,int ,int,int,int) ;} ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*,int ,int,int,int) ;
 int FUNC_2 (TYPE_1__*,int ,int*) ;
 int FUNC_3 (TYPE_1__*,int,int,int*) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 int FUNC_5 (TYPE_1__*,int ,int*) ;
 int FUNC_6 (TYPE_1__*,int,int,int) ;
 int FUNC_7 (TYPE_1__*,int,int,int) ;

__attribute__((used)) static void FUNC_8(PBTC_COEXIST VAR_3)
{
 bool VAR_4 = 0;
 u8 VAR_5[2] = {0};
 u32 VAR_6 = 0;


 VAR_3->fBtcWrite1Byte(VAR_3, 0x76e, 0x4);

 VAR_3->fBtcSetRfReg(VAR_3, VAR_2, 0x1, 0xfffff, 0x780);
 VAR_3->fBtcGet(VAR_3, VAR_1, &VAR_6);
 if (VAR_6 >= 0x180000) {

  VAR_5[0] = 1;
  VAR_3->fBtcFillH2c(VAR_3, 0x6E, 1, VAR_5);
 } else
  VAR_3->fBtcWrite1Byte(VAR_3, 0x765, 0x18);

 VAR_3->fBtcGet(VAR_3, VAR_0, &VAR_4);
 if (!VAR_4)
  VAR_3->fBtcWrite1ByteBitMask(VAR_3, 0x67, 0x20, 0x0);
 else
  VAR_3->fBtcWrite1ByteBitMask(VAR_3, 0x67, 0x20, 0x1);
}
