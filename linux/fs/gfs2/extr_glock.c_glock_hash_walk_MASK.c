
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rhashtable_iter {int dummy; } ;
struct gfs2_sbd {int dummy; } ;
struct TYPE_2__ {struct gfs2_sbd const* ln_sbd; } ;
struct gfs2_glock {int gl_lockref; TYPE_1__ gl_name; } ;
typedef int (* glock_examiner ) (struct gfs2_glock*) ;


 int VAR_0 ;
 struct gfs2_glock* FUNC_0 (int ) ;
 int FUNC_1 (struct gfs2_glock*) ;
 int FUNC_2 () ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,struct rhashtable_iter*) ;
 int FUNC_5 (struct rhashtable_iter*) ;
 struct gfs2_glock* FUNC_6 (struct rhashtable_iter*) ;
 int FUNC_7 (struct rhashtable_iter*) ;
 int FUNC_8 (struct rhashtable_iter*) ;

__attribute__((used)) static void FUNC_9(glock_examiner VAR_2, const struct gfs2_sbd *VAR_3)
{
 struct gfs2_glock *VAR_4;
 struct rhashtable_iter VAR_5;

 FUNC_4(&VAR_1, &VAR_5);

 do {
  FUNC_7(&VAR_5);

  while ((VAR_4 = FUNC_6(&VAR_5)) && !FUNC_1(VAR_4))
   if (VAR_4->gl_name.ln_sbd == VAR_3 &&
       FUNC_3(&VAR_4->gl_lockref))
    VAR_2(VAR_4);

  FUNC_8(&VAR_5);
 } while (FUNC_2(), VAR_4 == FUNC_0(-VAR_0));

 FUNC_5(&VAR_5);
}
