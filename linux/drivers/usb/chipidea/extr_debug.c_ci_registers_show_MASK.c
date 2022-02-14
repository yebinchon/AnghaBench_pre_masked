
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {struct ci_hdrc* private; } ;
struct ci_hdrc {scalar_t__ is_otg; scalar_t__ in_lpm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ci_hdrc*,int ,int ) ;
 int FUNC_1 (struct ci_hdrc*) ;
 int FUNC_2 (struct ci_hdrc*) ;
 int FUNC_3 (struct ci_hdrc*,int ) ;
 int FUNC_4 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_4, void *VAR_5)
{
 struct ci_hdrc *VAR_6 = VAR_4->private;
 u32 VAR_7;

 if (!VAR_6 || VAR_6->in_lpm)
  return -VAR_0;


 VAR_7 = FUNC_1(VAR_6);
 FUNC_4(VAR_4, "USBINTR reg: %08x\n", VAR_7);

 VAR_7 = FUNC_2(VAR_6);
 FUNC_4(VAR_4, "USBSTS reg: %08x\n", VAR_7);

 VAR_7 = FUNC_0(VAR_6, VAR_3, ~0);
 FUNC_4(VAR_4, "USBMODE reg: %08x\n", VAR_7);

 VAR_7 = FUNC_0(VAR_6, VAR_2, ~0);
 FUNC_4(VAR_4, "USBCMD reg: %08x\n", VAR_7);

 VAR_7 = FUNC_0(VAR_6, VAR_1, ~0);
 FUNC_4(VAR_4, "PORTSC reg: %08x\n", VAR_7);

 if (VAR_6->is_otg) {
  VAR_7 = FUNC_3(VAR_6, ~0);
  FUNC_4(VAR_4, "OTGSC reg: %08x\n", VAR_7);
 }

 return 0;
}
