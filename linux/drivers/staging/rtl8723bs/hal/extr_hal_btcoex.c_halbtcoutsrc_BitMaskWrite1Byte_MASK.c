
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct adapter {int dummy; } ;
struct TYPE_2__ {struct adapter* Adapter; } ;
typedef TYPE_1__* PBTC_COEXIST ;


 int FUNC_0 (struct adapter*,int ) ;
 int FUNC_1 (struct adapter*,int ,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, u32 VAR_1, u8 VAR_2, u8 VAR_3)
{
 PBTC_COEXIST VAR_4;
 struct adapter *VAR_5;
 u8 VAR_6, VAR_7;
 u8 VAR_8;


 VAR_4 = (PBTC_COEXIST)VAR_0;
 VAR_5 = VAR_4->Adapter;
 VAR_6 = 0;
 VAR_7 = 0;

 if (VAR_2 != 0xFF) {
  VAR_6 = FUNC_0(VAR_5, VAR_1);

  for (VAR_8 = 0; VAR_8 <= 7; VAR_8++) {
   if ((VAR_2>>VAR_8)&0x1)
    break;
  }
  VAR_7 = VAR_8;

  VAR_3 = (VAR_6 & ~VAR_2) | ((VAR_3 << VAR_7) & VAR_2);
 }

 FUNC_1(VAR_5, VAR_1, VAR_3);
}
