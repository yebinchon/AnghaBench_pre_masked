
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct rtw_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtw_dev*,int ,int ,int) ;
 int FUNC_1 (struct rtw_dev*,int ) ;
 int FUNC_2 (struct rtw_dev*,int ,int) ;

bool FUNC_3(struct rtw_dev *VAR_3, u16 VAR_4, u32 *VAR_5)
{
 if (!FUNC_0(VAR_3, VAR_0, VAR_1, 1))
  return 0;

 FUNC_2(VAR_3, VAR_0, 0x800F0000 | VAR_4);
 *VAR_5 = FUNC_1(VAR_3, VAR_2);

 return 1;
}
