
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int port; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_8__ {TYPE_1__ parallel; } ;
struct v4l2_fwnode_endpoint {scalar_t__ bus_type; TYPE_3__ base; TYPE_2__ bus; } ;
struct fimc_source_info {int mux_id; int sensor_bus_type; int fimc_bus_type; int flags; } ;
struct fimc_md {int num_sensors; TYPE_6__* sensor; int subdev_notifier; int v4l2_dev; } ;
struct device_node {int dummy; } ;
struct TYPE_10__ {int fwnode; } ;
struct TYPE_11__ {TYPE_4__ match; int match_type; } ;
struct TYPE_12__ {TYPE_5__ asd; struct fimc_source_info pdata; } ;


 unsigned int FUNC_0 (TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct device_node*) ;
 struct device_node* FUNC_5 (struct device_node*,int *) ;
 struct device_node* FUNC_6 (struct device_node*) ;
 struct device_node* FUNC_7 (struct device_node*) ;
 scalar_t__ FUNC_8 (struct device_node*,char*) ;
 int FUNC_9 (struct device_node*) ;
 int FUNC_10 (int *,TYPE_5__*) ;
 int FUNC_11 (int *,char*,int,struct device_node*) ;
 int FUNC_12 (int ,struct v4l2_fwnode_endpoint*) ;
 int FUNC_13 (int *,char*,struct device_node*) ;

__attribute__((used)) static int FUNC_14(struct fimc_md *VAR_8,
       struct device_node *VAR_9,
       unsigned int VAR_10)
{
 struct fimc_source_info *VAR_11 = &VAR_8->sensor[VAR_10].pdata;
 struct device_node *VAR_12, *VAR_13, *VAR_14;
 struct v4l2_fwnode_endpoint VAR_15 = { .bus_type = 0 };
 int VAR_16;


 VAR_13 = FUNC_5(VAR_9, ((void*)0));
 if (!VAR_13)
  return 0;

 VAR_16 = FUNC_12(FUNC_4(VAR_13), &VAR_15);
 if (VAR_16) {
  FUNC_9(VAR_13);
  return VAR_16;
 }

 if (FUNC_1(VAR_15.base.port == 0) || VAR_10 >= VAR_5) {
  FUNC_9(VAR_13);
  return -VAR_0;
 }

 VAR_11->mux_id = (VAR_15.base.port - 1) & 0x1;

 VAR_12 = FUNC_7(VAR_13);
 FUNC_9(VAR_13);
 if (VAR_12 == ((void*)0)) {
  FUNC_13(&VAR_8->v4l2_dev, "Remote device at %pOF not found\n",
       VAR_13);
  return 0;
 }

 if (FUNC_3(VAR_15.base.port)) {
  if (VAR_15.bus_type == VAR_7)
   VAR_11->sensor_bus_type = VAR_2;
  else
   VAR_11->sensor_bus_type = VAR_3;
  VAR_11->flags = VAR_15.bus.parallel.flags;
 } else if (FUNC_2(VAR_15.base.port)) {




  VAR_11->sensor_bus_type = VAR_4;
 } else {
  FUNC_11(&VAR_8->v4l2_dev, "Wrong port id (%u) at node %pOF\n",
    VAR_15.base.port, VAR_12);
 }
 VAR_14 = FUNC_6(VAR_12);

 if (FUNC_8(VAR_14, "i2c-isp"))
  VAR_11->fimc_bus_type = VAR_1;
 else
  VAR_11->fimc_bus_type = VAR_11->sensor_bus_type;
 FUNC_9(VAR_14);

 if (FUNC_1(VAR_10 >= FUNC_0(VAR_8->sensor))) {
  FUNC_9(VAR_12);
  return -VAR_0;
 }

 VAR_8->sensor[VAR_10].asd.match_type = VAR_6;
 VAR_8->sensor[VAR_10].asd.match.fwnode = FUNC_4(VAR_12);

 VAR_16 = FUNC_10(&VAR_8->subdev_notifier,
          &VAR_8->sensor[VAR_10].asd);
 if (VAR_16) {
  FUNC_9(VAR_12);
  return VAR_16;
 }

 VAR_8->num_sensors++;

 return 0;
}
