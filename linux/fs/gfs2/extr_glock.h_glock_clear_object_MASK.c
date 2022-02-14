
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct gfs2_glock {void* gl_object; TYPE_1__ gl_lockref; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct gfs2_glock *VAR_0, void *VAR_1)
{
 FUNC_0(&VAR_0->gl_lockref.lock);
 if (VAR_0->gl_object == VAR_1)
  VAR_0->gl_object = ((void*)0);
 FUNC_1(&VAR_0->gl_lockref.lock);
}
