
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {int dummy; } ;
struct ovl_dir_file {struct file* upperfile; int is_upper; struct file* realfile; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct dentry* dentry; } ;
struct file {TYPE_1__ f_path; struct ovl_dir_file* private_data; } ;
struct dentry {int dummy; } ;
typedef int loff_t ;


 scalar_t__ FUNC_0 (struct file*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct file*) ;
 struct file* FUNC_3 (struct file*) ;
 struct inode* FUNC_4 (struct file*) ;
 int FUNC_5 (struct file*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 struct file* FUNC_8 (struct path*,int ) ;
 int FUNC_9 (struct dentry*) ;
 int FUNC_10 (struct dentry*,struct path*) ;
 int FUNC_11 (struct file**,struct file*) ;
 int FUNC_12 (struct file*,int ,int ,int) ;

__attribute__((used)) static int FUNC_13(struct file *VAR_1, loff_t VAR_2, loff_t VAR_3,
    int VAR_4)
{
 struct ovl_dir_file *VAR_5 = VAR_1->private_data;
 struct dentry *VAR_6 = VAR_1->f_path.dentry;
 struct file *VAR_7 = VAR_5->realfile;


 if (!FUNC_1(FUNC_9(VAR_6)))
  return 0;




 if (!VAR_5->is_upper) {
  struct inode *VAR_8 = FUNC_4(VAR_1);

  VAR_7 = FUNC_3(VAR_5->upperfile);
  if (!VAR_7) {
   struct path VAR_9;

   FUNC_10(VAR_6, &VAR_9);
   VAR_7 = FUNC_8(&VAR_9, VAR_0);

   FUNC_6(VAR_8);
   if (!VAR_5->upperfile) {
    if (FUNC_0(VAR_7)) {
     FUNC_7(VAR_8);
     return FUNC_2(VAR_7);
    }
    FUNC_11(&VAR_5->upperfile, VAR_7);
   } else {

    if (!FUNC_0(VAR_7))
     FUNC_5(VAR_7);
    VAR_7 = VAR_5->upperfile;
   }
   FUNC_7(VAR_8);
  }
 }

 return FUNC_12(VAR_7, VAR_2, VAR_3, VAR_4);
}
