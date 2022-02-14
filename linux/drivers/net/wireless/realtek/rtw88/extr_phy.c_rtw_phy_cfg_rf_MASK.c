
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtw_table {int rf_path; } ;
struct rtw_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rtw_dev*,int ,int,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;

void FUNC_4(struct rtw_dev *VAR_1, const struct rtw_table *VAR_2,
      u32 VAR_3, u32 VAR_4)
{
 if (VAR_3 == 0xffe) {
  FUNC_0(50);
 } else if (VAR_3 == 0xfe) {
  FUNC_3(100, 110);
 } else {
  FUNC_1(VAR_1, VAR_2->rf_path, VAR_3, VAR_0, VAR_4);
  FUNC_2(1);
 }
}
