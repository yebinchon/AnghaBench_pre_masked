
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct genwqe_dev* private; } ;
struct genwqe_dev {TYPE_1__* ffdc; } ;
struct TYPE_2__ {int entries; int regs; } ;


 int FUNC_0 (struct seq_file*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1, int VAR_2)
{
 struct genwqe_dev *VAR_3 = VAR_0->private;

 FUNC_0(VAR_0, VAR_3->ffdc[VAR_2].regs, VAR_3->ffdc[VAR_2].entries);
 return 0;
}
