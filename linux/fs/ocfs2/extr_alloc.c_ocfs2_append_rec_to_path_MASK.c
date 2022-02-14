
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ocfs2_path {scalar_t__ p_tree_depth; } ;
struct ocfs2_extent_tree {int et_ci; } ;
struct ocfs2_extent_rec {int e_cpos; } ;
struct ocfs2_extent_list {int * l_recs; int l_next_free_rec; } ;
typedef int handle_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,struct ocfs2_extent_tree*,struct ocfs2_path*,struct ocfs2_extent_rec*) ;
 int FUNC_5 (int ,struct ocfs2_path*,scalar_t__*) ;
 int FUNC_6 (int ,struct ocfs2_path*,scalar_t__) ;
 int FUNC_7 (struct ocfs2_path*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int ,int *,struct ocfs2_path*) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 struct ocfs2_path* FUNC_12 (struct ocfs2_path*) ;
 struct ocfs2_extent_list* FUNC_13 (struct ocfs2_path*) ;
 int FUNC_14 (unsigned long long,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_15(handle_t *VAR_1,
        struct ocfs2_extent_tree *VAR_2,
        struct ocfs2_extent_rec *VAR_3,
        struct ocfs2_path *VAR_4,
        struct ocfs2_path **VAR_5)
{
 int VAR_6, VAR_7;
 struct ocfs2_extent_list *VAR_8;
 struct ocfs2_path *VAR_9 = ((void*)0);

 *VAR_5 = ((void*)0);





 FUNC_0(VAR_4->p_tree_depth == 0);






 VAR_8 = FUNC_13(VAR_4);
 VAR_7 = FUNC_1(VAR_8->l_next_free_rec);
 if (VAR_7 == 0 ||
     (VAR_7 == 1 && FUNC_8(&VAR_8->l_recs[0]))) {
  u32 VAR_10;

  VAR_6 = FUNC_5(FUNC_10(VAR_2->et_ci),
          VAR_4, &VAR_10);
  if (VAR_6) {
   FUNC_3(VAR_6);
   goto out;
  }

  FUNC_14(
   (unsigned long long)
   FUNC_11(VAR_2->et_ci),
   FUNC_2(VAR_3->e_cpos),
   VAR_10);





  if (VAR_10) {
   VAR_9 = FUNC_12(VAR_4);
   if (!VAR_9) {
    VAR_6 = -VAR_0;
    FUNC_3(VAR_6);
    goto out;
   }

   VAR_6 = FUNC_6(VAR_2->et_ci, VAR_9,
           VAR_10);
   if (VAR_6) {
    FUNC_3(VAR_6);
    goto out;
   }





  }
 }

 VAR_6 = FUNC_9(VAR_2->et_ci, VAR_1, VAR_4);
 if (VAR_6) {
  FUNC_3(VAR_6);
  goto out;
 }

 FUNC_4(VAR_1, VAR_2, VAR_4, VAR_3);

 *VAR_5 = VAR_9;
 VAR_6 = 0;
out:
 if (VAR_6 != 0)
  FUNC_7(VAR_9);

 return VAR_6;
}
