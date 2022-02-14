
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int (* fBtcWrite1ByteBitMask ) (TYPE_1__*,int,int,int ) ;} ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*,int,int,int ) ;

__attribute__((used)) static void FUNC_2(PBTC_COEXIST VAR_2, u32 VAR_3)
{
 u8 VAR_4 = (u8)VAR_3;

 FUNC_0(
  VAR_1,
  VAR_0,
  ("[BTCoex], Write SwDacSwing = 0x%x\n", VAR_3)
 );
 VAR_2->fBtcWrite1ByteBitMask(VAR_2, 0x883, 0x3e, VAR_4);
}
