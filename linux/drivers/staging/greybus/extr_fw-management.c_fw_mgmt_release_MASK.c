
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct fw_mgmt {int dummy; } ;
struct file {struct fw_mgmt* private_data; } ;


 int FUNC_0 (struct fw_mgmt*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 struct fw_mgmt *VAR_2 = VAR_1->private_data;

 FUNC_0(VAR_2);
 return 0;
}
