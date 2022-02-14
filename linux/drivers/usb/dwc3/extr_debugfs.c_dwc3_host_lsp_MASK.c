
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct seq_file {struct dwc3* private; } ;
struct TYPE_2__ {int hwparams1; } ;
struct dwc3 {int dbg_lsp_select; int regs; TYPE_1__ hwparams; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct seq_file*,char*,int,int) ;
 int FUNC_4 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_5(struct seq_file *VAR_5)
{
 struct dwc3 *VAR_6 = VAR_5->private;
 bool VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;

 VAR_7 = !!(VAR_6->hwparams.hwparams1 & VAR_3);

 VAR_8 = VAR_6->dbg_lsp_select;
 if (VAR_8 == VAR_4) {
  FUNC_4(VAR_5, "Write LSP selection to print for host\n");
  return;
 }

 VAR_9 = FUNC_0(VAR_8);

 FUNC_2(VAR_6->regs, VAR_1, VAR_9);
 VAR_10 = FUNC_1(VAR_6->regs, VAR_0);
 FUNC_3(VAR_5, "GDBGLSP[%d] = 0x%08x\n", VAR_8, VAR_10);

 if (VAR_7 && VAR_8 < 256) {
  VAR_9 |= VAR_2;
  FUNC_2(VAR_6->regs, VAR_1, VAR_9);
  VAR_10 = FUNC_1(VAR_6->regs, VAR_0);
  FUNC_3(VAR_5, "GDBGLSP_DBC[%d] = 0x%08x\n", VAR_8, VAR_10);
 }
}
