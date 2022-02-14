
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {char* buf; size_t size; } ;
struct file {scalar_t__ private_data; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (struct file*,int (*) (struct seq_file*,void*),void*) ;

int FUNC_3(struct file *VAR_1, int (*VAR_2)(struct seq_file *, void *),
  void *VAR_3, size_t VAR_4)
{
 char *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;
 if (!VAR_5)
  return -VAR_0;
 VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (VAR_6) {
  FUNC_0(VAR_5);
  return VAR_6;
 }
 ((struct seq_file *)VAR_1->private_data)->buf = VAR_5;
 ((struct seq_file *)VAR_1->private_data)->size = VAR_4;
 return 0;
}
