
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pag; int agno; } ;
struct xfs_scrub {TYPE_1__ sa; int tp; int mp; } ;
struct xfs_alloc_arg {int alignment; int pag; int agno; int tp; int mp; int member_0; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_alloc_arg*,int ) ;

int
FUNC_1(
 struct xfs_scrub *VAR_1,
 bool VAR_2)
{
 struct xfs_alloc_arg VAR_3 = {0};

 VAR_3.mp = VAR_1->mp;
 VAR_3.tp = VAR_1->tp;
 VAR_3.agno = VAR_1->sa.agno;
 VAR_3.alignment = 1;
 VAR_3.pag = VAR_1->sa.pag;

 return FUNC_0(&VAR_3,
   VAR_2 ? 0 : VAR_0);
}
