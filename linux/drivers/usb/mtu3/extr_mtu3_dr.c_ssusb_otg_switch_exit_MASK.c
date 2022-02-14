
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otg_switch_mtk {int role_sw; int vbus_work; int id_work; } ;
struct ssusb_mtk {struct otg_switch_mtk otg_switch; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct ssusb_mtk *VAR_0)
{
 struct otg_switch_mtk *VAR_1 = &VAR_0->otg_switch;

 FUNC_0(&VAR_1->id_work);
 FUNC_0(&VAR_1->vbus_work);
 FUNC_1(VAR_1->role_sw);
}
