
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {struct dentry* dentry; } ;
struct dentry {int d_sb; } ;
struct autofs_sb_info {int fs_lock; } ;
struct autofs_info {int flags; int expire_complete; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct autofs_info* FUNC_0 (struct dentry*) ;
 struct autofs_sb_info* FUNC_1 (int ) ;
 int FUNC_2 (struct autofs_sb_info*,struct path const*,int ) ;
 scalar_t__ FUNC_3 (struct dentry*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(const struct path *VAR_6, int VAR_7)
{
 struct dentry *VAR_8 = VAR_6->dentry;
 struct autofs_sb_info *VAR_9 = FUNC_1(VAR_8->d_sb);
 struct autofs_info *VAR_10 = FUNC_0(VAR_8);
 int VAR_11;
 int VAR_12;


 if (!(VAR_10->flags & VAR_1))
  return 0;
 if (VAR_7)
  return -VAR_3;

retry:
 FUNC_6(&VAR_9->fs_lock);
 VAR_12 = VAR_10->flags & (VAR_1 | VAR_0);
 if (VAR_12 == VAR_1) {
  FUNC_7(&VAR_9->fs_lock);




  FUNC_5(VAR_4/10);
  goto retry;
 }
 if (VAR_12 & VAR_0) {
  FUNC_7(&VAR_9->fs_lock);

  FUNC_4("waiting for expire %p name=%pd\n", VAR_8, VAR_8);

  VAR_11 = FUNC_2(VAR_9, VAR_6, VAR_5);
  FUNC_8(&VAR_10->expire_complete);

  FUNC_4("expire done status=%d\n", VAR_11);

  if (FUNC_3(VAR_8))
   return -VAR_2;

  return VAR_11;
 }
 FUNC_7(&VAR_9->fs_lock);

 return 0;
}
