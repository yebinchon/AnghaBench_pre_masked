
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ecryptfs_crypt_stat {int dummy; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {struct ecryptfs_crypt_stat crypt_stat; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct ecryptfs_crypt_stat*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_0, loff_t VAR_1)
{
 struct ecryptfs_crypt_stat *VAR_2;
 loff_t VAR_3, VAR_4;

 VAR_2 = &FUNC_0(VAR_0)->crypt_stat;
 VAR_3 = FUNC_3(VAR_2,
       FUNC_1(VAR_0));
 VAR_4 = FUNC_3(VAR_2, VAR_1);
 if (VAR_4 > VAR_3) {






  return FUNC_2(VAR_0, VAR_4);
 }

 return 0;
}
