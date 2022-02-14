
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_private; } ;
struct ibmasmfs_command_data {scalar_t__ sp; int * command; } ;
struct file {struct ibmasmfs_command_data* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ibmasmfs_command_data* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_3, struct file *VAR_4)
{
 struct ibmasmfs_command_data *VAR_5;

 if (!VAR_3->i_private)
  return -VAR_0;

 VAR_5 = FUNC_0(sizeof(struct ibmasmfs_command_data), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_5->command = ((void*)0);
 VAR_5->sp = VAR_3->i_private;
 VAR_4->private_data = VAR_5;
 return 0;
}
