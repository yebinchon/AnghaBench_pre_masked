
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_bufdata {int bd_bh; TYPE_1__* bd_gl; int bd_ail_gl_list; int bd_ail_st_list; int * bd_tr; } ;
struct TYPE_2__ {int gl_ail_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct gfs2_bufdata *VAR_0)
{
 VAR_0->bd_tr = ((void*)0);
 FUNC_2(&VAR_0->bd_ail_st_list);
 FUNC_2(&VAR_0->bd_ail_gl_list);
 FUNC_0(&VAR_0->bd_gl->gl_ail_count);
 FUNC_1(VAR_0->bd_bh);
}
