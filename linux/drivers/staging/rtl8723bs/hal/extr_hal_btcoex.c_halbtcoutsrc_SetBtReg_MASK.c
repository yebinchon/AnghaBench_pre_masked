
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


 int FUNC_0 (int) ;
 int FUNC_1 (struct adapter*,int,int,int*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, u8 VAR_1, u32 VAR_2, u32 VAR_3)
{
 PBTC_COEXIST VAR_4;
 struct adapter *VAR_5;
 u8 VAR_6[4] = {0};
 u8 VAR_7[4] = {0};
 u8 *VAR_8 = (u8 *)&VAR_2;
 u8 *VAR_9 = (u8 *)&VAR_3;
 u8 VAR_10 = 0;
 u8 VAR_11 = 0;

 VAR_4 = (PBTC_COEXIST)VAR_0;
 VAR_5 = VAR_4->Adapter;

 VAR_6[0] |= (VAR_10 & 0x0f);
 VAR_6[0] |= ((VAR_11 << 4) & 0xf0);
 VAR_6[1] = 0x0d;
 VAR_6[2] = VAR_9[0];
 FUNC_1(VAR_5, 0x67, 4, &(VAR_6[0]));

 FUNC_0(200);
 VAR_11++;

 VAR_7[0] |= (VAR_10 & 0x0f);
 VAR_7[0] |= ((VAR_11 << 4) & 0xf0);
 VAR_7[1] = 0x0c;
 VAR_7[3] = VAR_8[0];
 FUNC_1(VAR_5, 0x67, 4, &(VAR_7[0]));
}
