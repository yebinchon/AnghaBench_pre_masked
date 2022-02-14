
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gfs2_quota_data {int qd_flags; TYPE_2__* qd_gl; } ;
struct TYPE_3__ {int ln_sbd; } ;
struct TYPE_4__ {TYPE_1__ gl_name; } ;


 int VAR_0 ;
 int FUNC_0 (struct gfs2_quota_data*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct gfs2_quota_data*) ;
 int FUNC_4 (struct gfs2_quota_data*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct gfs2_quota_data *VAR_1)
{
 FUNC_2(VAR_1->qd_gl->gl_name.ln_sbd,
    FUNC_5(VAR_0, &VAR_1->qd_flags));
 FUNC_1(VAR_0, &VAR_1->qd_flags);
 FUNC_0(VAR_1);
 FUNC_4(VAR_1);
 FUNC_3(VAR_1);
}
