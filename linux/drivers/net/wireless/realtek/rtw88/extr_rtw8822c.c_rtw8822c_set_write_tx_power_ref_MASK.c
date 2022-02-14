
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct rtw_hal {size_t rf_path_num; } ;
struct rtw_dev {struct rtw_hal hal; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rtw_dev*,int,int,size_t) ;

__attribute__((used)) static void
FUNC_2(struct rtw_dev *VAR_0, u8 *VAR_1,
    u8 *VAR_2)
{
 struct rtw_hal *VAR_3 = &VAR_0->hal;
 u32 VAR_4[2] = {0x18a0, 0x41a0};
 u32 VAR_5[2] = {0x18e8, 0x41e8};
 u8 VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3->rf_path_num; VAR_6++) {
  FUNC_1(VAR_0, 0x1c90, FUNC_0(15), 0);
  FUNC_1(VAR_0, VAR_4[VAR_6], 0x7f0000,
     VAR_1[VAR_6]);
 }
 for (VAR_6 = 0; VAR_6 < VAR_3->rf_path_num; VAR_6++) {
  FUNC_1(VAR_0, 0x1c90, FUNC_0(15), 0);
  FUNC_1(VAR_0, VAR_5[VAR_6], 0x1fc00,
     VAR_2[VAR_6]);
 }
}
