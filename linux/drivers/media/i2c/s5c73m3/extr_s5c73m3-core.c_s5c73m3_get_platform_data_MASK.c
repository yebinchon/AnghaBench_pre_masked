
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ num_data_lanes; } ;
struct TYPE_6__ {TYPE_2__ mipi_csi2; } ;
struct v4l2_fwnode_endpoint {scalar_t__ bus_type; TYPE_3__ bus; } ;
struct s5c73m3_platform_data {int gpio_reset; int gpio_stby; int mclk_frequency; } ;
struct s5c73m3 {int mclk_frequency; int clock; int * gpio; TYPE_1__* i2c_client; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; struct s5c73m3_platform_data* platform_data; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,char*,struct device_node*) ;
 int FUNC_5 (struct device*,int ) ;
 int FUNC_6 (struct device_node*) ;
 struct device_node* FUNC_7 (struct device_node*,int *) ;
 int FUNC_8 (struct device_node*) ;
 scalar_t__ FUNC_9 (struct device_node*,char*,int *) ;
 int FUNC_10 (struct s5c73m3*) ;
 int FUNC_11 (int ,struct v4l2_fwnode_endpoint*) ;

__attribute__((used)) static int FUNC_12(struct s5c73m3 *VAR_7)
{
 struct device *VAR_8 = &VAR_7->i2c_client->dev;
 const struct s5c73m3_platform_data *VAR_9 = VAR_8->platform_data;
 struct device_node *VAR_10 = VAR_8->of_node;
 struct device_node *VAR_11;
 struct v4l2_fwnode_endpoint VAR_12 = { .bus_type = 0 };
 int VAR_13;

 if (!VAR_10) {
  if (!VAR_9) {
   FUNC_2(VAR_8, "Platform data not specified\n");
   return -VAR_0;
  }

  VAR_7->mclk_frequency = VAR_9->mclk_frequency;
  VAR_7->gpio[VAR_5] = VAR_9->gpio_stby;
  VAR_7->gpio[VAR_1] = VAR_9->gpio_reset;
  return 0;
 }

 VAR_7->clock = FUNC_5(VAR_8, VAR_2);
 if (FUNC_0(VAR_7->clock))
  return FUNC_1(VAR_7->clock);

 if (FUNC_9(VAR_10, "clock-frequency",
     &VAR_7->mclk_frequency)) {
  VAR_7->mclk_frequency = VAR_3;
  FUNC_3(VAR_8, "using default %u Hz clock frequency\n",
     VAR_7->mclk_frequency);
 }

 VAR_13 = FUNC_10(VAR_7);
 if (VAR_13 < 0)
  return -VAR_0;

 VAR_11 = FUNC_7(VAR_10, ((void*)0));
 if (!VAR_11) {
  FUNC_4(VAR_8, "no endpoint defined for node: %pOF\n", VAR_10);
  return 0;
 }

 VAR_13 = FUNC_11(FUNC_6(VAR_11), &VAR_12);
 FUNC_8(VAR_11);
 if (VAR_13)
  return VAR_13;

 if (VAR_12.bus_type != VAR_6) {
  FUNC_2(VAR_8, "unsupported bus type\n");
  return -VAR_0;
 }




 if (VAR_12.bus.mipi_csi2.num_data_lanes != VAR_4)
  FUNC_3(VAR_8, "falling back to 4 MIPI CSI-2 data lanes\n");

 return 0;
}
