
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_path {int dummy; } ;
struct ocfs2_extent_tree {int et_ci; } ;
struct ocfs2_extent_rec {int dummy; } ;
struct ocfs2_extent_list {int l_next_free_rec; struct ocfs2_extent_rec* l_recs; } ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,struct ocfs2_extent_tree*,struct ocfs2_path*,struct ocfs2_extent_rec*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,struct ocfs2_path*,int ) ;
 int FUNC_5 (struct ocfs2_path*) ;
 int FUNC_6 (int ,int *,struct ocfs2_path*) ;
 struct ocfs2_path* FUNC_7 (struct ocfs2_extent_tree*) ;
 struct ocfs2_extent_list* FUNC_8 (struct ocfs2_path*) ;
 int FUNC_9 (struct ocfs2_path*) ;

__attribute__((used)) static int FUNC_10(handle_t *VAR_2,
      struct ocfs2_extent_tree *VAR_3)
{
 int VAR_4;
 struct ocfs2_path *VAR_5 = ((void*)0);
 struct ocfs2_extent_list *VAR_6;
 struct ocfs2_extent_rec *VAR_7;

 VAR_5 = FUNC_7(VAR_3);
 if (!VAR_5) {
  VAR_4 = -VAR_0;
  return VAR_4;
 }

 VAR_4 = FUNC_4(VAR_3->et_ci, VAR_5, VAR_1);
 if (VAR_4 < 0) {
  FUNC_1(VAR_4);
  goto out;
 }

 VAR_4 = FUNC_3(VAR_2, FUNC_9(VAR_5));
 if (VAR_4 < 0) {
  FUNC_1(VAR_4);
  goto out;
 }

 VAR_4 = FUNC_6(VAR_3->et_ci, VAR_2, VAR_5);
 if (VAR_4 < 0) {
  FUNC_1(VAR_4);
  goto out;
 }

 VAR_6 = FUNC_8(VAR_5);
 VAR_7 = &VAR_6->l_recs[FUNC_0(VAR_6->l_next_free_rec) - 1];

 FUNC_2(VAR_2, VAR_3, VAR_5, VAR_7);

out:
 FUNC_5(VAR_5);
 return VAR_4;
}
