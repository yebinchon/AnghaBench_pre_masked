
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gfs2_sbd {int * sd_logd_process; int * sd_quotad_process; int sd_flags; scalar_t__ sd_log_sequence; TYPE_2__* sd_jdesc; int sd_freeze_gl; } ;
struct gfs2_log_header_host {int lh_flags; int lh_blkno; scalar_t__ lh_sequence; } ;
struct gfs2_inode {struct gfs2_glock* i_gl; } ;
struct gfs2_holder {int gh_flags; } ;
struct gfs2_glock {TYPE_1__* gl_ops; } ;
struct TYPE_4__ {int jd_inode; } ;
struct TYPE_3__ {int (* go_inval ) (struct gfs2_glock*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct gfs2_inode* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct gfs2_sbd*) ;
 int FUNC_2 (TYPE_2__*,struct gfs2_log_header_host*,int) ;
 int FUNC_3 (struct gfs2_holder*) ;
 int FUNC_4 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_5 (struct gfs2_sbd*,int ) ;
 int FUNC_6 (struct gfs2_sbd*) ;
 int FUNC_7 (struct gfs2_sbd*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (struct gfs2_glock*,int ) ;

int FUNC_11(struct gfs2_sbd *VAR_6)
{
 struct gfs2_inode *VAR_7 = FUNC_0(VAR_6->sd_jdesc->jd_inode);
 struct gfs2_glock *VAR_8 = VAR_7->i_gl;
 struct gfs2_holder VAR_9;
 struct gfs2_log_header_host VAR_10;
 int VAR_11;

 VAR_11 = FUNC_7(VAR_6);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_4(VAR_6->sd_freeze_gl, VAR_4, 0,
       &VAR_9);
 if (VAR_11)
  goto fail_threads;

 VAR_8->gl_ops->go_inval(VAR_8, VAR_0);

 VAR_11 = FUNC_2(VAR_6->sd_jdesc, &VAR_10, 0);
 if (VAR_11)
  goto fail;

 if (!(VAR_10.lh_flags & VAR_2)) {
  FUNC_1(VAR_6);
  VAR_11 = -VAR_1;
  goto fail;
 }


 VAR_6->sd_log_sequence = VAR_10.lh_sequence + 1;
 FUNC_5(VAR_6, VAR_10.lh_blkno);

 VAR_11 = FUNC_6(VAR_6);
 if (VAR_11)
  goto fail;

 FUNC_9(VAR_5, &VAR_6->sd_flags);

 FUNC_3(&VAR_9);

 return 0;

fail:
 VAR_9.gh_flags |= VAR_3;
 FUNC_3(&VAR_9);
fail_threads:
 if (VAR_6->sd_quotad_process)
  FUNC_8(VAR_6->sd_quotad_process);
 VAR_6->sd_quotad_process = ((void*)0);
 if (VAR_6->sd_logd_process)
  FUNC_8(VAR_6->sd_logd_process);
 VAR_6->sd_logd_process = ((void*)0);
 return VAR_11;
}
