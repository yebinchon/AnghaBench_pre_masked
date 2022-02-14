
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rtw_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rtw_dev*,scalar_t__,int) ;
 int FUNC_2 (struct rtw_dev*,scalar_t__,int,int) ;

__attribute__((used)) static bool FUNC_3(struct rtw_dev *VAR_0,
       u32 VAR_1, u32 VAR_2)
{
 u32 VAR_3 = 0;

 do {
  FUNC_2(VAR_0, VAR_2, FUNC_0(26) | FUNC_0(25), 0x0);
  FUNC_2(VAR_0, VAR_2, FUNC_0(26) | FUNC_0(25), 0x2);

  if (FUNC_1(VAR_0, VAR_1, 0xf) == 0x6)
   return 1;

 } while (VAR_3++ < 100);

 return 0;
}
