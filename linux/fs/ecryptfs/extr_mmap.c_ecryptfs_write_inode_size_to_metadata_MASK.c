
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ecryptfs_crypt_stat {int flags; } ;
struct TYPE_2__ {struct ecryptfs_crypt_stat crypt_stat; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;

int FUNC_4(struct inode *VAR_2)
{
 struct ecryptfs_crypt_stat *VAR_3;

 VAR_3 = &FUNC_1(VAR_2)->crypt_stat;
 FUNC_0(!(VAR_3->flags & VAR_0));
 if (VAR_3->flags & VAR_1)
  return FUNC_3(VAR_2);
 else
  return FUNC_2(VAR_2);
}
