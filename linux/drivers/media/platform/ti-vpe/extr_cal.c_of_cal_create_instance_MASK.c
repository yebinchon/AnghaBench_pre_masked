
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_15__ {int num_data_lanes; int * data_lanes; int clock_lane; int flags; } ;
struct TYPE_16__ {TYPE_5__ mipi_csi2; } ;
struct TYPE_14__ {int id; } ;
struct v4l2_fwnode_endpoint {scalar_t__ bus_type; TYPE_6__ bus; TYPE_4__ base; } ;
struct TYPE_13__ {int fwnode; } ;
struct v4l2_async_subdev {TYPE_3__ match; int match_type; } ;
struct TYPE_12__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_17__ {int * ops; } ;
struct cal_ctx {TYPE_7__ notifier; int v4l2_dev; int virtual_channel; struct v4l2_fwnode_endpoint endpoint; struct v4l2_async_subdev asd; TYPE_1__* dev; } ;
struct TYPE_11__ {struct platform_device* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,struct cal_ctx*,char*,...) ;
 int FUNC_1 (struct cal_ctx*,char*,...) ;
 int FUNC_2 (struct device_node*) ;
 struct device_node* FUNC_3 (struct device_node*,struct device_node*) ;
 struct device_node* FUNC_4 (struct device_node*,struct device_node*) ;
 struct device_node* FUNC_5 (struct device_node*) ;
 int FUNC_6 (struct device_node*) ;
 int FUNC_7 (struct device_node*,char*,int*) ;
 int FUNC_8 (TYPE_7__*,struct v4l2_async_subdev*) ;
 int FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (TYPE_7__*) ;
 int FUNC_11 (int *,TYPE_7__*) ;
 int FUNC_12 (int ,struct v4l2_fwnode_endpoint*) ;

__attribute__((used)) static int FUNC_13(struct cal_ctx *VAR_5, int VAR_6)
{
 struct platform_device *VAR_7 = VAR_5->dev->pdev;
 struct device_node *VAR_8, *VAR_9, *VAR_10, *VAR_11;
 struct v4l2_fwnode_endpoint *VAR_12;
 struct v4l2_async_subdev *VAR_13;
 u32 VAR_14 = 0;
 int VAR_15, VAR_16, VAR_17 = 0, VAR_18;

 VAR_11 = VAR_7->dev.of_node;

 VAR_13 = &VAR_5->asd;
 VAR_12 = &VAR_5->endpoint;

 VAR_8 = ((void*)0);
 VAR_9 = ((void*)0);
 VAR_10 = ((void*)0);
 VAR_15 = -VAR_1;

 FUNC_0(3, VAR_5, "Scanning Port node for csi2 port: %d\n", VAR_6);
 for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++) {
  VAR_9 = FUNC_4(VAR_11, VAR_9);
  if (!VAR_9) {
   FUNC_0(1, VAR_5, "No port node found for csi2 port:%d\n",
    VAR_16);
   goto cleanup_exit;
  }


  FUNC_7(VAR_9, "reg", &VAR_14);
  FUNC_0(3, VAR_5, "port:%d inst:%d <reg>:%d\n",
   VAR_16, VAR_6, VAR_14);
  if ((VAR_14 == VAR_6) && (VAR_16 == VAR_6)) {
   VAR_17 = 1;
   break;
  }
 }

 if (!VAR_17) {
  FUNC_0(1, VAR_5, "No port node matches csi2 port:%d\n",
   VAR_6);
  goto cleanup_exit;
 }

 FUNC_0(3, VAR_5, "Scanning sub-device for csi2 port: %d\n",
  VAR_6);

 VAR_8 = FUNC_3(VAR_9, VAR_8);
 if (!VAR_8) {
  FUNC_0(3, VAR_5, "can't get next endpoint\n");
  goto cleanup_exit;
 }

 VAR_10 = FUNC_5(VAR_8);
 if (!VAR_10) {
  FUNC_0(3, VAR_5, "can't get remote parent\n");
  goto cleanup_exit;
 }
 VAR_13->match_type = VAR_2;
 VAR_13->match.fwnode = FUNC_2(VAR_10);

 FUNC_12(FUNC_2(VAR_8), VAR_12);

 if (VAR_12->bus_type != VAR_3) {
  FUNC_1(VAR_5, "Port:%d sub-device %pOFn is not a CSI2 device\n",
   VAR_6, VAR_10);
  goto cleanup_exit;
 }


 VAR_5->virtual_channel = VAR_12->base.id;

 FUNC_0(3, VAR_5, "Port:%d v4l2-endpoint: CSI2\n", VAR_6);
 FUNC_0(3, VAR_5, "Virtual Channel=%d\n", VAR_5->virtual_channel);
 FUNC_0(3, VAR_5, "flags=0x%08x\n", VAR_12->bus.mipi_csi2.flags);
 FUNC_0(3, VAR_5, "clock_lane=%d\n", VAR_12->bus.mipi_csi2.clock_lane);
 FUNC_0(3, VAR_5, "num_data_lanes=%d\n",
  VAR_12->bus.mipi_csi2.num_data_lanes);
 FUNC_0(3, VAR_5, "data_lanes= <\n");
 for (VAR_18 = 0; VAR_18 < VAR_12->bus.mipi_csi2.num_data_lanes; VAR_18++)
  FUNC_0(3, VAR_5, "\t%d\n",
   VAR_12->bus.mipi_csi2.data_lanes[VAR_18]);
 FUNC_0(3, VAR_5, "\t>\n");

 FUNC_0(1, VAR_5, "Port: %d found sub-device %pOFn\n",
  VAR_6, VAR_10);

 FUNC_10(&VAR_5->notifier);

 VAR_15 = FUNC_8(&VAR_5->notifier, VAR_13);
 if (VAR_15) {
  FUNC_1(VAR_5, "Error adding asd\n");
  goto cleanup_exit;
 }

 VAR_5->notifier.ops = &VAR_4;
 VAR_15 = FUNC_11(&VAR_5->v4l2_dev,
        &VAR_5->notifier);
 if (VAR_15) {
  FUNC_1(VAR_5, "Error registering async notifier\n");
  FUNC_9(&VAR_5->notifier);
  VAR_15 = -VAR_1;
 }






 VAR_10 = ((void*)0);

cleanup_exit:
 FUNC_6(VAR_10);
 FUNC_6(VAR_8);
 FUNC_6(VAR_9);

 return VAR_15;
}
