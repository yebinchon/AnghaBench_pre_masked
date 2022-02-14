
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct fuse_conn {int no_force_umount; } ;


 int FUNC_0 (struct fuse_conn*) ;
 struct fuse_conn* FUNC_1 (struct super_block*) ;

__attribute__((used)) static void FUNC_2(struct super_block *VAR_0)
{
 struct fuse_conn *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1->no_force_umount)
  FUNC_0(VAR_1);
}
