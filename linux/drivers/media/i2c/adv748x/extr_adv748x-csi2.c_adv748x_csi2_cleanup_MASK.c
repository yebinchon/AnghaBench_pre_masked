
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int entity; } ;
struct adv748x_csi2 {int ctrl_hdl; TYPE_1__ sd; } ;


 int FUNC_0 (struct adv748x_csi2*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct adv748x_csi2 *VAR_0)
{
 if (!FUNC_0(VAR_0))
  return;

 FUNC_2(&VAR_0->sd);
 FUNC_1(&VAR_0->sd.entity);
 FUNC_3(&VAR_0->ctrl_hdl);
}
