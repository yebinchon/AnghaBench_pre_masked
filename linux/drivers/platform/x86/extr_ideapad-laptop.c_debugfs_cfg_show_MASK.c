
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct ideapad_private* private; } ;
struct ideapad_private {int cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct seq_file*,char*,...) ;
 scalar_t__ FUNC_1 (int ,int*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_4, void *VAR_5)
{
 struct ideapad_private *VAR_6 = VAR_4->private;

 if (!VAR_6) {
  FUNC_0(VAR_4, "cfg: N/A\n");
 } else {
  FUNC_0(VAR_4, "cfg: 0x%.8lX\n\nCapability: ",
      VAR_6->cfg);
  if (FUNC_1(VAR_1, &VAR_6->cfg))
   FUNC_0(VAR_4, "Bluetooth ");
  if (FUNC_1(VAR_0, &VAR_6->cfg))
   FUNC_0(VAR_4, "3G ");
  if (FUNC_1(VAR_3, &VAR_6->cfg))
   FUNC_0(VAR_4, "Wireless ");
  if (FUNC_1(VAR_2, &VAR_6->cfg))
   FUNC_0(VAR_4, "Camera ");
  FUNC_0(VAR_4, "\nGraphic: ");
  switch ((VAR_6->cfg)&0x700) {
  case 0x100:
   FUNC_0(VAR_4, "Intel");
   break;
  case 0x200:
   FUNC_0(VAR_4, "ATI");
   break;
  case 0x300:
   FUNC_0(VAR_4, "Nvidia");
   break;
  case 0x400:
   FUNC_0(VAR_4, "Intel and ATI");
   break;
  case 0x500:
   FUNC_0(VAR_4, "Intel and Nvidia");
   break;
  }
  FUNC_0(VAR_4, "\n");
 }
 return 0;
}
