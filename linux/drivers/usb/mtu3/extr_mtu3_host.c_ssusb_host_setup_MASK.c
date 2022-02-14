
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otg_switch_mtk {scalar_t__ manual_drd_enabled; } ;
struct ssusb_mtk {struct otg_switch_mtk otg_switch; } ;


 int VAR_0 ;
 int FUNC_0 (struct ssusb_mtk*) ;
 int FUNC_1 (struct ssusb_mtk*) ;
 int FUNC_2 (struct ssusb_mtk*,int ) ;
 int FUNC_3 (struct otg_switch_mtk*,int) ;

__attribute__((used)) static void FUNC_4(struct ssusb_mtk *VAR_1)
{
 struct otg_switch_mtk *VAR_2 = &VAR_1->otg_switch;

 FUNC_0(VAR_1);





 FUNC_1(VAR_1);

 if (VAR_2->manual_drd_enabled)
  FUNC_2(VAR_1, VAR_0);


 FUNC_3(&VAR_1->otg_switch, 1);
}
