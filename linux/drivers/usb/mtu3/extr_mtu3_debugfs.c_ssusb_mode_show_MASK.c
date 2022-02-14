
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ manual_drd_enabled; } ;
struct ssusb_mtk {TYPE_1__ otg_switch; scalar_t__ is_host; } ;
struct seq_file {struct ssusb_mtk* private; } ;


 int FUNC_0 (struct seq_file*,char*,char*,char*) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct ssusb_mtk *VAR_2 = VAR_0->private;

 FUNC_0(VAR_0, "current mode: %s(%s drd)\n(echo device/host)\n",
     VAR_2->is_host ? "host" : "device",
     VAR_2->otg_switch.manual_drd_enabled ? "manual" : "auto");

 return 0;
}
