
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int num_data_lanes; } ;
struct TYPE_7__ {TYPE_2__ mipi_csi2; } ;
struct TYPE_5__ {scalar_t__ port; } ;
struct v4l2_fwnode_endpoint {TYPE_3__ bus; TYPE_1__ base; int bus_type; } ;
struct TYPE_8__ {struct device_node* of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct device_node {int dummy; } ;
struct csis_state {scalar_t__ index; int num_lanes; int wclk_ext; int hs_settle; int max_num_lanes; int clk_frequency; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_4__*,char*,struct device_node*) ;
 int FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (struct device_node*,int *) ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (struct device_node*,char*) ;
 scalar_t__ FUNC_5 (struct device_node*,char*,int *) ;
 int FUNC_6 (int ,struct v4l2_fwnode_endpoint*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_5,
       struct csis_state *VAR_6)
{
 struct device_node *VAR_7 = VAR_5->dev.of_node;
 struct v4l2_fwnode_endpoint VAR_8 = { .bus_type = 0 };
 int VAR_9;

 if (FUNC_5(VAR_7, "clock-frequency",
     &VAR_6->clk_frequency))
  VAR_6->clk_frequency = VAR_1;
 if (FUNC_5(VAR_7, "bus-width",
     &VAR_6->max_num_lanes))
  return -VAR_2;

 VAR_7 = FUNC_2(VAR_7, ((void*)0));
 if (!VAR_7) {
  FUNC_0(&VAR_5->dev, "No port node at %pOF\n",
    VAR_5->dev.of_node);
  return -VAR_2;
 }

 VAR_9 = FUNC_6(FUNC_1(VAR_7), &VAR_8);
 if (VAR_9)
  goto err;

 VAR_6->index = VAR_8.base.port - VAR_4;
 if (VAR_6->index >= VAR_0) {
  VAR_9 = -VAR_3;
  goto err;
 }


 FUNC_5(VAR_7, "samsung,csis-hs-settle",
     &VAR_6->hs_settle);
 VAR_6->wclk_ext = FUNC_4(VAR_7,
     "samsung,csis-wclk");

 VAR_6->num_lanes = VAR_8.bus.mipi_csi2.num_data_lanes;

err:
 FUNC_3(VAR_7);
 return VAR_9;
}
