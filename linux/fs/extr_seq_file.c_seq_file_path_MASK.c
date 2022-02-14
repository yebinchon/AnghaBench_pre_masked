
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct file {int f_path; } ;


 int FUNC_0 (struct seq_file*,int *,char const*) ;

int FUNC_1(struct seq_file *VAR_0, struct file *VAR_1, const char *VAR_2)
{
 return FUNC_0(VAR_0, &VAR_1->f_path, VAR_2);
}
