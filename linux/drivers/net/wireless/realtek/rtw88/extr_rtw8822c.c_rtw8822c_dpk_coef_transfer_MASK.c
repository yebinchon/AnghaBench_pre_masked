
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
 int FUNC_0 (struct rtw_dev*,int ) ;
 scalar_t__ FUNC_1 (struct rtw_dev*,int ,int ) ;

__attribute__((used)) static u32 FUNC_2(struct rtw_dev *VAR_3)
{
 u32 VAR_4 = 0;
 u16 VAR_5 = 0, VAR_6 = 0;

 VAR_4 = FUNC_0(VAR_3, VAR_2);

 VAR_5 = (u16)FUNC_1(VAR_3, VAR_2, VAR_0) & 0x1fff;
 VAR_6 = (u16)FUNC_1(VAR_3, VAR_2, VAR_1) & 0x1fff;

 VAR_6 = ((0x2000 - VAR_6) & 0x1fff) - 1;

 VAR_4 = (VAR_5 << 16) | VAR_6;

 return VAR_4;
}
