
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
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct rtw_dev*,int ,int) ;
 int FUNC_2 (struct rtw_dev*,int ,int) ;
 int FUNC_3 (struct rtw_dev*,int,int ,int) ;

__attribute__((used)) static u8 FUNC_4(struct rtw_dev *VAR_4, u8 VAR_5)
{
 u8 VAR_6;

 FUNC_3(VAR_4, VAR_1, VAR_0, 0x8 | (VAR_5 << 1));
 FUNC_3(VAR_4, 0x1b48, FUNC_0(14), 0x1);
 FUNC_2(VAR_4, VAR_2, 0x00060000);

 VAR_6 = (u8)FUNC_1(VAR_4, VAR_3, 0x000000f0);

 FUNC_3(VAR_4, 0x1b48, FUNC_0(14), 0x0);

 return VAR_6;
}
