
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int if_type; int bus_width; int hdpol; int vdpol; } ;
struct vpfe_subdev_info {TYPE_4__ vpfe_param; int * routes; scalar_t__ can_route; TYPE_1__* inputs; scalar_t__ grp_id; } ;
struct vpfe_device {int notifier; struct device* pdev; } ;
struct vpfe_config {int * asd; struct vpfe_subdev_info* sub_devs; } ;
struct TYPE_6__ {int bus_width; unsigned int flags; } ;
struct TYPE_7__ {TYPE_2__ parallel; } ;
struct v4l2_fwnode_endpoint {TYPE_3__ bus; int bus_type; } ;
struct v4l2_async_subdev {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int of_node; struct vpfe_config* platform_data; } ;
struct TYPE_5__ {unsigned int index; int capabilities; int std; int type; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,...) ;
 struct vpfe_config* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device_node*) ;
 struct device_node* FUNC_6 (int ,struct device_node*) ;
 struct device_node* FUNC_7 (struct device_node*) ;
 int FUNC_8 (struct device_node*) ;
 int FUNC_9 (struct device_node*,char*,int*) ;
 int FUNC_10 (int ,char*,int) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,struct v4l2_fwnode_endpoint*) ;

__attribute__((used)) static struct vpfe_config *
FUNC_15(struct vpfe_device *VAR_8)
{
 struct device_node *VAR_9 = ((void*)0);
 struct device *VAR_10 = VAR_8->pdev;
 struct vpfe_subdev_info *VAR_11;
 struct vpfe_config *VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14;
 int VAR_15;

 FUNC_2(VAR_10, "vpfe_get_pdata\n");

 FUNC_13(&VAR_8->notifier);

 if (!FUNC_0(VAR_0) || !VAR_10->of_node)
  return VAR_10->platform_data;

 VAR_12 = FUNC_4(VAR_10, sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return ((void*)0);

 for (VAR_14 = 0; ; VAR_14++) {
  struct v4l2_fwnode_endpoint VAR_16 = { .bus_type = 0 };
  struct device_node *VAR_17;

  VAR_9 = FUNC_6(VAR_10->of_node, VAR_9);
  if (!VAR_9)
   break;

  VAR_11 = &VAR_12->sub_devs[VAR_14];
  VAR_11->grp_id = 0;


  VAR_11->inputs[0].index = VAR_14;
  FUNC_10(VAR_11->inputs[0].name, "Camera",
   sizeof(VAR_11->inputs[0].name));
  VAR_11->inputs[0].type = VAR_2;
  VAR_11->inputs[0].std = VAR_6;
  VAR_11->inputs[0].capabilities = VAR_3;

  VAR_11->can_route = 0;
  VAR_11->routes = ((void*)0);

  FUNC_9(VAR_9, "ti,am437x-vpfe-interface",
         &VAR_11->vpfe_param.if_type);
  if (VAR_11->vpfe_param.if_type < 0 ||
   VAR_11->vpfe_param.if_type > 4) {
   VAR_11->vpfe_param.if_type = VAR_7;
  }

  VAR_15 = FUNC_14(FUNC_5(VAR_9),
       &VAR_16);
  if (VAR_15) {
   FUNC_3(VAR_10, "Could not parse the endpoint\n");
   goto cleanup;
  }

  VAR_11->vpfe_param.bus_width = VAR_16.bus.parallel.bus_width;

  if (VAR_11->vpfe_param.bus_width < 8 ||
   VAR_11->vpfe_param.bus_width > 16) {
   FUNC_3(VAR_10, "Invalid bus width.\n");
   goto cleanup;
  }

  VAR_13 = VAR_16.bus.parallel.flags;

  if (VAR_13 & VAR_4)
   VAR_11->vpfe_param.hdpol = 1;

  if (VAR_13 & VAR_5)
   VAR_11->vpfe_param.vdpol = 1;

  VAR_17 = FUNC_7(VAR_9);
  if (!VAR_17) {
   FUNC_3(VAR_10, "Remote device at %pOF not found\n",
    VAR_9);
   goto cleanup;
  }

  VAR_12->asd[VAR_14] = FUNC_11(
   &VAR_8->notifier, FUNC_5(VAR_17),
   sizeof(struct v4l2_async_subdev));
  FUNC_8(VAR_17);
  if (FUNC_1(VAR_12->asd[VAR_14]))
   goto cleanup;
 }

 FUNC_8(VAR_9);
 return VAR_12;

cleanup:
 FUNC_12(&VAR_8->notifier);
 FUNC_8(VAR_9);
 return ((void*)0);
}
