
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_lock_res {scalar_t__ l_priv; } ;
struct inode {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ocfs2_lock_res*) ;

__attribute__((used)) static inline struct inode *FUNC_2(struct ocfs2_lock_res *VAR_0)
{
 FUNC_0(!FUNC_1(VAR_0));

 return (struct inode *) VAR_0->l_priv;
}
