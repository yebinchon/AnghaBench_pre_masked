
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_path {int p_tree_depth; } ;
struct ocfs2_insert_type {scalar_t__ ins_split; } ;
struct ocfs2_extent_tree {int et_ci; } ;
struct ocfs2_extent_rec {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct ocfs2_path*,struct ocfs2_path*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct ocfs2_extent_tree*,struct ocfs2_path*,struct ocfs2_path*) ;
 int FUNC_4 (struct ocfs2_extent_tree*,struct ocfs2_extent_rec*,int ,struct ocfs2_insert_type*) ;
 int FUNC_5 (int ,int *,struct ocfs2_path*) ;
 int FUNC_6 (int *,struct buffer_head*) ;
 int FUNC_7 (struct ocfs2_extent_tree*,struct ocfs2_path*,struct ocfs2_path*,struct ocfs2_extent_rec*,scalar_t__) ;
 struct buffer_head* FUNC_8 (struct ocfs2_path*) ;
 int FUNC_9 (struct ocfs2_path*) ;

__attribute__((used)) static int FUNC_10(handle_t *VAR_1,
        struct ocfs2_extent_tree *VAR_2,
        struct ocfs2_path *VAR_3,
        struct ocfs2_path *VAR_4,
        struct ocfs2_extent_rec *VAR_5,
        struct ocfs2_insert_type *VAR_6)
{
 int VAR_7, VAR_8;
 struct buffer_head *VAR_9 = FUNC_8(VAR_4);

 if (VAR_3) {






  VAR_7 = FUNC_2(VAR_1, VAR_3->p_tree_depth);
  if (VAR_7 < 0) {
   FUNC_0(VAR_7);
   goto out;
  }

  VAR_7 = FUNC_5(VAR_2->et_ci, VAR_1, VAR_3);
  if (VAR_7 < 0) {
   FUNC_0(VAR_7);
   goto out;
  }
 }





 VAR_7 = FUNC_5(VAR_2->et_ci, VAR_1, VAR_4);
 if (VAR_7 < 0) {
  FUNC_0(VAR_7);
  goto out;
 }

 if (VAR_6->ins_split != VAR_0) {





  FUNC_7(VAR_2, VAR_3, VAR_4,
       VAR_5, VAR_6->ins_split);






  if (VAR_3)
   FUNC_6(VAR_1,
         FUNC_8(VAR_3));
 } else
  FUNC_4(VAR_2, VAR_5, FUNC_9(VAR_4),
         VAR_6);

 FUNC_6(VAR_1, VAR_9);

 if (VAR_3) {






  VAR_8 = FUNC_3(VAR_2, VAR_3,
       VAR_4);
  FUNC_1(VAR_1, VAR_3, VAR_4,
        VAR_8);
 }

 VAR_7 = 0;
out:
 return VAR_7;
}
