
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct seq_file {struct super_block* private; } ;


 int FUNC_0 (struct seq_file*,struct super_block*,int) ;
 scalar_t__ FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct seq_file*,char*) ;

int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct super_block *VAR_2 = VAR_0->private;
 int VAR_3;

 FUNC_2(VAR_0, FUNC_1(VAR_2) ? "ro" : "rw");
 VAR_3 = FUNC_0(VAR_0, VAR_2, 1);
 FUNC_2(VAR_0, "\n");
 return VAR_3;
}
