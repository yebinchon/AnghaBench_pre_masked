
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct genwqe_dev* private; } ;
struct genwqe_reg {int addr; int val; } ;
struct genwqe_dev {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct genwqe_dev*,struct genwqe_reg*,unsigned int,int) ;
 int FUNC_1 (struct genwqe_dev*) ;
 int FUNC_2 (struct genwqe_dev*) ;
 struct genwqe_reg* FUNC_3 (unsigned int,int,int ) ;
 int FUNC_4 (struct seq_file*,char*,int,int) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_3, void *VAR_4)
{
 struct genwqe_dev *VAR_5 = VAR_3->private;
 unsigned int VAR_6;
 struct genwqe_reg *VAR_7;

 VAR_7 = FUNC_3(VAR_1, sizeof(*VAR_7), VAR_2);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 FUNC_2(VAR_5);
 FUNC_0(VAR_5, VAR_7, VAR_1, 1);
 FUNC_1(VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (VAR_7[VAR_6].addr == 0xffffffff)
   break;

  if (VAR_7[VAR_6].val == 0x0ull)
   continue;

  FUNC_4(VAR_3, "  0x%08x 0x%016llx\n",
      VAR_7[VAR_6].addr, VAR_7[VAR_6].val);
 }
 return 0;
}
