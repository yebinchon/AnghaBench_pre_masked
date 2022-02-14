
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int dummy; } ;
struct ecryptfs_mount_crypt_stat {int flags; } ;
struct ecryptfs_auth_tok {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct key**,struct ecryptfs_auth_tok**,struct ecryptfs_mount_crypt_stat*,char*) ;
 int FUNC_1 (struct key**,struct ecryptfs_auth_tok**,char*) ;

__attribute__((used)) static int
FUNC_2(
 struct key **VAR_3,
 struct ecryptfs_auth_tok **VAR_4,
 struct ecryptfs_mount_crypt_stat *VAR_5,
 char *VAR_6)
{
 int VAR_7 = 0;

 VAR_7 = FUNC_0(VAR_3, VAR_4,
         VAR_5, VAR_6);
 if (VAR_7 == -VAR_2) {





  if (VAR_5->flags
    & VAR_0)
   return -VAR_1;

  VAR_7 = FUNC_1(VAR_3, VAR_4,
             VAR_6);
 }
 return VAR_7;
}
