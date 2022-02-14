
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtw_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct rtw_dev*,scalar_t__) ;
 int FUNC_2 (struct rtw_dev*,scalar_t__,int) ;
 int FUNC_3 (struct rtw_dev*,int ,int ) ;
 int FUNC_4 (struct rtw_dev*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_5(struct rtw_dev *VAR_6)
{
 u8 VAR_7;

 FUNC_4(VAR_6, VAR_3, VAR_1);
 VAR_7 = FUNC_1(VAR_6, VAR_4 + 1);
 VAR_7 &= 0xF0;

 VAR_7 |= 0xF;
 FUNC_4(VAR_6, VAR_4 + 1, VAR_7);
 FUNC_3(VAR_6, VAR_2, VAR_0);
 FUNC_2(VAR_6, VAR_5 + 4, FUNC_0(8) | FUNC_0(9));

 return 0;
}
