
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


struct TYPE_10__ {scalar_t__ num_data_lanes; int data_lanes; } ;
struct TYPE_11__ {TYPE_1__ mipi_csi2; } ;
struct v4l2_fwnode_endpoint {scalar_t__ bus_type; TYPE_2__ bus; } ;
struct fwnode_handle {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_13__ {int * ops; } ;
struct TYPE_12__ {int fwnode; } ;
struct TYPE_14__ {TYPE_3__ match; int match_type; } ;
struct csi2rx_priv {scalar_t__ num_lanes; scalar_t__ max_lanes; TYPE_4__ notifier; int subdev; TYPE_8__ asd; TYPE_9__* dev; int lanes; } ;
struct TYPE_15__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_9__*,char*,...) ;
 int FUNC_1 (struct fwnode_handle*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 struct fwnode_handle* FUNC_4 (struct device_node*) ;
 struct device_node* FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct device_node*) ;
 int FUNC_7 (TYPE_4__*,TYPE_8__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (int *,TYPE_4__*) ;
 int FUNC_11 (struct fwnode_handle*,struct v4l2_fwnode_endpoint*) ;

__attribute__((used)) static int FUNC_12(struct csi2rx_priv *VAR_4)
{
 struct v4l2_fwnode_endpoint VAR_5 = { .bus_type = 0 };
 struct fwnode_handle *VAR_6;
 struct device_node *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(VAR_4->dev->of_node, 0, 0);
 if (!VAR_7)
  return -VAR_0;

 VAR_6 = FUNC_4(VAR_7);
 VAR_8 = FUNC_11(VAR_6, &VAR_5);
 if (VAR_8) {
  FUNC_0(VAR_4->dev, "Could not parse v4l2 endpoint\n");
  FUNC_6(VAR_7);
  return VAR_8;
 }

 if (VAR_5.bus_type != VAR_2) {
  FUNC_0(VAR_4->dev, "Unsupported media bus type: 0x%x\n",
   VAR_5.bus_type);
  FUNC_6(VAR_7);
  return -VAR_0;
 }

 FUNC_3(VAR_4->lanes, VAR_5.bus.mipi_csi2.data_lanes,
        sizeof(VAR_4->lanes));
 VAR_4->num_lanes = VAR_5.bus.mipi_csi2.num_data_lanes;
 if (VAR_4->num_lanes > VAR_4->max_lanes) {
  FUNC_0(VAR_4->dev, "Unsupported number of data-lanes: %d\n",
   VAR_4->num_lanes);
  FUNC_6(VAR_7);
  return -VAR_0;
 }

 VAR_4->asd.match.fwnode = FUNC_1(VAR_6);
 VAR_4->asd.match_type = VAR_1;
 FUNC_6(VAR_7);

 FUNC_9(&VAR_4->notifier);

 VAR_8 = FUNC_7(&VAR_4->notifier, &VAR_4->asd);
 if (VAR_8) {
  FUNC_2(VAR_4->asd.match.fwnode);
  return VAR_8;
 }

 VAR_4->notifier.ops = &VAR_3;

 VAR_8 = FUNC_10(&VAR_4->subdev,
        &VAR_4->notifier);
 if (VAR_8)
  FUNC_8(&VAR_4->notifier);

 return VAR_8;
}
