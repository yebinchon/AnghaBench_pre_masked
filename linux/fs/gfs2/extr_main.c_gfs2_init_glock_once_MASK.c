
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct gfs2_glock {int gl_revokes; int gl_ail_count; int gl_ail_list; int gl_lru; int gl_holders; TYPE_1__ gl_lockref; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct gfs2_glock *VAR_1 = VAR_0;

 FUNC_2(&VAR_1->gl_lockref.lock);
 FUNC_0(&VAR_1->gl_holders);
 FUNC_0(&VAR_1->gl_lru);
 FUNC_0(&VAR_1->gl_ail_list);
 FUNC_1(&VAR_1->gl_ail_count, 0);
 FUNC_1(&VAR_1->gl_revokes, 0);
}
