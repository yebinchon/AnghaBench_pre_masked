
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {int dentry; } ;
struct file {scalar_t__ private_data; TYPE_1__ f_path; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(struct inode *VAR_1, struct file *VAR_2)
{
 VAR_2->private_data = FUNC_0(VAR_2->f_path.dentry);

 return VAR_2->private_data ? 0 : -VAR_0;
}
