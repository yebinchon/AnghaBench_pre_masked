
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {struct dwc3* private; } ;
struct dwc3 {int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct seq_file*,char*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct seq_file *VAR_2)
{
 struct dwc3 *VAR_3 = VAR_2->private;
 int VAR_4;
 u32 VAR_5;

 for (VAR_4 = 0; VAR_4 < 16; VAR_4++) {
  VAR_5 = FUNC_0(VAR_4);
  FUNC_2(VAR_3->regs, VAR_1, VAR_5);
  VAR_5 = FUNC_1(VAR_3->regs, VAR_0);
  FUNC_3(VAR_2, "GDBGLSP[%d] = 0x%08x\n", VAR_4, VAR_5);
 }
}
