
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_coex {int defreeze_work; int bt_reenable_work; int bt_relink_work; } ;
struct rtw_dev {int watch_dog_work; struct rtw_coex coex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct rtw_dev*,int ) ;
 int FUNC_2 (struct rtw_dev*) ;

void FUNC_3(struct rtw_dev *VAR_2)
{
 struct rtw_coex *VAR_3 = &VAR_2->coex;

 FUNC_1(VAR_2, VAR_1);
 FUNC_1(VAR_2, VAR_0);

 FUNC_0(&VAR_2->watch_dog_work);
 FUNC_0(&VAR_3->bt_relink_work);
 FUNC_0(&VAR_3->bt_reenable_work);
 FUNC_0(&VAR_3->defreeze_work);

 FUNC_2(VAR_2);
}
