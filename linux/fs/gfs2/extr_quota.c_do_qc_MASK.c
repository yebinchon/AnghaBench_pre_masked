
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gfs2_sbd {int sd_quota_mutex; int sd_qc_inode; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct gfs2_quota_data {int qd_flags; scalar_t__ qd_change; TYPE_3__ qd_id; int qd_bh; struct gfs2_quota_change* qd_bh_qc; TYPE_2__* qd_gl; } ;
struct gfs2_quota_change {void* qc_id; void* qc_flags; scalar_t__ qc_change; } ;
struct gfs2_inode {int i_gl; } ;
typedef scalar_t__ s64 ;
struct TYPE_4__ {struct gfs2_sbd* ln_sbd; } ;
struct TYPE_5__ {TYPE_1__ gl_name; } ;


 struct gfs2_inode* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int *) ;
 void* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,TYPE_3__) ;
 int FUNC_6 (struct gfs2_sbd*,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_4 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct gfs2_quota_data*) ;
 int VAR_5 ;
 int FUNC_11 (struct gfs2_quota_data*) ;
 int FUNC_12 (struct gfs2_quota_data*) ;
 int FUNC_13 (struct gfs2_quota_data*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (int ,int *) ;

__attribute__((used)) static void FUNC_18(struct gfs2_quota_data *VAR_6, s64 VAR_7)
{
 struct gfs2_sbd *VAR_8 = VAR_6->qd_gl->gl_name.ln_sbd;
 struct gfs2_inode *VAR_9 = FUNC_0(VAR_8->sd_qc_inode);
 struct gfs2_quota_change *VAR_10 = VAR_6->qd_bh_qc;
 s64 VAR_11;

 FUNC_8(&VAR_8->sd_quota_mutex);
 FUNC_7(VAR_9->i_gl, VAR_6->qd_bh);

 if (!FUNC_17(VAR_1, &VAR_6->qd_flags)) {
  VAR_10->qc_change = 0;
  VAR_10->qc_flags = 0;
  if (VAR_6->qd_id.type == VAR_3)
   VAR_10->qc_flags = FUNC_3(VAR_0);
  VAR_10->qc_id = FUNC_3(FUNC_5(&VAR_4, VAR_6->qd_id));
 }

 VAR_11 = FUNC_1(VAR_10->qc_change) + VAR_7;
 VAR_10->qc_change = FUNC_4(VAR_11);

 FUNC_14(&VAR_5);
 VAR_6->qd_change = VAR_11;
 FUNC_15(&VAR_5);

 if (!VAR_11) {
  FUNC_6(VAR_8, FUNC_17(VAR_1, &VAR_6->qd_flags));
  FUNC_2(VAR_1, &VAR_6->qd_flags);
  VAR_10->qc_flags = 0;
  VAR_10->qc_id = 0;
  FUNC_13(VAR_6);
  FUNC_11(VAR_6);
 } else if (!FUNC_16(VAR_1, &VAR_6->qd_flags)) {
  FUNC_10(VAR_6);
  FUNC_12(VAR_6);
 }

 if (VAR_7 < 0)
  FUNC_2(VAR_2, &VAR_6->qd_flags);
 FUNC_9(&VAR_8->sd_quota_mutex);
}
