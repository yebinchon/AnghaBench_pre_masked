
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


struct TYPE_11__ {int strobe; int clock_inv; int * lane_polarity; int data_lane; int clock_lane; } ;
struct TYPE_12__ {TYPE_4__ mipi_csi1; } ;
struct v4l2_fwnode_endpoint {scalar_t__ bus_type; TYPE_5__ bus; } ;
struct TYPE_8__ {int pos; int pol; } ;
struct TYPE_10__ {TYPE_2__* data; TYPE_1__ clk; } ;
struct TYPE_13__ {int ccp2_mode; int vp_clk_pol; int crc; int phy_layer; int strobe_clk_pol; TYPE_3__ lanecfg; } ;
struct TYPE_14__ {TYPE_6__ ccp2; } ;
struct isp_bus_cfg {TYPE_7__ bus; } ;
struct device {int dummy; } ;
struct TYPE_9__ {int pos; int pol; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_1,
           struct v4l2_fwnode_endpoint *VAR_2,
           struct isp_bus_cfg *VAR_3)
{
 VAR_3->bus.ccp2.lanecfg.clk.pos = VAR_2->bus.mipi_csi1.clock_lane;
 VAR_3->bus.ccp2.lanecfg.clk.pol = VAR_2->bus.mipi_csi1.lane_polarity[0];
 FUNC_0(VAR_1, "clock lane polarity %u, pos %u\n",
  VAR_3->bus.ccp2.lanecfg.clk.pol,
 VAR_3->bus.ccp2.lanecfg.clk.pos);

 VAR_3->bus.ccp2.lanecfg.data[0].pos = VAR_2->bus.mipi_csi1.data_lane;
 VAR_3->bus.ccp2.lanecfg.data[0].pol =
  VAR_2->bus.mipi_csi1.lane_polarity[1];

 FUNC_0(VAR_1, "data lane polarity %u, pos %u\n",
  VAR_3->bus.ccp2.lanecfg.data[0].pol,
  VAR_3->bus.ccp2.lanecfg.data[0].pos);

 VAR_3->bus.ccp2.strobe_clk_pol = VAR_2->bus.mipi_csi1.clock_inv;
 VAR_3->bus.ccp2.phy_layer = VAR_2->bus.mipi_csi1.strobe;
 VAR_3->bus.ccp2.ccp2_mode = VAR_2->bus_type == VAR_0;
 VAR_3->bus.ccp2.vp_clk_pol = 1;

 VAR_3->bus.ccp2.crc = 1;
}
