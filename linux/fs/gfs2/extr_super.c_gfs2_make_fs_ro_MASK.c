
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_sbd {TYPE_1__* sd_jdesc; int sd_log_blks_free; int sd_reserving_log; int sd_reserving_log_wait; int sd_vfs; int * sd_logd_process; int * sd_quotad_process; int sd_flags; int sd_freeze_gl; } ;
struct gfs2_holder {int dummy; } ;
struct TYPE_2__ {scalar_t__ jd_blocks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct gfs2_sbd*,int) ;
 int VAR_5 ;
 int FUNC_3 (struct gfs2_holder*) ;
 int FUNC_4 (int ,int ,int ,struct gfs2_holder*) ;
 scalar_t__ FUNC_5 (struct gfs2_holder*) ;
 int FUNC_6 (struct gfs2_sbd*,int *,int) ;
 int FUNC_7 (struct gfs2_sbd*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int) ;

int FUNC_13(struct gfs2_sbd *VAR_6)
{
 struct gfs2_holder VAR_7;
 int VAR_8;

 VAR_8 = FUNC_4(VAR_6->sd_freeze_gl, VAR_3, VAR_2,
       &VAR_7);
 if (VAR_8 && !FUNC_11(VAR_4, &VAR_6->sd_flags))
  return VAR_8;

 FUNC_1(VAR_5);
 if (VAR_6->sd_quotad_process)
  FUNC_10(VAR_6->sd_quotad_process);
 VAR_6->sd_quotad_process = ((void*)0);
 if (VAR_6->sd_logd_process)
  FUNC_10(VAR_6->sd_logd_process);
 VAR_6->sd_logd_process = ((void*)0);

 FUNC_8(VAR_6->sd_vfs, 0);
 FUNC_9(VAR_6->sd_vfs, 0);

 FUNC_6(VAR_6, ((void*)0), VAR_1 |
         VAR_0);
 FUNC_12(VAR_6->sd_reserving_log_wait, FUNC_0(&VAR_6->sd_reserving_log) == 0);
 FUNC_2(VAR_6, FUNC_0(&VAR_6->sd_log_blks_free) == VAR_6->sd_jdesc->jd_blocks);

 if (FUNC_5(&VAR_7))
  FUNC_3(&VAR_7);

 FUNC_7(VAR_6);

 return VAR_8;
}
