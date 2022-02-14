
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_rgrpd {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct gfs2_glock {TYPE_1__ gl_lockref; struct gfs2_rgrpd* gl_object; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

struct gfs2_rgrpd *FUNC_2(struct gfs2_glock *VAR_0)
{
 struct gfs2_rgrpd *VAR_1;

 FUNC_0(&VAR_0->gl_lockref.lock);
 VAR_1 = VAR_0->gl_object;
 FUNC_1(&VAR_0->gl_lockref.lock);

 return VAR_1;
}
