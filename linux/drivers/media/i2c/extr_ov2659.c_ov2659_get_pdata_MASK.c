
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_fwnode_endpoint {int * link_frequencies; int nr_of_link_frequencies; int bus_type; } ;
struct ov2659_platform_data {int link_frequency; } ;
struct TYPE_3__ {int of_node; struct ov2659_platform_data* platform_data; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 struct ov2659_platform_data* FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (int ,int *) ;
 int FUNC_5 (struct device_node*) ;
 int FUNC_6 (int ,struct v4l2_fwnode_endpoint*) ;
 int FUNC_7 (struct v4l2_fwnode_endpoint*) ;

__attribute__((used)) static struct ov2659_platform_data *
FUNC_8(struct i2c_client *VAR_2)
{
 struct ov2659_platform_data *VAR_3;
 struct v4l2_fwnode_endpoint VAR_4 = { .bus_type = 0 };
 struct device_node *VAR_5;
 int VAR_6;

 if (!FUNC_0(VAR_0) || !VAR_2->dev.of_node)
  return VAR_2->dev.platform_data;

 VAR_5 = FUNC_4(VAR_2->dev.of_node, ((void*)0));
 if (!VAR_5)
  return ((void*)0);

 VAR_6 = FUNC_6(FUNC_3(VAR_5),
            &VAR_4);
 if (VAR_6) {
  VAR_3 = ((void*)0);
  goto done;
 }

 VAR_3 = FUNC_2(&VAR_2->dev, sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  goto done;

 if (!VAR_4.nr_of_link_frequencies) {
  FUNC_1(&VAR_2->dev,
   "link-frequencies property not found or too many\n");
  VAR_3 = ((void*)0);
  goto done;
 }

 VAR_3->link_frequency = VAR_4.link_frequencies[0];

done:
 FUNC_7(&VAR_4);
 FUNC_5(VAR_5);
 return VAR_3;
}
