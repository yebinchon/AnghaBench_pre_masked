
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct gfs2_glock {scalar_t__ gl_state; TYPE_1__ gl_lockref; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gfs2_glock*,int ) ;
 int FUNC_1 (struct gfs2_glock*) ;
 int FUNC_2 (struct gfs2_glock*,scalar_t__,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct gfs2_glock *VAR_1)
{
 FUNC_1(VAR_1);

 FUNC_3(&VAR_1->gl_lockref.lock);
 if (VAR_1->gl_state != VAR_0)
  FUNC_2(VAR_1, VAR_0, 0, 0);
 FUNC_0(VAR_1, 0);
 FUNC_4(&VAR_1->gl_lockref.lock);
}
