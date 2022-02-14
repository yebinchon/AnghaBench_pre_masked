
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {struct dwc3* private; } ;
struct dwc3 {int lock; int regs; } ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct seq_file*,char*,...) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_2, void *VAR_3)
{
 struct dwc3 *VAR_4 = VAR_2->private;
 unsigned long VAR_5;
 u32 VAR_6;

 FUNC_2(&VAR_4->lock, VAR_5);
 VAR_6 = FUNC_0(VAR_4->regs, VAR_0);
 VAR_6 &= VAR_1;
 VAR_6 >>= 1;
 FUNC_3(&VAR_4->lock, VAR_5);

 switch (VAR_6) {
 case 0:
  FUNC_1(VAR_2, "no test\n");
  break;
 case 131:
  FUNC_1(VAR_2, "test_j\n");
  break;
 case 130:
  FUNC_1(VAR_2, "test_k\n");
  break;
 case 128:
  FUNC_1(VAR_2, "test_se0_nak\n");
  break;
 case 129:
  FUNC_1(VAR_2, "test_packet\n");
  break;
 case 132:
  FUNC_1(VAR_2, "test_force_enable\n");
  break;
 default:
  FUNC_1(VAR_2, "UNKNOWN %d\n", VAR_6);
 }

 return 0;
}
