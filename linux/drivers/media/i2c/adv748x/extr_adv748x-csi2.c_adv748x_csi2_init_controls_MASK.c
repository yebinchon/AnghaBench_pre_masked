
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int error; } ;
struct TYPE_6__ {TYPE_2__* ctrl_handler; } ;
struct adv748x_csi2 {TYPE_2__ ctrl_hdl; TYPE_1__ sd; int pixel_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int *,int ,int,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct adv748x_csi2 *VAR_3)
{

 FUNC_1(&VAR_3->ctrl_hdl, 1);

 VAR_3->pixel_rate = FUNC_3(&VAR_3->ctrl_hdl,
        &VAR_2,
        VAR_1, 1, VAR_0,
        1, 1);

 VAR_3->sd.ctrl_handler = &VAR_3->ctrl_hdl;
 if (VAR_3->ctrl_hdl.error) {
  FUNC_0(&VAR_3->ctrl_hdl);
  return VAR_3->ctrl_hdl.error;
 }

 return FUNC_2(&VAR_3->ctrl_hdl);
}
