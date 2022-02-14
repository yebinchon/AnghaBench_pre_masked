
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int num_data_lanes; } ;
struct TYPE_11__ {TYPE_1__ mipi_csi2; } ;
struct v4l2_fwnode_endpoint {TYPE_2__ bus; int bus_type; } ;
struct TYPE_13__ {int * ops; } ;
struct TYPE_12__ {int fwnode; } ;
struct TYPE_14__ {TYPE_3__ match; int match_type; } ;
struct mipid02_dev {TYPE_4__ notifier; int sd; TYPE_8__ asd; struct v4l2_fwnode_endpoint rx; struct i2c_client* i2c_client; } ;
struct TYPE_15__ {int of_node; } ;
struct i2c_client {TYPE_9__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_9__*,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct device_node*) ;
 int FUNC_6 (TYPE_4__*,TYPE_8__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int *,TYPE_4__*) ;
 int FUNC_10 (int ,struct v4l2_fwnode_endpoint*) ;

__attribute__((used)) static int FUNC_11(struct mipid02_dev *VAR_4)
{
 struct v4l2_fwnode_endpoint VAR_5 = { .bus_type = VAR_2 };
 struct i2c_client *VAR_6 = VAR_4->i2c_client;
 struct device_node *VAR_7;
 int VAR_8;


 VAR_7 = FUNC_4(VAR_4->i2c_client->dev.of_node,
      0, 0);
 if (!VAR_7) {
  FUNC_0(&VAR_6->dev, "unable to find port0 ep");
  VAR_8 = -VAR_0;
  goto error;
 }

 VAR_8 = FUNC_10(FUNC_3(VAR_7), &VAR_5);
 if (VAR_8) {
  FUNC_0(&VAR_6->dev, "Could not parse v4l2 endpoint %d\n",
   VAR_8);
  goto error_of_node_put;
 }


 if (VAR_5.bus.mipi_csi2.num_data_lanes > 2) {
  FUNC_0(&VAR_6->dev, "max supported data lanes is 2 / got %d",
   VAR_5.bus.mipi_csi2.num_data_lanes);
  VAR_8 = -VAR_0;
  goto error_of_node_put;
 }


 VAR_4->rx = VAR_5;


 VAR_4->asd.match.fwnode =
  FUNC_1(FUNC_3(VAR_7));
 VAR_4->asd.match_type = VAR_1;
 FUNC_5(VAR_7);

 FUNC_8(&VAR_4->notifier);
 VAR_8 = FUNC_6(&VAR_4->notifier, &VAR_4->asd);
 if (VAR_8) {
  FUNC_0(&VAR_6->dev, "fail to register asd to notifier %d",
   VAR_8);
  FUNC_2(VAR_4->asd.match.fwnode);
  return VAR_8;
 }
 VAR_4->notifier.ops = &VAR_3;

 VAR_8 = FUNC_9(&VAR_4->sd,
        &VAR_4->notifier);
 if (VAR_8)
  FUNC_7(&VAR_4->notifier);

 return VAR_8;

error_of_node_put:
 FUNC_5(VAR_7);
error:

 return VAR_8;
}
