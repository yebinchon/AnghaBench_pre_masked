
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ctrl_handler; } ;
struct TYPE_3__ {int nmodes; int * cam_mode; } ;
struct gspca_dev {int curr_mode; TYPE_2__ vdev; TYPE_1__ cam; int pixfmt; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0)
{
 int VAR_1;

 VAR_1 = VAR_0->cam.nmodes - 1;
 VAR_0->curr_mode = VAR_1;
 VAR_0->pixfmt = VAR_0->cam.cam_mode[VAR_1];


 FUNC_0(VAR_0->vdev.ctrl_handler);
}
