
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
typedef int _adapter ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;

u8 FUNC_1(_adapter *VAR_2, u32 VAR_3, u8 VAR_4, u8 *VAR_5)
{
 u8 VAR_6, VAR_7, VAR_8;
 u16 VAR_9, VAR_10, VAR_11 = 0, VAR_12 = 0;
VAR_0;
 VAR_9 = (u16)(VAR_3 >> 1);
 VAR_8 = (u8)(VAR_3 & 0x1);


 if (VAR_8) {
  VAR_10 = FUNC_0(VAR_2, VAR_9);
  VAR_5[VAR_12++] = (u8) ((VAR_10>>8)&0xff);
  VAR_9++; VAR_4--;
 }

 VAR_6 = VAR_4 >> 1;
 VAR_7 = VAR_4 & 0x1;

 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  VAR_10 = FUNC_0(VAR_2, VAR_9+VAR_11);
  VAR_5[VAR_12++] = (u8) (VAR_10&0xff);
  VAR_5[VAR_12++] = (u8) ((VAR_10>>8)&0xff);
 }

 VAR_9 = VAR_9+VAR_11;
 if (VAR_7) {
  VAR_10 = FUNC_0(VAR_2, VAR_9);
  VAR_5[VAR_12] = (u8)(VAR_10 & 0xff);
 }
VAR_1;
 return 1;
}
