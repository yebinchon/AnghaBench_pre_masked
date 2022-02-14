
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_data_lanes; int* data_lanes; } ;
struct TYPE_5__ {TYPE_1__ mipi_csi2; } ;
struct v4l2_fwnode_endpoint {scalar_t__ bus_type; TYPE_2__ bus; } ;
struct device_node {int dummy; } ;
struct csi2tx_priv {int num_lanes; int max_lanes; int lanes; TYPE_3__* dev; } ;
struct TYPE_6__ {int of_node; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,char*,...) ;
 int FUNC_1 (int ,int*,int) ;
 int FUNC_2 (struct device_node*) ;
 struct device_node* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (int ,struct v4l2_fwnode_endpoint*) ;

__attribute__((used)) static int FUNC_6(struct csi2tx_priv *VAR_2)
{
 struct v4l2_fwnode_endpoint VAR_3 = { .bus_type = 0 };
 struct device_node *VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = FUNC_3(VAR_2->dev->of_node, 0, 0);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_5(FUNC_2(VAR_4), &VAR_3);
 if (VAR_5) {
  FUNC_0(VAR_2->dev, "Could not parse v4l2 endpoint\n");
  goto out;
 }

 if (VAR_3.bus_type != VAR_1) {
  FUNC_0(VAR_2->dev, "Unsupported media bus type: 0x%x\n",
   VAR_3.bus_type);
  VAR_5 = -VAR_0;
  goto out;
 }

 VAR_2->num_lanes = VAR_3.bus.mipi_csi2.num_data_lanes;
 if (VAR_2->num_lanes > VAR_2->max_lanes) {
  FUNC_0(VAR_2->dev,
   "Current configuration uses more lanes than supported\n");
  VAR_5 = -VAR_0;
  goto out;
 }

 for (VAR_6 = 0; VAR_6 < VAR_2->num_lanes; VAR_6++) {
  if (VAR_3.bus.mipi_csi2.data_lanes[VAR_6] < 1) {
   FUNC_0(VAR_2->dev, "Invalid lane[%d] number: %u\n",
    VAR_6, VAR_3.bus.mipi_csi2.data_lanes[VAR_6]);
   VAR_5 = -VAR_0;
   goto out;
  }
 }

 FUNC_1(VAR_2->lanes, VAR_3.bus.mipi_csi2.data_lanes,
        sizeof(VAR_2->lanes));

out:
 FUNC_4(VAR_4);
 return VAR_5;
}
