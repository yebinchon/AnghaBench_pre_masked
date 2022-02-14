
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {struct dwc3* private; } ;
struct dwc3 {int lock; int regs; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;


 int FUNC_1 (struct seq_file*) ;
 int FUNC_2 (struct seq_file*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct seq_file*,char*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct seq_file *VAR_1, void *VAR_2)
{
 struct dwc3 *VAR_3 = VAR_1->private;
 unsigned int VAR_4;
 unsigned long VAR_5;
 u32 VAR_6;

 FUNC_5(&VAR_3->lock, VAR_5);
 VAR_6 = FUNC_3(VAR_3->regs, VAR_0);
 VAR_4 = FUNC_0(VAR_6);

 switch (VAR_4) {
 case 128:
  FUNC_2(VAR_1);
  break;
 case 129:
  FUNC_1(VAR_1);
  break;
 default:
  FUNC_4(VAR_1, "Mode is unknown, no LSP register printed\n");
  break;
 }
 FUNC_6(&VAR_3->lock, VAR_5);

 return 0;
}
