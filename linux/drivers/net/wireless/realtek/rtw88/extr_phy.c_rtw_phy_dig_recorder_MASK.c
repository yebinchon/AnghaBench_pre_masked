
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct rtw_dm_info {int igi_bitmap; int * fa_history; scalar_t__* igi_history; } ;



__attribute__((used)) static void FUNC_0(struct rtw_dm_info *VAR_0, u8 VAR_1, u16 VAR_2)
{
 u8 *VAR_3;
 u16 *VAR_4;
 u8 VAR_5;
 bool VAR_6;

 VAR_5 = VAR_0->igi_bitmap << 1 & 0xfe;
 VAR_3 = VAR_0->igi_history;
 VAR_4 = VAR_0->fa_history;

 VAR_6 = VAR_1 > VAR_3[0];
 VAR_5 |= VAR_6;

 VAR_3[3] = VAR_3[2];
 VAR_3[2] = VAR_3[1];
 VAR_3[1] = VAR_3[0];
 VAR_3[0] = VAR_1;

 VAR_4[3] = VAR_4[2];
 VAR_4[2] = VAR_4[1];
 VAR_4[1] = VAR_4[0];
 VAR_4[0] = VAR_2;

 VAR_0->igi_bitmap = VAR_5;
}
