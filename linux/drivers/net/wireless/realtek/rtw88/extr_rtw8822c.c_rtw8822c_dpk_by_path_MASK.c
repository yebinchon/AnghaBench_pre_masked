
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtw_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct rtw_dev*,int) ;
 int FUNC_2 (struct rtw_dev*,int,int ) ;
 scalar_t__ FUNC_3 (struct rtw_dev*,int ,int ) ;
 int FUNC_4 (struct rtw_dev*,int ,int ,int) ;
 int FUNC_5 (struct rtw_dev*,int,int ,int ,int) ;

__attribute__((used)) static u8 FUNC_6(struct rtw_dev *VAR_6, u32 VAR_7, u8 VAR_8)
{
 u8 VAR_9;

 VAR_9 = FUNC_2(VAR_6, VAR_8, VAR_5);

 FUNC_4(VAR_6, VAR_2, VAR_0, 0x8 | (VAR_8 << 1));

 VAR_9 = VAR_9 | (u8)FUNC_3(VAR_6, VAR_1, FUNC_0(26));

 FUNC_5(VAR_6, VAR_8, VAR_4, VAR_3, 0x33e14);

 FUNC_1(VAR_6, VAR_8);

 return VAR_9;
}
