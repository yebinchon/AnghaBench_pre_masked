
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_path {int p_tree_depth; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
typedef int handle_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ocfs2_super*,int *) ;
 int FUNC_4 (int *,struct ocfs2_extent_tree*,struct ocfs2_path*,struct ocfs2_cached_dealloc_ctxt*) ;
 int * FUNC_5 (struct ocfs2_super*,int) ;

__attribute__((used)) static int FUNC_6(struct ocfs2_super *VAR_0,
    struct ocfs2_extent_tree *VAR_1,
    struct ocfs2_path *VAR_2,
    struct ocfs2_cached_dealloc_ctxt *VAR_3)
{
 handle_t *VAR_4;
 int VAR_5;
 int VAR_6 = VAR_2->p_tree_depth * 2 + 1;

 VAR_4 = FUNC_5(VAR_0, VAR_6);
 if (FUNC_0(VAR_4)) {
  VAR_5 = FUNC_1(VAR_4);
  FUNC_2(VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_4(VAR_4, VAR_1, VAR_2, VAR_3);
 if (VAR_5)
  FUNC_2(VAR_5);

 FUNC_3(VAR_0, VAR_4);
 return VAR_5;
}
