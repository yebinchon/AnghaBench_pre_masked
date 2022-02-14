
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ocfs2_path {scalar_t__ p_tree_depth; } ;
struct ocfs2_extent_tree {int et_ci; } ;
struct ocfs2_extent_list {scalar_t__ l_next_free_rec; scalar_t__ l_count; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,struct ocfs2_path*,scalar_t__*) ;
 int FUNC_3 (int ,struct ocfs2_path*,scalar_t__) ;
 int FUNC_4 (struct ocfs2_path*) ;
 int FUNC_5 (int ) ;
 struct ocfs2_path* FUNC_6 (struct ocfs2_path*) ;
 struct ocfs2_extent_list* FUNC_7 (struct ocfs2_path*) ;

__attribute__((used)) static int FUNC_8(struct ocfs2_extent_tree *VAR_1,
    struct ocfs2_path *VAR_2,
    struct ocfs2_path **VAR_3)
{
 int VAR_4;
 u32 VAR_5;
 struct ocfs2_path *VAR_6 = ((void*)0);
 struct ocfs2_extent_list *VAR_7;

 *VAR_3 = ((void*)0);


 FUNC_0(VAR_2->p_tree_depth == 0);

 VAR_7 = FUNC_7(VAR_2);
 FUNC_0(VAR_7->l_next_free_rec != VAR_7->l_count);

 VAR_4 = FUNC_2(FUNC_5(VAR_1->et_ci),
          VAR_2, &VAR_5);
 if (VAR_4) {
  FUNC_1(VAR_4);
  goto out;
 }


 FUNC_0(VAR_5 == 0);

 VAR_6 = FUNC_6(VAR_2);
 if (!VAR_6) {
  VAR_4 = -VAR_0;
  FUNC_1(VAR_4);
  goto out;
 }

 VAR_4 = FUNC_3(VAR_1->et_ci, VAR_6, VAR_5);
 if (VAR_4) {
  FUNC_1(VAR_4);
  goto out;
 }

 *VAR_3 = VAR_6;
out:
 if (VAR_4)
  FUNC_4(VAR_6);
 return VAR_4;
}
