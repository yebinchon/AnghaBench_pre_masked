
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ixgbe_adapter {scalar_t__ vf_rate_link_speed; int num_vfs; TYPE_1__* vfinfo; TYPE_2__* pdev; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ tx_rate; } ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct ixgbe_adapter*) ;
 int FUNC_2 (struct ixgbe_adapter*,int) ;

void FUNC_3(struct ixgbe_adapter *VAR_0)
{
 int VAR_1;


 if (!VAR_0->vf_rate_link_speed)
  return;

 if (FUNC_1(VAR_0) != VAR_0->vf_rate_link_speed) {
  VAR_0->vf_rate_link_speed = 0;
  FUNC_0(&VAR_0->pdev->dev,
    "Link speed has been changed. VF Transmit rate is disabled\n");
 }

 for (VAR_1 = 0; VAR_1 < VAR_0->num_vfs; VAR_1++) {
  if (!VAR_0->vf_rate_link_speed)
   VAR_0->vfinfo[VAR_1].tx_rate = 0;

  FUNC_2(VAR_0, VAR_1);
 }
}
