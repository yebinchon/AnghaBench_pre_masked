
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct vpif_subdev_info {int name; } ;
struct vpif_capture_config {unsigned int* asd_sizes; unsigned int subdev_count; char* card_name; int * asd; struct vpif_capture_chan_config* chan_config; struct vpif_subdev_info* subdev_info; } ;
struct TYPE_17__ {int hd_pol; int vd_pol; } ;
struct vpif_capture_chan_config {TYPE_6__ vpif_if; TYPE_3__* inputs; int input_count; } ;
struct TYPE_15__ {unsigned int flags; int bus_width; } ;
struct TYPE_16__ {TYPE_4__ parallel; } ;
struct v4l2_fwnode_endpoint {TYPE_5__ bus; int bus_type; } ;
struct v4l2_async_subdev {int dummy; } ;
struct TYPE_19__ {scalar_t__ of_node; struct vpif_capture_config* platform_data; TYPE_1__* parent; } ;
struct platform_device {TYPE_8__ dev; } ;
struct device_node {int full_name; } ;
struct TYPE_18__ {int notifier; } ;
struct TYPE_13__ {int capabilities; int std; int type; } ;
struct TYPE_14__ {TYPE_2__ input; } ;
struct TYPE_12__ {scalar_t__ of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_2 (TYPE_8__*,char*,struct device_node*,...) ;
 int FUNC_3 (TYPE_8__*,char*) ;
 void* FUNC_4 (TYPE_8__*,unsigned int,int,int ) ;
 struct vpif_capture_config* FUNC_5 (TYPE_8__*,int,int ) ;
 int FUNC_6 (struct device_node*) ;
 struct device_node* FUNC_7 (scalar_t__,struct device_node*) ;
 struct device_node* FUNC_8 (struct device_node*) ;
 int FUNC_9 (struct device_node*) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,struct v4l2_fwnode_endpoint*) ;
 TYPE_7__ VAR_8 ;

__attribute__((used)) static struct vpif_capture_config *
FUNC_14(struct platform_device *VAR_9)
{
 struct device_node *VAR_10 = ((void*)0);
 struct device_node *VAR_11 = ((void*)0);
 struct vpif_capture_config *VAR_12;
 struct vpif_subdev_info *VAR_13;
 struct vpif_capture_chan_config *VAR_14;
 unsigned int VAR_15;

 FUNC_12(&VAR_8.notifier);





 if (VAR_9->dev.parent && VAR_9->dev.parent->of_node)
  VAR_9->dev.of_node = VAR_9->dev.parent->of_node;
 if (!FUNC_0(VAR_0) || !VAR_9->dev.of_node)
  return VAR_9->dev.platform_data;

 VAR_12 = FUNC_5(&VAR_9->dev, sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return ((void*)0);
 VAR_12->subdev_info =
  FUNC_4(&VAR_9->dev,
        VAR_7,
        sizeof(*VAR_12->subdev_info),
        VAR_1);

 if (!VAR_12->subdev_info)
  return ((void*)0);

 for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++) {
  struct v4l2_fwnode_endpoint VAR_16 = { .bus_type = 0 };
  unsigned int VAR_17;
  int VAR_18;

  VAR_10 = FUNC_7(VAR_9->dev.of_node,
            VAR_10);
  if (!VAR_10)
   break;

  VAR_11 = FUNC_8(VAR_10);
  if (!VAR_11) {
   FUNC_2(&VAR_9->dev, "Remote device at %pOF not found\n",
    VAR_10);
   goto done;
  }

  VAR_13 = &VAR_12->subdev_info[VAR_15];
  VAR_14 = &VAR_12->chan_config[VAR_15];
  VAR_14->inputs = FUNC_4(&VAR_9->dev,
         VAR_7,
         sizeof(*VAR_14->inputs),
         VAR_1);
  if (!VAR_14->inputs)
   goto err_cleanup;

  VAR_14->input_count++;
  VAR_14->inputs[VAR_15].input.type = VAR_2;
  VAR_14->inputs[VAR_15].input.std = VAR_6;
  VAR_14->inputs[VAR_15].input.capabilities = VAR_3;

  VAR_18 = FUNC_13(FUNC_6(VAR_10),
       &VAR_16);
  if (VAR_18) {
   FUNC_3(&VAR_9->dev, "Could not parse the endpoint\n");
   FUNC_9(VAR_11);
   goto done;
  }

  FUNC_2(&VAR_9->dev, "Endpoint %pOF, bus_width = %d\n",
   VAR_10, VAR_16.bus.parallel.bus_width);

  VAR_17 = VAR_16.bus.parallel.flags;

  if (VAR_17 & VAR_4)
   VAR_14->vpif_if.hd_pol = 1;

  if (VAR_17 & VAR_5)
   VAR_14->vpif_if.vd_pol = 1;

  FUNC_2(&VAR_9->dev, "Remote device %pOF found\n", VAR_11);
  VAR_13->name = VAR_11->full_name;

  VAR_12->asd[VAR_15] = FUNC_10(
   &VAR_8.notifier, FUNC_6(VAR_11),
   sizeof(struct v4l2_async_subdev));
  if (FUNC_1(VAR_12->asd[VAR_15]))
   goto err_cleanup;

  FUNC_9(VAR_11);
 }

done:
 FUNC_9(VAR_10);
 VAR_12->asd_sizes[0] = VAR_15;
 VAR_12->subdev_count = VAR_15;
 VAR_12->card_name = "DA850/OMAP-L138 Video Capture";

 return VAR_12;

err_cleanup:
 FUNC_9(VAR_11);
 FUNC_9(VAR_10);
 FUNC_11(&VAR_8.notifier);

 return ((void*)0);
}
