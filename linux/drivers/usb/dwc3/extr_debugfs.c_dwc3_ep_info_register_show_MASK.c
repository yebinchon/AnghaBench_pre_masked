
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct seq_file {struct dwc3_ep* private; } ;
struct dwc3_ep {int number; struct dwc3* dwc; } ;
struct dwc3 {int lock; int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct seq_file*,char*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_3, void *VAR_4)
{
 struct dwc3_ep *VAR_5 = VAR_3->private;
 struct dwc3 *VAR_6 = VAR_5->dwc;
 unsigned long VAR_7;
 u64 VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11;

 FUNC_4(&VAR_6->lock, VAR_7);
 VAR_11 = FUNC_0(VAR_5->number);
 FUNC_2(VAR_6->regs, VAR_2, VAR_11);

 VAR_9 = FUNC_1(VAR_6->regs, VAR_0);
 VAR_10 = FUNC_1(VAR_6->regs, VAR_1);

 VAR_8 = ((u64)VAR_10 << 32) | VAR_9;
 FUNC_3(VAR_3, "0x%016llx\n", VAR_8);
 FUNC_5(&VAR_6->lock, VAR_7);

 return 0;
}
