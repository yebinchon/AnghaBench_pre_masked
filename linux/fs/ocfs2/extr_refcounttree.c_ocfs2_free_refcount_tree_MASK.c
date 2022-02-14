
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_refcount_tree {int rf_lockres; int rf_sb; int rf_ci; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ocfs2_refcount_tree*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct ocfs2_refcount_tree *VAR_0)
{
 FUNC_3(&VAR_0->rf_ci);
 FUNC_4(FUNC_0(VAR_0->rf_sb), &VAR_0->rf_lockres);
 FUNC_2(&VAR_0->rf_lockres);
 FUNC_1(VAR_0);
}
