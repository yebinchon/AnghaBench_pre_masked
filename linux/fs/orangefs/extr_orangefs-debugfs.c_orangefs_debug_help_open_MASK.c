
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int private; } ;
struct inode {int i_private; } ;
struct file {scalar_t__ private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct file*,int *) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_4, struct file *VAR_5)
{
 int VAR_6 = -VAR_0;
 int VAR_7;

 FUNC_0(VAR_1,
       "orangefs_debug_help_open: start\n");

 if (VAR_3)
  goto out;

 VAR_7 = FUNC_1(VAR_5, &VAR_2);
 if (VAR_7)
  goto out;

 ((struct seq_file *)(VAR_5->private_data))->private = VAR_4->i_private;

 VAR_6 = 0;

out:
 FUNC_0(VAR_1,
       "orangefs_debug_help_open: rc:%d:\n",
       VAR_6);
 return VAR_6;
}
