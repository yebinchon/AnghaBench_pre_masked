
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct v4l2_fwnode_bus_mipi_csi2 {unsigned int num_data_lanes; int * lane_polarities; int * data_lanes; int clock_lane; } ;
struct TYPE_12__ {struct v4l2_fwnode_bus_mipi_csi2 mipi_csi2; } ;
struct TYPE_11__ {int port; } ;
struct TYPE_9__ {int member_0; } ;
struct v4l2_fwnode_endpoint {TYPE_5__ bus; TYPE_4__ base; TYPE_2__ member_0; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_13__ {int pol; int pos; } ;
struct csiphy_lanes_cfg {unsigned int num_data; TYPE_7__* data; TYPE_6__ clk; } ;
struct TYPE_8__ {struct csiphy_lanes_cfg lane_cfg; } ;
struct TYPE_10__ {int csiphy_id; TYPE_1__ csi2; } ;
struct camss_async_subdev {TYPE_3__ interface; } ;
struct TYPE_14__ {int pol; int pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__* FUNC_0 (struct device*,unsigned int,int,int ) ;
 int FUNC_1 (struct device_node*) ;
 int FUNC_2 (int ,struct v4l2_fwnode_endpoint*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2,
     struct device_node *VAR_3,
     struct camss_async_subdev *VAR_4)
{
 struct csiphy_lanes_cfg *VAR_5 = &VAR_4->interface.csi2.lane_cfg;
 struct v4l2_fwnode_bus_mipi_csi2 *VAR_6;
 struct v4l2_fwnode_endpoint VAR_7 = { { 0 } };
 unsigned int VAR_8;

 FUNC_2(FUNC_1(VAR_3), &VAR_7);

 VAR_4->interface.csiphy_id = VAR_7.base.port;

 VAR_6 = &VAR_7.bus.mipi_csi2;
 VAR_5->clk.pos = VAR_6->clock_lane;
 VAR_5->clk.pol = VAR_6->lane_polarities[0];
 VAR_5->num_data = VAR_6->num_data_lanes;

 VAR_5->data = FUNC_0(VAR_2,
       VAR_5->num_data, sizeof(*VAR_5->data),
       VAR_1);
 if (!VAR_5->data)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_5->num_data; VAR_8++) {
  VAR_5->data[VAR_8].pos = VAR_6->data_lanes[VAR_8];
  VAR_5->data[VAR_8].pol = VAR_6->lane_polarities[VAR_8 + 1];
 }

 return 0;
}
