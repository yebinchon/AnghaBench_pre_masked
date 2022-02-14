
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfad_s {TYPE_1__* im; } ;
struct bfad_im_port_s {int flags; int bfad; } ;
struct TYPE_2__ {int drv_workq; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfad_im_port_s*) ;
 int FUNC_1 (int ,struct bfad_im_port_s*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bfad_im_port_s*) ;

void
FUNC_4(struct bfad_s *VAR_1, struct bfad_im_port_s *VAR_2)
{
 if (!(VAR_2->flags & VAR_0))
  FUNC_2(VAR_1->im->drv_workq);
 FUNC_1(VAR_2->bfad, VAR_2);
 FUNC_0(VAR_2);
 FUNC_3(VAR_2);
}
