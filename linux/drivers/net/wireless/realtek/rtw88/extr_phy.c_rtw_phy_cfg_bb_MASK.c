
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtw_table {int dummy; } ;
struct rtw_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rtw_dev*,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;

void FUNC_5(struct rtw_dev *VAR_0, const struct rtw_table *VAR_1,
      u32 VAR_2, u32 VAR_3)
{
 if (VAR_2 == 0xfe)
  FUNC_1(50);
 else if (VAR_2 == 0xfd)
  FUNC_0(5);
 else if (VAR_2 == 0xfc)
  FUNC_0(1);
 else if (VAR_2 == 0xfb)
  FUNC_4(50, 60);
 else if (VAR_2 == 0xfa)
  FUNC_3(5);
 else if (VAR_2 == 0xf9)
  FUNC_3(1);
 else
  FUNC_2(VAR_0, VAR_2, VAR_3);
}
