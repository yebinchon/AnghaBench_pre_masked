
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int i_sb; } ;
struct ecryptfs_mount_crypt_stat {int flags; } ;
struct ecryptfs_crypt_stat {int flags; scalar_t__ metadata_size; } ;
typedef int loff_t ;
struct TYPE_4__ {struct ecryptfs_crypt_stat crypt_stat; } ;
struct TYPE_3__ {struct ecryptfs_mount_crypt_stat mount_crypt_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 TYPE_1__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct inode*,int ) ;

void FUNC_6(const char *VAR_3, struct inode *VAR_4)
{
 struct ecryptfs_mount_crypt_stat *VAR_5;
 struct ecryptfs_crypt_stat *VAR_6;
 u64 VAR_7;

 VAR_6 = &FUNC_1(VAR_4)->crypt_stat;
 VAR_5 =
  &FUNC_2(VAR_4->i_sb)->mount_crypt_stat;
 if (VAR_5->flags & VAR_0) {
  VAR_7 = FUNC_4(FUNC_0(VAR_4));
  if (VAR_6->flags & VAR_2)
   VAR_7 += VAR_6->metadata_size;
 } else
  VAR_7 = FUNC_3(VAR_3);
 FUNC_5(VAR_4, (loff_t)VAR_7);
 VAR_6->flags |= VAR_1;
}
