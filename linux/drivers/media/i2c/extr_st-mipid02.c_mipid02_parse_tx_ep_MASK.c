
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fwnode_endpoint {int bus_type; } ;
struct mipid02_dev {struct v4l2_fwnode_endpoint tx; struct i2c_client* i2c_client; } ;
struct TYPE_2__ {int of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (int ,struct v4l2_fwnode_endpoint*) ;

__attribute__((used)) static int FUNC_5(struct mipid02_dev *VAR_2)
{
 struct v4l2_fwnode_endpoint VAR_3 = { .bus_type = VAR_1 };
 struct i2c_client *VAR_4 = VAR_2->i2c_client;
 struct device_node *VAR_5;
 int VAR_6;


 VAR_5 = FUNC_2(VAR_2->i2c_client->dev.of_node,
      2, 0);
 if (!VAR_5) {
  FUNC_0(&VAR_4->dev, "unable to find port1 ep");
  VAR_6 = -VAR_0;
  goto error;
 }

 VAR_6 = FUNC_4(FUNC_1(VAR_5), &VAR_3);
 if (VAR_6) {
  FUNC_0(&VAR_4->dev, "Could not parse v4l2 endpoint\n");
  goto error_of_node_put;
 }

 FUNC_3(VAR_5);
 VAR_2->tx = VAR_3;

 return 0;

error_of_node_put:
 FUNC_3(VAR_5);
error:

 return -VAR_0;
}
