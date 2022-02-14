
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


struct TYPE_9__ {unsigned int num_data_lanes; int * lane_polarities; int * data_lanes; int clock_lane; } ;
struct TYPE_10__ {TYPE_2__ mipi_csi2; } ;
struct v4l2_fwnode_endpoint {TYPE_3__ bus; } ;
struct TYPE_8__ {int pos; int pol; } ;
struct TYPE_12__ {TYPE_4__* data; TYPE_1__ clk; } ;
struct TYPE_13__ {unsigned int num_data_lanes; int crc; TYPE_5__ lanecfg; } ;
struct TYPE_14__ {TYPE_6__ csi2; } ;
struct isp_bus_cfg {TYPE_7__ bus; } ;
struct device {int dummy; } ;
struct TYPE_11__ {int pos; int pol; } ;


 int FUNC_0 (struct device*,char*,unsigned int,int ,...) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_0,
           struct v4l2_fwnode_endpoint *VAR_1,
           struct isp_bus_cfg *VAR_2)
{
 unsigned int VAR_3;

 VAR_2->bus.csi2.lanecfg.clk.pos = VAR_1->bus.mipi_csi2.clock_lane;
 VAR_2->bus.csi2.lanecfg.clk.pol =
  VAR_1->bus.mipi_csi2.lane_polarities[0];
 FUNC_0(VAR_0, "clock lane polarity %u, pos %u\n",
  VAR_2->bus.csi2.lanecfg.clk.pol,
  VAR_2->bus.csi2.lanecfg.clk.pos);

 VAR_2->bus.csi2.num_data_lanes = VAR_1->bus.mipi_csi2.num_data_lanes;

 for (VAR_3 = 0; VAR_3 < VAR_2->bus.csi2.num_data_lanes; VAR_3++) {
  VAR_2->bus.csi2.lanecfg.data[VAR_3].pos =
   VAR_1->bus.mipi_csi2.data_lanes[VAR_3];
  VAR_2->bus.csi2.lanecfg.data[VAR_3].pol =
   VAR_1->bus.mipi_csi2.lane_polarities[VAR_3 + 1];
  FUNC_0(VAR_0,
   "data lane %u polarity %u, pos %u\n", VAR_3,
   VAR_2->bus.csi2.lanecfg.data[VAR_3].pol,
   VAR_2->bus.csi2.lanecfg.data[VAR_3].pos);
 }




 VAR_2->bus.csi2.crc = 1;
}
