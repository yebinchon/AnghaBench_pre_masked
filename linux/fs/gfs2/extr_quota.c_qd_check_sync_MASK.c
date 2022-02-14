
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct gfs2_sbd {int sd_quota_list; } ;
struct gfs2_quota_data {scalar_t__ qd_sync_gen; int qd_change; int qd_change_sync; int qd_flags; int qd_list; int qd_lockref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct gfs2_quota_data*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct gfs2_sbd *VAR_2, struct gfs2_quota_data *VAR_3,
    u64 *VAR_4)
{
 if (FUNC_4(VAR_1, &VAR_3->qd_flags) ||
     !FUNC_4(VAR_0, &VAR_3->qd_flags) ||
     (VAR_4 && (VAR_3->qd_sync_gen >= *VAR_4)))
  return 0;

 if (!FUNC_1(&VAR_3->qd_lockref))
  return 0;

 FUNC_0(&VAR_3->qd_list, &VAR_2->sd_quota_list);
 FUNC_2(VAR_1, &VAR_3->qd_flags);
 VAR_3->qd_change_sync = VAR_3->qd_change;
 FUNC_3(VAR_3);
 return 1;
}
