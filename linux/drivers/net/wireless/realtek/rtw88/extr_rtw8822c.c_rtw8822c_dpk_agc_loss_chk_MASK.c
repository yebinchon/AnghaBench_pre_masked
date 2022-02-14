
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtw_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtw_dev*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static u8 FUNC_2(struct rtw_dev *VAR_3, u8 VAR_4)
{
 u32 VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (VAR_5 < 0x4000000)
  return VAR_2;
 VAR_6 = 3 * FUNC_1(VAR_5 >> 13) - 3870;

 if (VAR_6 > 1000)
  return VAR_1;
 else if (VAR_6 < 250)
  return VAR_2;
 else
  return VAR_0;
}
