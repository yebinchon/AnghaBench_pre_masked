
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {TYPE_1__ parallel; } ;
struct v4l2_fwnode_endpoint {TYPE_2__ bus; int bus_type; } ;
struct property {int length; } ;
struct mt9v032_platform_data {int clk_pol; int link_def_freq; int * link_freqs; } ;
struct TYPE_7__ {int of_node; struct mt9v032_platform_data* platform_data; } ;
struct i2c_client {TYPE_3__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int * FUNC_1 (TYPE_3__*,size_t,int,int ) ;
 struct mt9v032_platform_data* FUNC_2 (TYPE_3__*,int,int ) ;
 struct property* FUNC_3 (struct device_node*,char*,int *) ;
 int FUNC_4 (struct device_node*) ;
 struct device_node* FUNC_5 (int ,int *) ;
 int FUNC_6 (struct device_node*) ;
 scalar_t__ FUNC_7 (struct device_node*,char*,int *,size_t) ;
 scalar_t__ FUNC_8 (int ,struct v4l2_fwnode_endpoint*) ;

__attribute__((used)) static struct mt9v032_platform_data *
FUNC_9(struct i2c_client *VAR_3)
{
 struct mt9v032_platform_data *VAR_4 = ((void*)0);
 struct v4l2_fwnode_endpoint VAR_5 = { .bus_type = 0 };
 struct device_node *VAR_6;
 struct property *VAR_7;

 if (!FUNC_0(VAR_0) || !VAR_3->dev.of_node)
  return VAR_3->dev.platform_data;

 VAR_6 = FUNC_5(VAR_3->dev.of_node, ((void*)0));
 if (!VAR_6)
  return ((void*)0);

 if (FUNC_8(FUNC_4(VAR_6), &VAR_5) < 0)
  goto done;

 VAR_4 = FUNC_2(&VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  goto done;

 VAR_7 = FUNC_3(VAR_6, "link-frequencies", ((void*)0));
 if (VAR_7) {
  u64 *VAR_8;
  size_t VAR_9 = VAR_7->length / sizeof(*VAR_8);

  VAR_8 = FUNC_1(&VAR_3->dev, VAR_9,
       sizeof(*VAR_8), VAR_1);
  if (!VAR_8)
   goto done;

  if (FUNC_7(VAR_6, "link-frequencies",
            VAR_8, VAR_9) < 0)
   goto done;

  VAR_4->link_freqs = VAR_8;
  VAR_4->link_def_freq = VAR_8[0];
 }

 VAR_4->clk_pol = !!(VAR_5.bus.parallel.flags &
       VAR_2);

done:
 FUNC_6(VAR_6);
 return VAR_4;
}
