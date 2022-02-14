
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xensyms {int name; } ;
struct seq_file {scalar_t__ private; } ;
struct inode {int dummy; } ;
struct file {struct seq_file* private_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct seq_file *VAR_2 = VAR_1->private_data;
 struct xensyms *VAR_3 = (struct xensyms *)VAR_2->private;

 FUNC_0(VAR_3->name);
 return FUNC_1(VAR_0, VAR_1);
}
