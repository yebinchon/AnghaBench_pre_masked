
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int flags; } ;
struct TYPE_5__ {TYPE_1__ parallel; } ;
struct v4l2_fwnode_endpoint {TYPE_2__ bus; int bus_type; } ;
struct tvp514x_platform_data {int hs_polarity; int vs_polarity; int clk_polarity; } ;
struct TYPE_6__ {int of_node; struct tvp514x_platform_data* platform_data; } ;
struct i2c_client {TYPE_3__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 struct tvp514x_platform_data* FUNC_1 (TYPE_3__*,int,int ) ;
 int FUNC_2 (struct device_node*) ;
 struct device_node* FUNC_3 (int ,int *) ;
 int FUNC_4 (struct device_node*) ;
 scalar_t__ FUNC_5 (int ,struct v4l2_fwnode_endpoint*) ;

__attribute__((used)) static struct tvp514x_platform_data *
FUNC_6(struct i2c_client *VAR_5)
{
 struct tvp514x_platform_data *VAR_6 = ((void*)0);
 struct v4l2_fwnode_endpoint VAR_7 = { .bus_type = 0 };
 struct device_node *VAR_8;
 unsigned int VAR_9;

 if (!FUNC_0(VAR_0) || !VAR_5->dev.of_node)
  return VAR_5->dev.platform_data;

 VAR_8 = FUNC_3(VAR_5->dev.of_node, ((void*)0));
 if (!VAR_8)
  return ((void*)0);

 if (FUNC_5(FUNC_2(VAR_8), &VAR_7))
  goto done;

 VAR_6 = FUNC_1(&VAR_5->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  goto done;

 VAR_9 = VAR_7.bus.parallel.flags;

 if (VAR_9 & VAR_2)
  VAR_6->hs_polarity = 1;

 if (VAR_9 & VAR_4)
  VAR_6->vs_polarity = 1;

 if (VAR_9 & VAR_3)
  VAR_6->clk_polarity = 1;

done:
 FUNC_4(VAR_8);
 return VAR_6;
}
