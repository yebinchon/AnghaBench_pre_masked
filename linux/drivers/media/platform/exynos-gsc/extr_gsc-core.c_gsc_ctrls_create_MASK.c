
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int error; } ;
struct TYPE_5__ {void* global_alpha; void* vflip; void* hflip; void* rotate; } ;
struct gsc_ctx {int ctrls_rdy; TYPE_2__ ctrl_handler; TYPE_1__ gsc_ctrls; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 void* FUNC_3 (TYPE_2__*,int *,int ,int ,int,int,int ) ;

int FUNC_4(struct gsc_ctx *VAR_6)
{
 if (VAR_6->ctrls_rdy) {
  FUNC_0("Control handler of this context was created already");
  return 0;
 }

 FUNC_2(&VAR_6->ctrl_handler, VAR_0);

 VAR_6->gsc_ctrls.rotate = FUNC_3(&VAR_6->ctrl_handler,
    &VAR_5, VAR_3, 0, 270, 90, 0);
 VAR_6->gsc_ctrls.hflip = FUNC_3(&VAR_6->ctrl_handler,
    &VAR_5, VAR_2, 0, 1, 1, 0);
 VAR_6->gsc_ctrls.vflip = FUNC_3(&VAR_6->ctrl_handler,
    &VAR_5, VAR_4, 0, 1, 1, 0);
 VAR_6->gsc_ctrls.global_alpha = FUNC_3(&VAR_6->ctrl_handler,
   &VAR_5, VAR_1, 0, 255, 1, 0);

 VAR_6->ctrls_rdy = VAR_6->ctrl_handler.error == 0;

 if (VAR_6->ctrl_handler.error) {
  int VAR_7 = VAR_6->ctrl_handler.error;
  FUNC_1(&VAR_6->ctrl_handler);
  FUNC_0("Failed to create G-Scaler control handlers");
  return VAR_7;
 }

 return 0;
}
