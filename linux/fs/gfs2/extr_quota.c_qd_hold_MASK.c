
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gfs2_sbd {int dummy; } ;
struct gfs2_quota_data {int qd_lockref; TYPE_2__* qd_gl; } ;
struct TYPE_3__ {struct gfs2_sbd* ln_sbd; } ;
struct TYPE_4__ {TYPE_1__ gl_name; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct gfs2_sbd*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct gfs2_quota_data *VAR_0)
{
 struct gfs2_sbd *VAR_1 = VAR_0->qd_gl->gl_name.ln_sbd;
 FUNC_1(VAR_1, !FUNC_0(&VAR_0->qd_lockref));
 FUNC_2(&VAR_0->qd_lockref);
}
