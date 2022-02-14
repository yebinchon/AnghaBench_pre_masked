
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ovl_dir_file {scalar_t__ upperfile; scalar_t__ realfile; scalar_t__ cache; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int dentry; } ;
struct file {TYPE_1__ f_path; struct ovl_dir_file* private_data; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct ovl_dir_file*) ;
 int FUNC_4 (struct ovl_dir_file*,int ) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0, struct file *VAR_1)
{
 struct ovl_dir_file *VAR_2 = VAR_1->private_data;

 if (VAR_2->cache) {
  FUNC_1(VAR_0);
  FUNC_4(VAR_2, VAR_1->f_path.dentry);
  FUNC_2(VAR_0);
 }
 FUNC_0(VAR_2->realfile);
 if (VAR_2->upperfile)
  FUNC_0(VAR_2->upperfile);
 FUNC_3(VAR_2);

 return 0;
}
