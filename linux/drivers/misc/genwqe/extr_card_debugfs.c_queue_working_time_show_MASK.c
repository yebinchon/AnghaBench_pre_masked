
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct seq_file {struct genwqe_dev* private; } ;
struct genwqe_dev {unsigned int num_vfs; } ;


 int VAR_0 ;
 int FUNC_0 (struct genwqe_dev*,int ,unsigned int) ;
 int FUNC_1 (struct seq_file*,char*,unsigned int,...) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_1, void *VAR_2)
{
 struct genwqe_dev *VAR_3 = VAR_1->private;
 unsigned int VAR_4;
 u64 VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_0, 0);
 FUNC_1(VAR_1, "  PF   0x%016llx\n", VAR_5);

 for (VAR_4 = 0; VAR_4 < VAR_3->num_vfs; VAR_4++) {
  VAR_5 = FUNC_0(VAR_3, VAR_0, VAR_4 + 1);
  FUNC_1(VAR_1, "  VF%-2d 0x%016llx\n", VAR_4, VAR_5);
 }
 return 0;
}
