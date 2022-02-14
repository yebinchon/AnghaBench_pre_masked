
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfad_s {TYPE_1__* im; int bfad_lock; int bfad_flags; int bfa_fcs; int bfa; } ;
struct TYPE_2__ {int drv_workq; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void
FUNC_6(struct bfad_s *VAR_1)
{
 unsigned long VAR_2;

 FUNC_4(&VAR_1->bfad_lock, VAR_2);
 FUNC_2(&VAR_1->bfa);
 FUNC_1(&VAR_1->bfa_fcs);
 FUNC_0(&VAR_1->bfa_fcs);
 VAR_1->bfad_flags |= VAR_0;
 FUNC_5(&VAR_1->bfad_lock, VAR_2);

 if (VAR_1->im)
  FUNC_3(VAR_1->im->drv_workq);
}
