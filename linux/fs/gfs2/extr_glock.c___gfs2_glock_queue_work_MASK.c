
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; } ;
struct gfs2_glock {TYPE_1__ gl_lockref; int gl_work; } ;


 int FUNC_0 (struct gfs2_glock*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct gfs2_glock *VAR_1, unsigned long VAR_2) {
 if (!FUNC_1(VAR_0, &VAR_1->gl_work, VAR_2)) {






  FUNC_0(VAR_1, VAR_1->gl_lockref.count < 2);
  VAR_1->gl_lockref.count--;
 }
}
