
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ovl_dir_file {scalar_t__ is_upper; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int dentry; } ;
struct file {TYPE_1__ f_path; struct ovl_dir_file* private_data; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,struct inode*) ;

__attribute__((used)) static bool FUNC_2(struct file *VAR_1)
{
 struct ovl_dir_file *VAR_2 = VAR_1->private_data;
 struct inode *VAR_3 = FUNC_0(VAR_1->f_path.dentry);







 return VAR_2->is_upper && FUNC_1(VAR_0, VAR_3);

}
