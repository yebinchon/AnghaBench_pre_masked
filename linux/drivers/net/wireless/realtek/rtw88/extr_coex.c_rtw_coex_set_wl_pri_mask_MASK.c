
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct rtw_dev {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct rtw_dev*,scalar_t__,int ,int) ;

__attribute__((used)) static void FUNC_2(struct rtw_dev *VAR_1, u8 VAR_2,
         u8 VAR_3)
{
 u32 VAR_4;

 VAR_4 = VAR_0 + (VAR_2 / 8);
 VAR_2 = VAR_2 % 8;

 FUNC_1(VAR_1, VAR_4, FUNC_0(VAR_2), VAR_3);
}
