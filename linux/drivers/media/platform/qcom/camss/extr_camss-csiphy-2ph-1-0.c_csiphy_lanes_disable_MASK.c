
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int pos; } ;
struct csiphy_lanes_cfg {int num_data; TYPE_2__* data; TYPE_1__ clk; } ;
struct csiphy_device {scalar_t__ base; } ;
struct csiphy_config {TYPE_3__* csi2; } ;
struct TYPE_6__ {struct csiphy_lanes_cfg lane_cfg; } ;
struct TYPE_5__ {int pos; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct csiphy_device *VAR_1,
     struct csiphy_config *VAR_2)
{
 struct csiphy_lanes_cfg *VAR_3 = &VAR_2->csi2->lane_cfg;
 u8 VAR_4 = 0;
 int VAR_5 = 0;

 for (VAR_5 = 0; VAR_5 <= VAR_3->num_data; VAR_5++) {
  if (VAR_5 == VAR_3->num_data)
   VAR_4 = VAR_3->clk.pos;
  else
   VAR_4 = VAR_3->data[VAR_5].pos;

  FUNC_1(0x0, VAR_1->base +
          FUNC_0(VAR_4));
 }

 FUNC_1(0x0, VAR_1->base + VAR_0);
}
