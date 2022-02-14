
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int sd_statfs_force_sync; int sd_quota_wait; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct gfs2_sbd *VAR_0) {
 if (!VAR_0->sd_statfs_force_sync) {
  VAR_0->sd_statfs_force_sync = 1;
  FUNC_0(&VAR_0->sd_quota_wait);
 }
}
