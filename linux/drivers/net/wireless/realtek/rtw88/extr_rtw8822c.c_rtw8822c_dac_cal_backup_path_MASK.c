
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtw_dev {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct rtw_dev*,int,int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct rtw_dev *VAR_0, u8 VAR_1)
{
 u32 VAR_2 = 0x1c;
 u32 VAR_3 = 0x2c;
 u32 VAR_4, VAR_5;

 if (FUNC_0(VAR_1 >= 2))
  return;


 VAR_4 = FUNC_3(VAR_1) + 0xb0;
 VAR_5 = FUNC_2(VAR_1) + 0x10;
 FUNC_1(VAR_0, VAR_1, 0, VAR_4, VAR_5);


 VAR_4 = FUNC_3(VAR_1) + 0xb0 + VAR_2;
 VAR_5 = FUNC_2(VAR_1) + 0x10 + VAR_3;
 FUNC_1(VAR_0, VAR_1, 1, VAR_4, VAR_5);
}
