
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int buf; } ;
struct inode {int dummy; } ;
struct file {struct seq_file* private_data; } ;


 int FUNC_0 (int ,struct seq_file*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

int FUNC_2(struct inode *VAR_1, struct file *VAR_2)
{
 struct seq_file *VAR_3 = VAR_2->private_data;
 FUNC_1(VAR_3->buf);
 FUNC_0(VAR_0, VAR_3);
 return 0;
}
