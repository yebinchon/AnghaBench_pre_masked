
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_refcount_tree {int rf_sem; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ocfs2_refcount_tree*,int) ;

__attribute__((used)) static int FUNC_4(struct ocfs2_super *VAR_0,
          struct ocfs2_refcount_tree *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_2(VAR_3);
  goto out;
 }

 if (VAR_2)
  FUNC_1(&VAR_1->rf_sem);
 else
  FUNC_0(&VAR_1->rf_sem);

out:
 return VAR_3;
}
