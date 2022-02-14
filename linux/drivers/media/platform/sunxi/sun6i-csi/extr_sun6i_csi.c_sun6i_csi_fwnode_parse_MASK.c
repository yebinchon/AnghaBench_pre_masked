
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ id; scalar_t__ port; } ;
struct v4l2_fwnode_endpoint {int bus_type; TYPE_1__ base; } ;
struct v4l2_async_subdev {int dummy; } ;
struct sun6i_csi {struct v4l2_fwnode_endpoint v4l2_ep; } ;
struct device {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct device*,char*) ;
 struct sun6i_csi* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1,
      struct v4l2_fwnode_endpoint *VAR_2,
      struct v4l2_async_subdev *VAR_3)
{
 struct sun6i_csi *VAR_4 = FUNC_1(VAR_1);

 if (VAR_2->base.port || VAR_2->base.id) {
  FUNC_2(VAR_1, "Only support a single port with one endpoint\n");
  return -VAR_0;
 }

 switch (VAR_2->bus_type) {
 case 128:
 case 129:
  VAR_4->v4l2_ep = *VAR_2;
  return 0;
 default:
  FUNC_0(VAR_1, "Unsupported media bus type\n");
  return -VAR_0;
 }
}
