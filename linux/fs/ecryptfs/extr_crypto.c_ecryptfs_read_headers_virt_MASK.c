
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecryptfs_crypt_stat {int flags; scalar_t__ file_version; int * mount_crypt_stat; } ;
struct dentry {int d_sb; } ;
struct TYPE_2__ {int mount_crypt_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct ecryptfs_crypt_stat*,char*,struct dentry*) ;
 int FUNC_3 (int ,char*,int,...) ;
 int FUNC_4 (struct ecryptfs_crypt_stat*,char*,int*) ;
 int FUNC_5 (struct ecryptfs_crypt_stat*) ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct ecryptfs_crypt_stat*,char*,int*,int) ;
 int FUNC_9 (struct ecryptfs_crypt_stat*) ;

__attribute__((used)) static int FUNC_10(char *VAR_6,
          struct ecryptfs_crypt_stat *VAR_7,
          struct dentry *VAR_8,
          int VAR_9)
{
 int VAR_10 = 0;
 int VAR_11;
 int VAR_12;

 FUNC_5(VAR_7);
 VAR_7->mount_crypt_stat = &FUNC_6(
  VAR_8->d_sb)->mount_crypt_stat;
 VAR_11 = VAR_0;
 VAR_10 = FUNC_7(VAR_6 + VAR_11);
 if (VAR_10)
  goto out;
 if (!(VAR_7->flags & VAR_1))
  FUNC_1(VAR_6, FUNC_0(VAR_8));
 VAR_11 += VAR_5;
 FUNC_4(VAR_7, (VAR_6 + VAR_11), &VAR_12);
 if (VAR_7->file_version > VAR_2) {
  FUNC_3(VAR_4, "File version is [%d]; only "
    "file version [%d] is supported by this "
    "version of eCryptfs\n",
    VAR_7->file_version,
    VAR_2);
  VAR_10 = -VAR_3;
  goto out;
 }
 VAR_11 += VAR_12;
 if (VAR_7->file_version >= 1) {
  VAR_10 = FUNC_8(VAR_7, (VAR_6 + VAR_11),
        &VAR_12, VAR_9);
  if (VAR_10) {
   FUNC_3(VAR_4, "Error reading header "
     "metadata; rc = [%d]\n", VAR_10);
  }
  VAR_11 += VAR_12;
 } else
  FUNC_9(VAR_7);
 VAR_10 = FUNC_2(VAR_7, (VAR_6 + VAR_11),
           VAR_8);
out:
 return VAR_10;
}
