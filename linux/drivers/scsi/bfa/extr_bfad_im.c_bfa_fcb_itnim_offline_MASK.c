
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct bfad_s {TYPE_1__ pport; } ;
struct bfad_port_s {int flags; int im_port; struct bfad_s* bfad; } ;
struct bfad_itnim_s {int queue_work; int itnim_work; int state; int im_port; int fcs_itnim; struct bfad_im_s* im; } ;
struct bfad_im_s {int drv_workq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bfad_port_s* FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

void
FUNC_2(struct bfad_itnim_s *VAR_3)
{
 struct bfad_port_s *VAR_4;
 struct bfad_s *VAR_5;
 struct bfad_im_s *VAR_6 = VAR_3->im;

 VAR_4 = FUNC_0(&VAR_3->fcs_itnim);
 VAR_5 = VAR_4->bfad;
 if ((VAR_5->pport.flags & VAR_0) ||
   (VAR_4->flags & VAR_0)) {
  VAR_3->state = VAR_1;
  return;
 }
 VAR_3->im_port = VAR_4->im_port;
 VAR_3->state = VAR_2;
 VAR_3->queue_work = 1;


 if (VAR_3->queue_work)
  FUNC_1(VAR_6->drv_workq, &VAR_3->itnim_work);
}
