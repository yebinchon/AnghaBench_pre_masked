
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ocfs2_refcount_tree {int rf_lock; struct super_block* rf_sb; int rf_io_mutex; int rf_ci; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct ocfs2_refcount_tree *VAR_1,
            struct super_block *VAR_2)
{
 FUNC_1(&VAR_1->rf_ci, &VAR_0);
 FUNC_0(&VAR_1->rf_io_mutex);
 VAR_1->rf_sb = VAR_2;
 FUNC_2(&VAR_1->rf_lock);
}
