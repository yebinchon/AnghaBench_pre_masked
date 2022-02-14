
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_lock_res {int dummy; } ;
struct inode {int i_sb; } ;


 struct ocfs2_super* FUNC_0 (int ) ;
 struct inode* FUNC_1 (struct ocfs2_lock_res*) ;

__attribute__((used)) static struct ocfs2_super *FUNC_2(struct ocfs2_lock_res *VAR_0)
{
 struct inode *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1->i_sb);
}
