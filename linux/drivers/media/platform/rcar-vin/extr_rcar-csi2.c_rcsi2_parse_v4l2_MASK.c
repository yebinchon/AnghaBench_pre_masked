
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int num_data_lanes; unsigned int* data_lanes; } ;
struct TYPE_6__ {TYPE_2__ mipi_csi2; } ;
struct TYPE_4__ {scalar_t__ id; scalar_t__ port; } ;
struct v4l2_fwnode_endpoint {scalar_t__ bus_type; TYPE_3__ bus; TYPE_1__ base; } ;
struct rcar_csi2 {int lanes; unsigned int* lane_swap; int dev; } ;


 unsigned int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static int FUNC_2(struct rcar_csi2 *VAR_3,
       struct v4l2_fwnode_endpoint *VAR_4)
{
 unsigned int VAR_5;


 if (VAR_4->base.port || VAR_4->base.id)
  return -VAR_1;

 if (VAR_4->bus_type != VAR_2) {
  FUNC_1(VAR_3->dev, "Unsupported bus: %u\n", VAR_4->bus_type);
  return -VAR_0;
 }

 VAR_3->lanes = VAR_4->bus.mipi_csi2.num_data_lanes;
 if (VAR_3->lanes != 1 && VAR_3->lanes != 2 && VAR_3->lanes != 4) {
  FUNC_1(VAR_3->dev, "Unsupported number of data-lanes: %u\n",
   VAR_3->lanes);
  return -VAR_0;
 }

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3->lane_swap); VAR_5++) {
  VAR_3->lane_swap[VAR_5] = VAR_5 < VAR_3->lanes ?
   VAR_4->bus.mipi_csi2.data_lanes[VAR_5] : VAR_5;


  if (VAR_3->lane_swap[VAR_5] < 1 || VAR_3->lane_swap[VAR_5] > 4) {
   FUNC_1(VAR_3->dev, "data-lanes must be in 1-4 range\n");
   return -VAR_0;
  }
 }

 return 0;
}
