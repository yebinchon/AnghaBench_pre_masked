
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_dir_lookup_result {int dl_prev_leaf_bh; int dl_dx_leaf_bh; int dl_leaf_bh; int dl_dx_root_bh; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct ocfs2_dir_lookup_result *VAR_0)
{
 FUNC_0(VAR_0->dl_dx_root_bh);
 FUNC_0(VAR_0->dl_leaf_bh);
 FUNC_0(VAR_0->dl_dx_leaf_bh);
 FUNC_0(VAR_0->dl_prev_leaf_bh);
}
