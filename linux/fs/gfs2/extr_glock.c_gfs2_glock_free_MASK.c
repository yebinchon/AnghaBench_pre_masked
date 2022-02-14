
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_sbd {int sd_glock_wait; int sd_glock_disposal; } ;
struct TYPE_2__ {struct gfs2_sbd* ln_sbd; } ;
struct gfs2_glock {int gl_rcu; int gl_node; int gl_revokes; TYPE_1__ gl_name; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct gfs2_glock*) ;

void FUNC_8(struct gfs2_glock *VAR_3)
{
 struct gfs2_sbd *VAR_4 = VAR_3->gl_name.ln_sbd;

 FUNC_0(FUNC_2(&VAR_3->gl_revokes));
 FUNC_4(&VAR_1, &VAR_3->gl_node, VAR_2);
 FUNC_5();
 FUNC_7(VAR_3);
 FUNC_3(&VAR_3->gl_rcu, VAR_0);
 if (FUNC_1(&VAR_4->sd_glock_disposal))
  FUNC_6(&VAR_4->sd_glock_wait);
}
