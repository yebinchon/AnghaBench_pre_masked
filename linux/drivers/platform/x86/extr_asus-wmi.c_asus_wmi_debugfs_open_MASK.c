
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {struct asus_wmi_debugfs_node* i_private; } ;
struct file {int dummy; } ;
struct asus_wmi_debugfs_node {int asus; int show; } ;


 int FUNC_0 (struct file*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 struct asus_wmi_debugfs_node *VAR_2 = VAR_0->i_private;

 return FUNC_0(VAR_1, VAR_2->show, VAR_2->asus);
}
