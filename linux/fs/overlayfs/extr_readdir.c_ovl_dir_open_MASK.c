
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {int dummy; } ;
struct ovl_dir_file {int is_upper; int is_real; struct file* realfile; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int dentry; } ;
struct file {struct ovl_dir_file* private_data; TYPE_1__ f_path; int f_flags; } ;
typedef enum ovl_path_type { ____Placeholder_ovl_path_type } ovl_path_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct file*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (struct ovl_dir_file*) ;
 struct ovl_dir_file* FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 struct file* FUNC_6 (struct path*,int ) ;
 int FUNC_7 (int ,struct path*) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_2, struct file *VAR_3)
{
 struct path VAR_4;
 struct file *VAR_5;
 struct ovl_dir_file *VAR_6;
 enum ovl_path_type VAR_7;

 VAR_6 = FUNC_4(sizeof(struct ovl_dir_file), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_7(VAR_3->f_path.dentry, &VAR_4);
 VAR_5 = FUNC_6(&VAR_4, VAR_3->f_flags);
 if (FUNC_0(VAR_5)) {
  FUNC_3(VAR_6);
  return FUNC_2(VAR_5);
 }
 VAR_6->realfile = VAR_5;
 VAR_6->is_real = FUNC_5(VAR_3->f_path.dentry);
 VAR_6->is_upper = FUNC_1(VAR_7);
 VAR_3->private_data = VAR_6;

 return 0;
}
