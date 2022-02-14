
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct ctrl_dbg* private_data; } ;
struct ctrl_dbg {struct ctrl_dbg* data; } ;


 int FUNC_0 (struct ctrl_dbg*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 struct ctrl_dbg *VAR_2 = VAR_1->private_data;

 FUNC_0(VAR_2->data);
 FUNC_0(VAR_2);
 return 0;
}
