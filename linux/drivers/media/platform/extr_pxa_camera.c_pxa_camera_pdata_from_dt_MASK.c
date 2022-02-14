
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int bus_width; int flags; } ;
struct TYPE_5__ {TYPE_1__ parallel; } ;
struct v4l2_fwnode_endpoint {TYPE_2__ bus; int bus_type; } ;
struct TYPE_6__ {int fwnode; } ;
struct v4l2_async_subdev {TYPE_3__ match; int match_type; } ;
struct pxa_camera_dev {int platform_flags; int mclk; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,struct device_node*) ;
 int FUNC_2 (struct device_node*) ;
 struct device_node* FUNC_3 (struct device_node*,int *) ;
 struct device_node* FUNC_4 (struct device_node*) ;
 int FUNC_5 (struct device_node*) ;
 int FUNC_6 (struct device_node*,char*,int *) ;
 int FUNC_7 (int ,struct v4l2_fwnode_endpoint*) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_18,
        struct pxa_camera_dev *VAR_19,
        struct v4l2_async_subdev *VAR_20)
{
 u32 VAR_21;
 struct device_node *VAR_22, *VAR_23 = VAR_18->of_node;
 struct v4l2_fwnode_endpoint VAR_24 = { .bus_type = 0 };
 int VAR_25 = FUNC_6(VAR_23, "clock-frequency",
           &VAR_21);
 if (!VAR_25) {
  VAR_19->platform_flags |= VAR_8;
  VAR_19->mclk = VAR_21;
 }

 VAR_23 = FUNC_3(VAR_23, ((void*)0));
 if (!VAR_23) {
  FUNC_0(VAR_18, "could not find endpoint\n");
  return -VAR_0;
 }

 VAR_25 = FUNC_7(FUNC_2(VAR_23), &VAR_24);
 if (VAR_25) {
  FUNC_0(VAR_18, "could not parse endpoint\n");
  goto out;
 }

 switch (VAR_24.bus.parallel.bus_width) {
 case 4:
  VAR_19->platform_flags |= VAR_2;
  break;
 case 5:
  VAR_19->platform_flags |= VAR_3;
  break;
 case 8:
  VAR_19->platform_flags |= VAR_4;
  break;
 case 9:
  VAR_19->platform_flags |= VAR_5;
  break;
 case 10:
  VAR_19->platform_flags |= VAR_1;
  break;
 default:
  break;
 }

 if (VAR_24.bus.parallel.flags & VAR_14)
  VAR_19->platform_flags |= VAR_7;
 if (VAR_24.bus.parallel.flags & VAR_13)
  VAR_19->platform_flags |= VAR_6;
 if (VAR_24.bus.parallel.flags & VAR_17)
  VAR_19->platform_flags |= VAR_11;
 if (VAR_24.bus.parallel.flags & VAR_16)
  VAR_19->platform_flags |= VAR_9 | VAR_10;
 if (VAR_24.bus.parallel.flags & VAR_15)
  VAR_19->platform_flags |= VAR_9;

 VAR_20->match_type = VAR_12;
 VAR_22 = FUNC_4(VAR_23);
 if (VAR_22)
  VAR_20->match.fwnode = FUNC_2(VAR_22);
 else
  FUNC_1(VAR_18, "no remote for %pOF\n", VAR_23);

out:
 FUNC_5(VAR_23);

 return VAR_25;
}
