
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtw_dev {int dummy; } ;
typedef int s8 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct rtw_dev*,int,int ,int) ;

__attribute__((used)) static void FUNC_2(struct rtw_dev *VAR_1, u8 VAR_2,
           s8 *VAR_3)
{
 u32 VAR_4 = 0x3a00;
 u8 VAR_5 = VAR_2 & 0xfc;
 u8 VAR_6[4];
 u32 VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
  VAR_6[VAR_8] = VAR_3[VAR_8] & 0x7f;

 VAR_7 = VAR_6[0] |
        (VAR_6[1] << 8) |
        (VAR_6[2] << 16) |
        (VAR_6[3] << 24);

 FUNC_1(VAR_1, 0x1c90, FUNC_0(15), 0x0);
 FUNC_1(VAR_1, VAR_4 + VAR_5, VAR_0,
    VAR_7);
}
