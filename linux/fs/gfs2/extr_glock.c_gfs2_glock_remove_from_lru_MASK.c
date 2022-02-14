
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_glock {int gl_flags; int gl_lru; TYPE_1__* gl_ops; } ;
struct TYPE_2__ {int go_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct gfs2_glock *VAR_4)
{
 if (!(VAR_4->gl_ops->go_flags & VAR_1))
  return;

 FUNC_3(&VAR_3);
 if (FUNC_5(VAR_0, &VAR_4->gl_flags)) {
  FUNC_2(&VAR_4->gl_lru);
  FUNC_0(&VAR_2);
  FUNC_1(VAR_0, &VAR_4->gl_flags);
 }
 FUNC_4(&VAR_3);
}
