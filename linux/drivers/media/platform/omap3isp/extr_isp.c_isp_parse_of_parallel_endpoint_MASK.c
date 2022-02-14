
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; int data_shift; } ;
struct TYPE_6__ {TYPE_1__ parallel; } ;
struct v4l2_fwnode_endpoint {scalar_t__ bus_type; TYPE_2__ bus; } ;
struct TYPE_7__ {int clk_pol; int hs_pol; int vs_pol; int fld_pol; int data_pol; int bt656; int data_lane_shift; } ;
struct TYPE_8__ {TYPE_3__ parallel; } ;
struct isp_bus_cfg {TYPE_4__ bus; int interface; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_0(struct device *VAR_7,
        struct v4l2_fwnode_endpoint *VAR_8,
        struct isp_bus_cfg *VAR_9)
{
 VAR_9->interface = VAR_0;
 VAR_9->bus.parallel.data_lane_shift = VAR_8->bus.parallel.data_shift;
 VAR_9->bus.parallel.clk_pol =
  !!(VAR_8->bus.parallel.flags & VAR_5);
 VAR_9->bus.parallel.hs_pol =
  !!(VAR_8->bus.parallel.flags & VAR_6);
 VAR_9->bus.parallel.vs_pol =
  !!(VAR_8->bus.parallel.flags & VAR_4);
 VAR_9->bus.parallel.fld_pol =
  !!(VAR_8->bus.parallel.flags & VAR_3);
 VAR_9->bus.parallel.data_pol =
  !!(VAR_8->bus.parallel.flags & VAR_2);
 VAR_9->bus.parallel.bt656 = VAR_8->bus_type == VAR_1;
}
