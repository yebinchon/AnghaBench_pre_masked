
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_tune {int gt_quota_warn_period; int gt_quota_scale_num; int gt_quota_scale_den; int gt_complain_secs; int gt_max_readahead; scalar_t__ gt_new_files_jdata; int gt_spin; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct gfs2_tune *VAR_0)
{
 FUNC_1(&VAR_0->gt_spin);

 VAR_0->gt_quota_warn_period = 10;
 VAR_0->gt_quota_scale_num = 1;
 VAR_0->gt_quota_scale_den = 1;
 VAR_0->gt_new_files_jdata = 0;
 VAR_0->gt_max_readahead = FUNC_0(18);
 VAR_0->gt_complain_secs = 10;
}
