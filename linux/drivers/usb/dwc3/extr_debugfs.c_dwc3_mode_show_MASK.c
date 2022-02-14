
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {struct dwc3* private; } ;
struct dwc3 {int lock; int regs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;



 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct seq_file*,char*,...) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_1, void *VAR_2)
{
 struct dwc3 *VAR_3 = VAR_1->private;
 unsigned long VAR_4;
 u32 VAR_5;

 FUNC_3(&VAR_3->lock, VAR_4);
 VAR_5 = FUNC_1(VAR_3->regs, VAR_0);
 FUNC_4(&VAR_3->lock, VAR_4);

 switch (FUNC_0(VAR_5)) {
 case 129:
  FUNC_2(VAR_1, "host\n");
  break;
 case 130:
  FUNC_2(VAR_1, "device\n");
  break;
 case 128:
  FUNC_2(VAR_1, "otg\n");
  break;
 default:
  FUNC_2(VAR_1, "UNKNOWN %08x\n", FUNC_0(VAR_5));
 }

 return 0;
}
