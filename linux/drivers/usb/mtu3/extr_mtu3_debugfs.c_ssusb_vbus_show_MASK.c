
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otg_switch_mtk {int vbus; } ;
struct ssusb_mtk {struct otg_switch_mtk otg_switch; } ;
struct seq_file {struct ssusb_mtk* private; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,char*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct ssusb_mtk *VAR_2 = VAR_0->private;
 struct otg_switch_mtk *VAR_3 = &VAR_2->otg_switch;

 FUNC_1(VAR_0, "vbus state: %s\n(echo on/off)\n",
     FUNC_0(VAR_3->vbus) ? "on" : "off");

 return 0;
}
