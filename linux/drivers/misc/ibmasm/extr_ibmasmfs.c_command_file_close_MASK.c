
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ibmasmfs_command_data {scalar_t__ command; } ;
struct file {struct ibmasmfs_command_data* private_data; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ibmasmfs_command_data*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct ibmasmfs_command_data *VAR_2 = VAR_1->private_data;

 if (VAR_2->command)
  FUNC_0(VAR_2->command);

 FUNC_1(VAR_2);
 return 0;
}
