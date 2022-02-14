
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_data_lanes; } ;
struct TYPE_4__ {TYPE_1__ mipi_csi2; } ;
struct v4l2_fwnode_endpoint {TYPE_2__ bus; int bus_type; } ;
struct s5k5baf {int nlanes; int bus_type; int gpios; int mclk_frequency; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,int ) ;
 int FUNC_2 (struct device_node*) ;
 struct device_node* FUNC_3 (struct device_node*,int *) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (struct device_node*,char*,int *) ;
 int FUNC_6 (int ,struct device*) ;
 int FUNC_7 (int ,struct v4l2_fwnode_endpoint*) ;

__attribute__((used)) static int FUNC_8(struct s5k5baf *VAR_2, struct device *VAR_3)
{
 struct device_node *VAR_4 = VAR_3->of_node;
 struct device_node *VAR_5;
 struct v4l2_fwnode_endpoint VAR_6 = { .bus_type = 0 };
 int VAR_7;

 if (!VAR_4) {
  FUNC_0(VAR_3, "no device-tree node provided\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_5(VAR_4, "clock-frequency",
       &VAR_2->mclk_frequency);
 if (VAR_7 < 0) {
  VAR_2->mclk_frequency = VAR_1;
  FUNC_1(VAR_3, "using default %u Hz clock frequency\n",
    VAR_2->mclk_frequency);
 }

 VAR_7 = FUNC_6(VAR_2->gpios, VAR_3);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_5 = FUNC_3(VAR_4, ((void*)0));
 if (!VAR_5) {
  FUNC_0(VAR_3, "no endpoint defined at node %pOF\n", VAR_4);
  return -VAR_0;
 }

 VAR_7 = FUNC_7(FUNC_2(VAR_5), &VAR_6);
 FUNC_4(VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_2->bus_type = VAR_6.bus_type;

 switch (VAR_2->bus_type) {
 case 129:
  VAR_2->nlanes = VAR_6.bus.mipi_csi2.num_data_lanes;
  break;
 case 128:
  break;
 default:
  FUNC_0(VAR_3, "unsupported bus in endpoint defined at node %pOF\n",
   VAR_4);
  return -VAR_0;
 }

 return 0;
}
