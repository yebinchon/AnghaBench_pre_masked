
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {int ln_sbd; } ;
struct gfs2_glock {TYPE_2__ gl_lockref; int * gl_object; TYPE_1__ gl_name; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,struct gfs2_glock*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct gfs2_glock *VAR_0, void *VAR_1)
{
 FUNC_2(&VAR_0->gl_lockref.lock);
 if (FUNC_0(VAR_0->gl_name.ln_sbd, VAR_0->gl_object == ((void*)0)))
  FUNC_1(((void*)0), VAR_0, 1);
 VAR_0->gl_object = VAR_1;
 FUNC_3(&VAR_0->gl_lockref.lock);
}
