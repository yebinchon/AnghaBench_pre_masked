
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct ecryptfs_mount_crypt_stat {int flags; } ;
struct ecryptfs_crypt_stat {int flags; int cs_mutex; } ;
struct dentry {int dummy; } ;
struct TYPE_4__ {struct ecryptfs_crypt_stat crypt_stat; } ;
struct TYPE_3__ {struct ecryptfs_mount_crypt_stat mount_crypt_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct inode* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*,struct inode*) ;
 int FUNC_2 (struct inode*) ;
 TYPE_2__* FUNC_3 (struct inode*) ;
 int FUNC_4 (struct dentry*) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct dentry *VAR_7)
{
 struct inode *VAR_8 = FUNC_0(VAR_7);
 struct ecryptfs_mount_crypt_stat *VAR_9;
 struct ecryptfs_crypt_stat *VAR_10;
 int VAR_11;

 VAR_10 = &FUNC_3(VAR_8)->crypt_stat;
 VAR_9 = &FUNC_5(
      VAR_8->i_sb)->mount_crypt_stat;
 FUNC_7(&VAR_10->cs_mutex);

 if (VAR_10->flags & VAR_4 &&
     VAR_10->flags & VAR_2) {
  VAR_11 = 0;
  goto out;
 }

 VAR_11 = FUNC_4(VAR_7);
 if (!VAR_11)
  goto out;

 if (VAR_9->flags & VAR_3) {
  VAR_10->flags &= ~(VAR_1
           | VAR_0);
  VAR_11 = 0;
  goto out;
 }

 if (!(VAR_9->flags & VAR_5) &&
     !FUNC_6(FUNC_2(VAR_8))) {
  VAR_11 = FUNC_1(VAR_7, VAR_8);
  if (!VAR_11)
   goto out;
 }

 VAR_11 = -VAR_6;
out:
 FUNC_8(&VAR_10->cs_mutex);
 return VAR_11;
}
