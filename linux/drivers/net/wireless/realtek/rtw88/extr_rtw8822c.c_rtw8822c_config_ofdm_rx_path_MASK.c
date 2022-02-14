
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtw_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct rtw_dev*,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct rtw_dev *VAR_7, u8 VAR_8)
{
 if (VAR_8 == VAR_0 || VAR_8 == VAR_2) {
  FUNC_1(VAR_7, VAR_6, 0x300, 0x0);
  FUNC_1(VAR_7, VAR_6, 0x600000, 0x0);
  FUNC_1(VAR_7, VAR_3, FUNC_0(17), 0x0);
  FUNC_1(VAR_7, VAR_4, FUNC_0(20), 0x0);
  FUNC_1(VAR_7, VAR_5, FUNC_0(24), 0x0);
 } else if (VAR_8 == VAR_1) {
  FUNC_1(VAR_7, VAR_6, 0x300, 0x1);
  FUNC_1(VAR_7, VAR_6, 0x600000, 0x1);
  FUNC_1(VAR_7, VAR_3, FUNC_0(17), 0x1);
  FUNC_1(VAR_7, VAR_4, FUNC_0(20), 0x1);
  FUNC_1(VAR_7, VAR_5, FUNC_0(24), 0x1);
 }

 FUNC_1(VAR_7, 0x824, 0x0f000000, VAR_8);
 FUNC_1(VAR_7, 0x824, 0x000f0000, VAR_8);
}
