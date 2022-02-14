
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct fuse_inode {int state; } ;
struct fuse_conn {int readdirplus_auto; int do_readdirplus; } ;
struct dir_context {scalar_t__ pos; } ;


 int VAR_0 ;
 struct fuse_conn* FUNC_0 (struct inode*) ;
 struct fuse_inode* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static bool FUNC_3(struct inode *VAR_1, struct dir_context *VAR_2)
{
 struct fuse_conn *VAR_3 = FUNC_0(VAR_1);
 struct fuse_inode *VAR_4 = FUNC_1(VAR_1);

 if (!VAR_3->do_readdirplus)
  return 0;
 if (!VAR_3->readdirplus_auto)
  return 1;
 if (FUNC_2(VAR_0, &VAR_4->state))
  return 1;
 if (VAR_2->pos == 0)
  return 1;
 return 0;
}
