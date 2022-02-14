
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otg_switch_mtk {int dummy; } ;
struct ssusb_mtk {struct otg_switch_mtk otg_switch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ssusb_mtk*,int ) ;
 int FUNC_1 (struct otg_switch_mtk*,int ) ;

void FUNC_2(struct ssusb_mtk *VAR_6, int VAR_7)
{
 struct otg_switch_mtk *VAR_8 = &VAR_6->otg_switch;

 if (VAR_7) {
  FUNC_0(VAR_6, VAR_1);
  FUNC_1(VAR_8, VAR_4);
  FUNC_1(VAR_8, VAR_3);
 } else {
  FUNC_0(VAR_6, VAR_0);
  FUNC_1(VAR_8, VAR_2);
  FUNC_1(VAR_8, VAR_5);
 }
}
