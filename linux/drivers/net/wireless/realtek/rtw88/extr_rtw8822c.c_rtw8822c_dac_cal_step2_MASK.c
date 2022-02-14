
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtw_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtw_dev*,int*,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rtw_dev*,int ,char*,int,int) ;
 int FUNC_3 (struct rtw_dev*,int,int) ;
 int FUNC_4 (struct rtw_dev*,int,int,int) ;
 int FUNC_5 (struct rtw_dev*,int,int) ;

__attribute__((used)) static void FUNC_6(struct rtw_dev *VAR_1,
       u8 VAR_2, u32 *VAR_3, u32 *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_5 = FUNC_1(VAR_2);
 FUNC_4(VAR_1, VAR_5 + 0xbc, 0xf0000000, 0x0);
 FUNC_4(VAR_1, VAR_5 + 0xc0, 0xf, 0x8);
 FUNC_4(VAR_1, VAR_5 + 0xd8, 0xf0000000, 0x0);
 FUNC_4(VAR_1, VAR_5 + 0xdc, 0xf, 0x8);

 FUNC_3(VAR_1, 0x1b00, 0x00000008);
 FUNC_5(VAR_1, 0x1bcc, 0x03f);
 FUNC_3(VAR_1, VAR_5 + 0x0c, 0xdff00220);
 FUNC_3(VAR_1, VAR_5 + 0x10, 0x02d508c5);
 FUNC_3(VAR_1, 0x1c3c, 0x00088103);

 FUNC_0(VAR_1, &VAR_8, &VAR_9);
 VAR_6 = VAR_8;
 VAR_7 = VAR_9;


 if (VAR_6 != 0x0)
  VAR_6 = 0x400 - VAR_6;
 if (VAR_7 != 0x0)
  VAR_7 = 0x400 - VAR_7;
 if (VAR_6 < 0x300) {
  VAR_6 = VAR_6 * 2 * 6 / 5;
  VAR_6 = VAR_6 + 0x80;
 } else {
  VAR_6 = (0x400 - VAR_6) * 2 * 6 / 5;
  VAR_6 = 0x7f - VAR_6;
 }
 if (VAR_7 < 0x300) {
  VAR_7 = VAR_7 * 2 * 6 / 5;
  VAR_7 = VAR_7 + 0x80;
 } else {
  VAR_7 = (0x400 - VAR_7) * 2 * 6 / 5;
  VAR_7 = 0x7f - VAR_7;
 }

 *VAR_3 = VAR_6;
 *VAR_4 = VAR_7;

 FUNC_2(VAR_1, VAR_0, "[DACK] before i=0x%x, q=0x%x\n", VAR_8, VAR_9);
 FUNC_2(VAR_1, VAR_0, "[DACK] after  i=0x%x, q=0x%x\n", VAR_6, VAR_7);
}
