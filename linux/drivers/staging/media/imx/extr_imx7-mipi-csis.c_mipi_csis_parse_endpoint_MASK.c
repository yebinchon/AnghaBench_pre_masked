
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_3__ {int flags; int num_data_lanes; } ;
struct TYPE_4__ {TYPE_1__ mipi_csi2; } ;
struct v4l2_fwnode_endpoint {scalar_t__ bus_type; TYPE_2__ bus; } ;
struct v4l2_async_subdev {int dummy; } ;
struct device {int dummy; } ;
struct csi_state {TYPE_1__ bus; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct device*,char*) ;
 struct v4l2_subdev* FUNC_2 (struct device*) ;
 struct csi_state* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2,
        struct v4l2_fwnode_endpoint *VAR_3,
        struct v4l2_async_subdev *VAR_4)
{
 struct v4l2_subdev *VAR_5 = FUNC_2(VAR_2);
 struct csi_state *VAR_6 = FUNC_3(VAR_5);

 if (VAR_3->bus_type != VAR_1) {
  FUNC_1(VAR_2, "invalid bus type, must be MIPI CSI2\n");
  return -VAR_0;
 }

 VAR_6->bus = VAR_3->bus.mipi_csi2;

 FUNC_0(VAR_6->dev, "data lanes: %d\n", VAR_6->bus.num_data_lanes);
 FUNC_0(VAR_6->dev, "flags: 0x%08x\n", VAR_6->bus.flags);

 return 0;
}
