
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_5__ {int flags; int num_data_lanes; } ;
struct TYPE_4__ {TYPE_2__ mipi_csi2; } ;
struct v4l2_fwnode_endpoint {scalar_t__ bus_type; TYPE_1__ bus; } ;
struct TYPE_6__ {int fwnode; } ;
struct v4l2_async_subdev {TYPE_3__ match; } ;
struct device {int dummy; } ;
struct csi2_dev {TYPE_2__ bus; int dev; int sd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 struct v4l2_subdev* FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 struct csi2_dev* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2,
          struct v4l2_fwnode_endpoint *VAR_3,
          struct v4l2_async_subdev *VAR_4)
{
 struct v4l2_subdev *VAR_5 = FUNC_1(VAR_2);
 struct csi2_dev *VAR_6 = FUNC_3(VAR_5);

 if (!FUNC_2(VAR_4->match.fwnode)) {
  FUNC_4(&VAR_6->sd, "remote is not available\n");
  return -VAR_0;
 }

 if (VAR_3->bus_type != VAR_1) {
  FUNC_4(&VAR_6->sd, "invalid bus type, must be MIPI CSI2\n");
  return -VAR_0;
 }

 VAR_6->bus = VAR_3->bus.mipi_csi2;

 FUNC_0(VAR_6->dev, "data lanes: %d\n", VAR_6->bus.num_data_lanes);
 FUNC_0(VAR_6->dev, "flags: 0x%08x\n", VAR_6->bus.flags);

 return 0;
}
