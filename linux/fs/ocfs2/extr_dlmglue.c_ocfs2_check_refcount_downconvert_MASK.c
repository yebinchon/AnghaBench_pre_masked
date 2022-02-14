
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_refcount_tree {int rf_ci; } ;
struct ocfs2_lock_res {int dummy; } ;


 int FUNC_0 (int *,struct ocfs2_lock_res*,int) ;
 struct ocfs2_refcount_tree* FUNC_1 (struct ocfs2_lock_res*) ;

__attribute__((used)) static int FUNC_2(struct ocfs2_lock_res *VAR_0,
         int VAR_1)
{
 struct ocfs2_refcount_tree *VAR_2 =
    FUNC_1(VAR_0);

 return FUNC_0(&VAR_2->rf_ci, VAR_0, VAR_1);
}
