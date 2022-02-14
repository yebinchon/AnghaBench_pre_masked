
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gfs2_sbd {int dummy; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct gfs2_quota_data {TYPE_3__ qd_id; TYPE_2__* qd_gl; } ;
struct TYPE_4__ {struct gfs2_sbd* ln_sbd; } ;
struct TYPE_5__ {TYPE_1__ gl_name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_3__) ;
 int FUNC_1 (struct gfs2_sbd*,char*,char*,char*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct gfs2_quota_data *VAR_2, char *VAR_3)
{
 struct gfs2_sbd *VAR_4 = VAR_2->qd_gl->gl_name.ln_sbd;

 FUNC_1(VAR_4, "quota %s for %s %u\n",
  VAR_3,
  (VAR_2->qd_id.type == VAR_0) ? "user" : "group",
  FUNC_0(&VAR_1, VAR_2->qd_id));

 return 0;
}
