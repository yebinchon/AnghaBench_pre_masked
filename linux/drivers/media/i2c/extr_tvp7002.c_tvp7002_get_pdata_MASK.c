
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
struct tvp7002_config {int hs_polarity; int vs_polarity; int clk_polarity; int fid_polarity; int sog_polarity; } ;
struct TYPE_6__ {int of_node; struct tvp7002_config* platform_data; } ;
struct i2c_client {TYPE_3__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 struct tvp7002_config* FUNC_1 (TYPE_3__*,int,int ) ;
 int FUNC_2 (struct device_node*) ;
 struct device_node* FUNC_3 (int ,int *) ;
 int FUNC_4 (struct device_node*) ;
 scalar_t__ FUNC_5 (int ,struct v4l2_fwnode_endpoint*) ;

__attribute__((used)) static struct tvp7002_config *
FUNC_6(struct i2c_client *VAR_7)
{
 struct v4l2_fwnode_endpoint VAR_8 = { .bus_type = 0 };
 struct tvp7002_config *VAR_9 = ((void*)0);
 struct device_node *VAR_10;
 unsigned int VAR_11;

 if (!FUNC_0(VAR_0) || !VAR_7->dev.of_node)
  return VAR_7->dev.platform_data;

 VAR_10 = FUNC_3(VAR_7->dev.of_node, ((void*)0));
 if (!VAR_10)
  return ((void*)0);

 if (FUNC_5(FUNC_2(VAR_10), &VAR_8))
  goto done;

 VAR_9 = FUNC_1(&VAR_7->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  goto done;

 VAR_11 = VAR_8.bus.parallel.flags;

 if (VAR_11 & VAR_3)
  VAR_9->hs_polarity = 1;

 if (VAR_11 & VAR_6)
  VAR_9->vs_polarity = 1;

 if (VAR_11 & VAR_4)
  VAR_9->clk_polarity = 1;

 if (VAR_11 & VAR_2)
  VAR_9->fid_polarity = 1;

 if (VAR_11 & VAR_5)
  VAR_9->sog_polarity = 1;

done:
 FUNC_4(VAR_10);
 return VAR_9;
}
