
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {struct dentry* dentry; } ;
struct file {TYPE_1__ f_path; } ;
struct dentry {int d_sb; } ;
struct autofs_sb_info {int lookup_lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct autofs_sb_info*) ;
 struct autofs_sb_info* FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,struct file*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,struct file*,struct dentry*,struct dentry*) ;
 scalar_t__ FUNC_5 (struct dentry*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_1, struct file *VAR_2)
{
 struct dentry *VAR_3 = VAR_2->f_path.dentry;
 struct autofs_sb_info *VAR_4 = FUNC_1(VAR_3->d_sb);

 FUNC_4("file=%p dentry=%p %pd\n", VAR_2, VAR_3, VAR_3);

 if (FUNC_0(VAR_4))
  goto out;
 FUNC_6(&VAR_4->lookup_lock);
 if (!FUNC_3(&VAR_2->f_path) && FUNC_5(VAR_3)) {
  FUNC_7(&VAR_4->lookup_lock);
  return -VAR_0;
 }
 FUNC_7(&VAR_4->lookup_lock);

out:
 return FUNC_2(VAR_1, VAR_2);
}
