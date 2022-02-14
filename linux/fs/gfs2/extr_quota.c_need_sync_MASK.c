
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gfs2_tune {unsigned int gt_quota_scale_num; unsigned int gt_quota_scale_den; int gt_spin; } ;
struct gfs2_sbd {struct gfs2_tune sd_tune; } ;
struct TYPE_6__ {int qb_limit; int qb_value; } ;
struct gfs2_quota_data {scalar_t__ qd_change; TYPE_3__ qd_qb; TYPE_2__* qd_gl; } ;
typedef scalar_t__ s64 ;
struct TYPE_4__ {struct gfs2_sbd* ln_sbd; } ;
struct TYPE_5__ {TYPE_1__ gl_name; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,unsigned int) ;
 unsigned int FUNC_2 (struct gfs2_sbd*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct gfs2_quota_data *VAR_1)
{
 struct gfs2_sbd *VAR_2 = VAR_1->qd_gl->gl_name.ln_sbd;
 struct gfs2_tune *VAR_3 = &VAR_2->sd_tune;
 s64 VAR_4;
 unsigned int VAR_5, VAR_6;
 int VAR_7 = 1;

 if (!VAR_1->qd_qb.qb_limit)
  return 0;

 FUNC_3(&VAR_0);
 VAR_4 = VAR_1->qd_change;
 FUNC_4(&VAR_0);

 FUNC_3(&VAR_3->gt_spin);
 VAR_5 = VAR_3->gt_quota_scale_num;
 VAR_6 = VAR_3->gt_quota_scale_den;
 FUNC_4(&VAR_3->gt_spin);

 if (VAR_4 < 0)
  VAR_7 = 0;
 else if ((s64)FUNC_0(VAR_1->qd_qb.qb_value) >=
   (s64)FUNC_0(VAR_1->qd_qb.qb_limit))
  VAR_7 = 0;
 else {
  VAR_4 *= FUNC_2(VAR_2) * VAR_5;
  VAR_4 = FUNC_1(VAR_4, VAR_6);
  VAR_4 += (s64)FUNC_0(VAR_1->qd_qb.qb_value);
  if (VAR_4 < (s64)FUNC_0(VAR_1->qd_qb.qb_limit))
   VAR_7 = 0;
 }

 return VAR_7;
}
