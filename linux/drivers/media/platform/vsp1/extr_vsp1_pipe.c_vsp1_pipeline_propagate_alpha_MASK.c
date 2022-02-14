
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsp1_pipeline {int uds; TYPE_1__* uds_input; } ;
struct vsp1_dl_body {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct vsp1_dl_body*,unsigned int) ;

void FUNC_1(struct vsp1_pipeline *VAR_2,
       struct vsp1_dl_body *VAR_3, unsigned int VAR_4)
{
 if (!VAR_2->uds)
  return;





 if (VAR_2->uds_input->type == VAR_1 ||
     VAR_2->uds_input->type == VAR_0)
  VAR_4 = 255;

 FUNC_0(VAR_2->uds, VAR_3, VAR_4);
}
