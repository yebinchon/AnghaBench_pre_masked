
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {struct dentry* dentry; } ;
struct inode {int i_mode; } ;
struct dentry {int d_subdirs; int d_sb; } ;
struct autofs_sb_info {int fs_lock; } ;
struct autofs_info {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 struct autofs_info* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct path const*,int) ;
 scalar_t__ FUNC_3 (struct autofs_sb_info*) ;
 struct autofs_sb_info* FUNC_4 (int ) ;
 struct inode* FUNC_5 (struct dentry*) ;
 scalar_t__ FUNC_6 (struct dentry*) ;
 scalar_t__ FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct path const*,int) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct path const*) ;
 int FUNC_11 (char*,struct dentry*,struct dentry*) ;
 int FUNC_12 (struct dentry*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(const struct path *VAR_4, bool VAR_5)
{
 struct dentry *VAR_6 = VAR_4->dentry;
 struct autofs_sb_info *VAR_7 = FUNC_4(VAR_6->d_sb);
 struct autofs_info *VAR_8 = FUNC_1(VAR_6);
 int VAR_9;

 FUNC_11("dentry=%p %pd\n", VAR_6, VAR_6);


 if (FUNC_3(VAR_7)) {
  if (!FUNC_10(VAR_4))
   return -VAR_3;
  return 0;
 }


 if (FUNC_8(VAR_4, VAR_5) == -VAR_2)
  return -VAR_2;





 VAR_9 = FUNC_2(VAR_4, VAR_5);
 if (VAR_9)
  return VAR_9;

 if (VAR_5) {







  struct inode *VAR_10;

  if (VAR_8->flags & VAR_1)
   return 0;
  if (FUNC_10(VAR_4))
   return 0;
  VAR_10 = FUNC_5(VAR_6);
  if (VAR_10 && FUNC_0(VAR_10->i_mode))
   return -VAR_3;
  if (FUNC_9(&VAR_6->d_subdirs))
   return 0;
  if (!FUNC_12(VAR_6))
   return -VAR_3;
  return 0;
 }

 FUNC_13(&VAR_7->fs_lock);







 if (!(VAR_8->flags & VAR_0)) {






  if ((!FUNC_10(VAR_4) && !FUNC_12(VAR_6)) ||
      (FUNC_7(VAR_6) && FUNC_6(VAR_6)))
   VAR_9 = -VAR_3;
 }
 FUNC_14(&VAR_7->fs_lock);

 return VAR_9;
}
