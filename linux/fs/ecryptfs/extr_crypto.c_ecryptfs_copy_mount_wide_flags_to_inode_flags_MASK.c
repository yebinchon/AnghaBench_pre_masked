
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecryptfs_mount_crypt_stat {int flags; } ;
struct ecryptfs_crypt_stat {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_0(
 struct ecryptfs_crypt_stat *VAR_10,
 struct ecryptfs_mount_crypt_stat *VAR_11)
{
 if (VAR_11->flags & VAR_9)
  VAR_10->flags |= VAR_7;
 if (VAR_11->flags & VAR_2)
  VAR_10->flags |= VAR_8;
 if (VAR_11->flags & VAR_6) {
  VAR_10->flags |= VAR_3;
  if (VAR_11->flags
      & VAR_5)
   VAR_10->flags |= VAR_1;
  else if (VAR_11->flags
    & VAR_4)
   VAR_10->flags |= VAR_0;
 }
}
