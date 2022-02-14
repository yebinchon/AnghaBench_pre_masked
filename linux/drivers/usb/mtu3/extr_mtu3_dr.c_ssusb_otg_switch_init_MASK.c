
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otg_switch_mtk {scalar_t__ role_sw_used; scalar_t__ manual_drd_enabled; int vbus_work; int id_work; } ;
struct ssusb_mtk {struct otg_switch_mtk otg_switch; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct ssusb_mtk*) ;
 int FUNC_2 (struct otg_switch_mtk*) ;
 int VAR_0 ;
 int FUNC_3 (struct otg_switch_mtk*) ;
 int VAR_1 ;

int FUNC_4(struct ssusb_mtk *VAR_2)
{
 struct otg_switch_mtk *VAR_3 = &VAR_2->otg_switch;
 int VAR_4 = 0;

 FUNC_0(&VAR_3->id_work, VAR_0);
 FUNC_0(&VAR_3->vbus_work, VAR_1);

 if (VAR_3->manual_drd_enabled)
  FUNC_1(VAR_2);
 else if (VAR_3->role_sw_used)
  VAR_4 = FUNC_3(VAR_3);
 else
  VAR_4 = FUNC_2(VAR_3);

 return VAR_4;
}
