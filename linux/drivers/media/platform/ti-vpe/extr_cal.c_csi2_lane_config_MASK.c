
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_fwnode_bus_mipi_csi2 {int num_data_lanes; scalar_t__* lane_polarities; scalar_t__* data_lanes; scalar_t__ clock_lane; } ;
struct TYPE_3__ {struct v4l2_fwnode_bus_mipi_csi2 mipi_csi2; } ;
struct TYPE_4__ {TYPE_1__ bus; } ;
struct cal_ctx {int csi2_port; int dev; TYPE_2__ endpoint; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,struct cal_ctx*,char*,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_5(struct cal_ctx *VAR_2)
{
 u32 VAR_3 = FUNC_2(VAR_2->dev, FUNC_0(VAR_2->csi2_port));
 u32 VAR_4 = VAR_1;
 u32 VAR_5 = VAR_0;
 struct v4l2_fwnode_bus_mipi_csi2 *VAR_6 =
  &VAR_2->endpoint.bus.mipi_csi2;
 int VAR_7;

 FUNC_4(&VAR_3, VAR_6->clock_lane + 1, VAR_4);
 FUNC_4(&VAR_3, VAR_6->lane_polarities[0], VAR_5);
 for (VAR_7 = 0; VAR_7 < VAR_6->num_data_lanes; VAR_7++) {




  VAR_4 <<= 4;
  VAR_5 <<= 4;
  FUNC_4(&VAR_3, VAR_6->data_lanes[VAR_7] + 1, VAR_4);
  FUNC_4(&VAR_3, VAR_6->lane_polarities[VAR_7 + 1],
     VAR_5);
 }

 FUNC_3(VAR_2->dev, FUNC_0(VAR_2->csi2_port), VAR_3);
 FUNC_1(3, VAR_2, "CAL_CSI2_COMPLEXIO_CFG(%d) = 0x%08x\n",
  VAR_2->csi2_port, VAR_3);
}
