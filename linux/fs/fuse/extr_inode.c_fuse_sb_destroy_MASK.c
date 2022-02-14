
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct fuse_conn {int killsb; int * sb; scalar_t__ destroy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct fuse_conn*) ;
 int FUNC_2 (struct fuse_conn*) ;
 int FUNC_3 (struct fuse_conn*) ;
 struct fuse_conn* FUNC_4 (struct super_block*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct super_block *VAR_0)
{
 struct fuse_conn *VAR_1 = FUNC_4(VAR_0);

 if (VAR_1) {
  if (VAR_1->destroy)
   FUNC_2(VAR_1);

  FUNC_1(VAR_1);
  FUNC_3(VAR_1);

  FUNC_0(&VAR_1->killsb);
  VAR_1->sb = ((void*)0);
  FUNC_5(&VAR_1->killsb);
 }
}
