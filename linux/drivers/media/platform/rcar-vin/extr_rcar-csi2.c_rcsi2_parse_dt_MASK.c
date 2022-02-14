
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct v4l2_fwnode_endpoint {int bus_type; } ;
struct TYPE_10__ {int * ops; } ;
struct TYPE_9__ {int fwnode; } ;
struct TYPE_11__ {TYPE_1__ match; int match_type; } ;
struct rcar_csi2 {TYPE_2__ notifier; int subdev; TYPE_6__ asd; TYPE_7__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_12__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_7__*,char*,int ) ;
 int FUNC_1 (TYPE_7__*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device_node*) ;
 struct device_node* FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct device_node*) ;
 int VAR_2 ;
 int FUNC_7 (struct rcar_csi2*,struct v4l2_fwnode_endpoint*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,TYPE_6__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int *,TYPE_2__*) ;
 int FUNC_13 (int ,struct v4l2_fwnode_endpoint*) ;

__attribute__((used)) static int FUNC_14(struct rcar_csi2 *VAR_3)
{
 struct device_node *VAR_4;
 struct v4l2_fwnode_endpoint VAR_5 = { .bus_type = 0 };
 int VAR_6;

 VAR_4 = FUNC_5(VAR_3->dev->of_node, 0, 0);
 if (!VAR_4) {
  FUNC_1(VAR_3->dev, "Not connected to subdevice\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_13(FUNC_4(VAR_4), &VAR_5);
 if (VAR_6) {
  FUNC_1(VAR_3->dev, "Could not parse v4l2 endpoint\n");
  FUNC_6(VAR_4);
  return -VAR_0;
 }

 VAR_6 = FUNC_7(VAR_3, &VAR_5);
 if (VAR_6) {
  FUNC_6(VAR_4);
  return VAR_6;
 }

 VAR_3->asd.match.fwnode =
  FUNC_2(FUNC_4(VAR_4));
 VAR_3->asd.match_type = VAR_1;

 FUNC_6(VAR_4);

 FUNC_11(&VAR_3->notifier);

 VAR_6 = FUNC_9(&VAR_3->notifier, &VAR_3->asd);
 if (VAR_6) {
  FUNC_3(VAR_3->asd.match.fwnode);
  return VAR_6;
 }

 VAR_3->notifier.ops = &VAR_2;

 FUNC_0(VAR_3->dev, "Found '%pOF'\n",
  FUNC_8(VAR_3->asd.match.fwnode));

 VAR_6 = FUNC_12(&VAR_3->subdev,
        &VAR_3->notifier);
 if (VAR_6)
  FUNC_10(&VAR_3->notifier);

 return VAR_6;
}
