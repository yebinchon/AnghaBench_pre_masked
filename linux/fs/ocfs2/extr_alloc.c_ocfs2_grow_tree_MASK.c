
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_extent_tree {int et_ci; struct ocfs2_extent_list* et_root_el; } ;
struct ocfs2_extent_list {int l_tree_depth; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,struct ocfs2_extent_tree*,struct buffer_head*,struct buffer_head**,struct ocfs2_alloc_context*) ;
 int FUNC_6 (struct ocfs2_extent_tree*,struct buffer_head**) ;
 scalar_t__ FUNC_7 (struct ocfs2_extent_tree*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *,struct ocfs2_extent_tree*,struct ocfs2_alloc_context*,struct buffer_head**) ;
 int FUNC_10 (unsigned long long,int) ;

__attribute__((used)) static int FUNC_11(handle_t *VAR_0, struct ocfs2_extent_tree *VAR_1,
      int *VAR_2, struct buffer_head **VAR_3,
      struct ocfs2_alloc_context *VAR_4)
{
 int VAR_5, VAR_6;
 struct ocfs2_extent_list *VAR_7 = VAR_1->et_root_el;
 int VAR_8 = FUNC_3(VAR_7->l_tree_depth);
 struct buffer_head *VAR_9 = ((void*)0);

 FUNC_0(VAR_4 == ((void*)0) && FUNC_7(VAR_1));

 VAR_6 = FUNC_6(VAR_1, &VAR_9);
 if (VAR_6 < 0) {
  VAR_5 = VAR_6;
  FUNC_4(VAR_5);
  goto out;
 }




 if (VAR_6) {
  FUNC_0(VAR_9);
  FUNC_10(
   (unsigned long long)
   FUNC_8(VAR_1->et_ci),
   VAR_8);




  VAR_5 = FUNC_9(VAR_0, VAR_1, VAR_4, &VAR_9);
  if (VAR_5 < 0) {
   FUNC_4(VAR_5);
   goto out;
  }
  VAR_8++;
  if (VAR_8 == 1) {
   FUNC_0(*VAR_3);
   FUNC_2(VAR_9);
   *VAR_3 = VAR_9;
   goto out;
  }
 }



 VAR_5 = FUNC_5(VAR_0, VAR_1, VAR_9, VAR_3,
          VAR_4);
 if (VAR_5 < 0)
  FUNC_4(VAR_5);

out:
 if (VAR_2)
  *VAR_2 = VAR_8;
 FUNC_1(VAR_9);
 return VAR_5;
}
