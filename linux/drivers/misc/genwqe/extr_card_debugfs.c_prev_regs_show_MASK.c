
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct genwqe_dev* private; } ;
struct genwqe_reg {int addr; int val; } ;
struct genwqe_dev {TYPE_1__* ffdc; } ;
struct TYPE_2__ {struct genwqe_reg* regs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct seq_file*,char*,int,int) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_3, void *VAR_4)
{
 struct genwqe_dev *VAR_5 = VAR_3->private;
 unsigned int VAR_6;
 struct genwqe_reg *VAR_7 = VAR_5->ffdc[VAR_1].regs;

 if (VAR_7 == ((void*)0))
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (VAR_7[VAR_6].addr == 0xffffffff)
   break;

  if (VAR_7[VAR_6].val == 0x0ull)
   continue;

  FUNC_0(VAR_3, "  0x%08x 0x%016llx\n",
      VAR_7[VAR_6].addr, VAR_7[VAR_6].val);
 }
 return 0;
}
