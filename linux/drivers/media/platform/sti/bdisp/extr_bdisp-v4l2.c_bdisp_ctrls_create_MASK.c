
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int error; } ;
struct TYPE_5__ {void* vflip; void* hflip; } ;
struct bdisp_ctx {int ctrls_rdy; TYPE_2__ ctrl_handler; TYPE_1__ bdisp_ctrls; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 void* FUNC_2 (TYPE_2__*,int *,int ,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct bdisp_ctx *VAR_4)
{
 if (VAR_4->ctrls_rdy)
  return 0;

 FUNC_1(&VAR_4->ctrl_handler, VAR_0);

 VAR_4->bdisp_ctrls.hflip = FUNC_2(&VAR_4->ctrl_handler,
    &VAR_3, VAR_1, 0, 1, 1, 0);
 VAR_4->bdisp_ctrls.vflip = FUNC_2(&VAR_4->ctrl_handler,
    &VAR_3, VAR_2, 0, 1, 1, 0);

 if (VAR_4->ctrl_handler.error) {
  int VAR_5 = VAR_4->ctrl_handler.error;

  FUNC_0(&VAR_4->ctrl_handler);
  return VAR_5;
 }

 VAR_4->ctrls_rdy = 1;

 return 0;
}
