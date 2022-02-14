
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct ecryptfs_mount_crypt_stat {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {struct ecryptfs_mount_crypt_stat mount_crypt_stat; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 struct dentry* FUNC_5 (struct dentry*) ;
 int FUNC_6 (char**,size_t*,struct ecryptfs_mount_crypt_stat*,char const*,int ) ;
 int FUNC_7 (struct dentry*,struct dentry*,int ) ;
 TYPE_1__* FUNC_8 (int ) ;
 int FUNC_9 (struct inode*,int ) ;
 int FUNC_10 (struct inode*,int ) ;
 int FUNC_11 (char*) ;
 struct dentry* FUNC_12 (struct dentry*) ;
 int FUNC_13 (char const*) ;
 int FUNC_14 (struct dentry*) ;
 int FUNC_15 (int ,struct dentry*,char*) ;

__attribute__((used)) static int FUNC_16(struct inode *VAR_0, struct dentry *VAR_1,
       const char *VAR_2)
{
 int VAR_3;
 struct dentry *VAR_4;
 struct dentry *VAR_5;
 char *VAR_6;
 size_t VAR_7;
 struct ecryptfs_mount_crypt_stat *VAR_8 = ((void*)0);

 VAR_4 = FUNC_5(VAR_1);
 FUNC_3(VAR_4);
 VAR_5 = FUNC_12(VAR_4);
 VAR_8 = &FUNC_8(
  VAR_0->i_sb)->mount_crypt_stat;
 VAR_3 = FUNC_6(&VAR_6,
        &VAR_7,
        VAR_8, VAR_2,
        FUNC_13(VAR_2));
 if (VAR_3)
  goto out_lock;
 VAR_3 = FUNC_15(FUNC_1(VAR_5), VAR_4,
    VAR_6);
 FUNC_11(VAR_6);
 if (VAR_3 || FUNC_2(VAR_4))
  goto out_lock;
 VAR_3 = FUNC_7(VAR_4, VAR_1, VAR_0->i_sb);
 if (VAR_3)
  goto out_lock;
 FUNC_9(VAR_0, FUNC_1(VAR_5));
 FUNC_10(VAR_0, FUNC_1(VAR_5));
out_lock:
 FUNC_14(VAR_5);
 FUNC_4(VAR_4);
 if (FUNC_2(VAR_1))
  FUNC_0(VAR_1);
 return VAR_3;
}
