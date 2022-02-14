
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtw_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rtw_dev*,int ,int,int) ;
 int FUNC_1 (struct rtw_dev*,int,int,int) ;
 int FUNC_2 (struct rtw_dev*,int,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct rtw_dev *VAR_2)
{
 u8 VAR_3, VAR_4;
 u16 VAR_5 = 0;

 FUNC_2(VAR_2, 0x522, 0xff);
 FUNC_1(VAR_2, 0x1e70, 0xf, 0x2);

 do {
  VAR_3 = (u8)FUNC_0(VAR_2, VAR_0, 0x00, 0xf0000);
  VAR_4 = (u8)FUNC_0(VAR_2, VAR_1, 0x00, 0xf0000);
  FUNC_3(2);
  VAR_5++;
 } while ((VAR_3 == 2 || VAR_4 == 2) && VAR_5 < 2500);
}
