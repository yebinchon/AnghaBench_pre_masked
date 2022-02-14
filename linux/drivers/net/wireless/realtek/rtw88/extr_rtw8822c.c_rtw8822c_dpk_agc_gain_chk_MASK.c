
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtw_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtw_dev*,int ) ;
 int FUNC_1 (struct rtw_dev*,int ,int ) ;

__attribute__((used)) static u8 FUNC_2(struct rtw_dev *VAR_3, u8 VAR_4,
        u8 VAR_5)
{
 u8 VAR_6 = 0;
 u16 VAR_7;

 FUNC_1(VAR_3, VAR_4, VAR_0);
 VAR_7 = FUNC_0(VAR_3, VAR_4);

 if (VAR_7 > 1535 && !VAR_5)
  return VAR_2;
 else if (VAR_7 < 768 && !VAR_5)
  return VAR_1;
 else
  return VAR_6;
}
