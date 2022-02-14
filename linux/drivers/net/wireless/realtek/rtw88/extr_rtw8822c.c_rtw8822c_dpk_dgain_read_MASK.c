
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct rtw_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct rtw_dev*,int ,int ) ;
 int FUNC_2 (struct rtw_dev*,int ,int,int) ;

__attribute__((used)) static u16 FUNC_3(struct rtw_dev *VAR_4, u8 VAR_5)
{
 u16 VAR_6;

 FUNC_2(VAR_4, VAR_1, VAR_0, 0xc);
 FUNC_2(VAR_4, VAR_2, 0x00ff0000, 0x0);

 VAR_6 = (u16)FUNC_1(VAR_4, VAR_3, FUNC_0(27, 16));

 return VAR_6;
}
