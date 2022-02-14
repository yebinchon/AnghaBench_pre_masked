
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {struct debugfs_devm_entry* i_private; } ;
struct file {int dummy; } ;
struct debugfs_devm_entry {int dev; int read; } ;


 int FUNC_0 (struct file*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 struct debugfs_devm_entry *VAR_2 = VAR_0->i_private;

 return FUNC_0(VAR_1, VAR_2->read, VAR_2->dev);
}
