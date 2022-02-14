
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_tune {int gt_quota_quantum; int gt_statfs_quantum; } ;
struct gfs2_sbd {int sd_quota_wait; scalar_t__ sd_statfs_force_sync; int sd_trunc_lock; int sd_trunc_list; int sd_vfs; struct gfs2_tune sd_tune; } ;


 int FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 unsigned long FUNC_4 (struct gfs2_sbd*,int ) ;
 int VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 unsigned long FUNC_7 (unsigned long,unsigned long) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (struct gfs2_sbd*,char*,int (*) (int ,int ),unsigned long,unsigned long*,int *) ;
 int FUNC_10 (struct gfs2_sbd*) ;
 int FUNC_11 (struct gfs2_sbd*,char*,int) ;
 scalar_t__ FUNC_12 (unsigned long) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 () ;
 int VAR_3 ;

int FUNC_16(void *VAR_4)
{
 struct gfs2_sbd *VAR_5 = VAR_4;
 struct gfs2_tune *VAR_6 = &VAR_5->sd_tune;
 unsigned long VAR_7 = 0;
 unsigned long VAR_8 = 0;
 unsigned long VAR_9 = 0;
 FUNC_0(VAR_3);
 int VAR_10;

 while (!FUNC_5()) {


  if (VAR_5->sd_statfs_force_sync) {
   int VAR_11 = FUNC_3(VAR_5->sd_vfs, 0);
   FUNC_11(VAR_5, "statfs", VAR_11);
   VAR_7 = FUNC_4(VAR_5, VAR_2) * VAR_0;
  }
  else
   FUNC_9(VAR_5, "statfs", FUNC_3, VAR_9,
           &VAR_7,
        &VAR_6->gt_statfs_quantum);


  FUNC_9(VAR_5, "sync", FUNC_2, VAR_9,
       &VAR_8, &VAR_6->gt_quota_quantum);


  FUNC_10(VAR_5);

  FUNC_15();

  VAR_9 = FUNC_7(VAR_8, VAR_7);

  FUNC_8(&VAR_5->sd_quota_wait, &VAR_3, VAR_1);
  FUNC_13(&VAR_5->sd_trunc_lock);
  VAR_10 = FUNC_6(&VAR_5->sd_trunc_list);
  FUNC_14(&VAR_5->sd_trunc_lock);
  if (VAR_10 && !VAR_5->sd_statfs_force_sync)
   VAR_9 -= FUNC_12(VAR_9);
  else
   VAR_9 = 0;
  FUNC_1(&VAR_5->sd_quota_wait, &VAR_3);
 }

 return 0;
}
