
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_path {int dummy; } ;
struct ocfs2_extent_tree {int et_ci; } ;
struct ocfs2_extent_rec {int dummy; } ;
struct ocfs2_extent_list {struct ocfs2_extent_rec* l_recs; } ;
typedef int handle_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,struct ocfs2_path*,scalar_t__) ;
 int FUNC_3 (struct ocfs2_path*) ;
 scalar_t__ FUNC_4 (struct ocfs2_path*) ;

__attribute__((used)) static int FUNC_5(handle_t *VAR_0,
        struct ocfs2_extent_tree *VAR_1,
        struct ocfs2_path *VAR_2,
        struct ocfs2_extent_list *VAR_3,
        int VAR_4,
        struct ocfs2_extent_rec *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_2(VAR_0, VAR_1->et_ci, VAR_2,
        FUNC_4(VAR_2) - 1);
 if (VAR_6) {
  FUNC_0(VAR_6);
  goto out;
 }

 VAR_3->l_recs[VAR_4] = *VAR_5;

 FUNC_1(VAR_0, FUNC_3(VAR_2));
out:
 return VAR_6;
}
