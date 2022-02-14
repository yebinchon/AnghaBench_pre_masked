
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_hal {int rf_path_num; } ;
struct rtw_dev {struct rtw_hal hal; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtw_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct rtw_dev *VAR_1)
{
 struct rtw_hal *VAR_2 = &VAR_1->hal;
 int VAR_3, VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->rf_path_num; VAR_4++) {
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
   FUNC_0(VAR_1, VAR_4, VAR_3);
 }
}
