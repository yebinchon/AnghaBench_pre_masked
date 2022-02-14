
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_refcount_tree {int rf_ci; } ;
struct ocfs2_lock_res {int dummy; } ;


 int VAR_0 ;
 struct ocfs2_refcount_tree* FUNC_0 (struct ocfs2_lock_res*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct ocfs2_lock_res *VAR_1,
      int VAR_2)
{
 struct ocfs2_refcount_tree *VAR_3 =
    FUNC_0(VAR_1);

 FUNC_1(&VAR_3->rf_ci);

 return VAR_0;
}
