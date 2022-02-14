
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_subdev {int name; int grp_id; TYPE_3__* dev; } ;
struct v4l2_async_subdev {int dummy; } ;
struct v4l2_async_notifier {int dummy; } ;
struct TYPE_8__ {scalar_t__ fimc_bus_type; } ;
struct TYPE_5__ {scalar_t__ fwnode; } ;
struct TYPE_6__ {TYPE_1__ match; } ;
struct fimc_sensor_info {struct v4l2_subdev* subdev; TYPE_4__ pdata; TYPE_2__ asd; } ;
struct fimc_md {int num_sensors; int v4l2_dev; struct fimc_sensor_info* sensor; } ;
struct TYPE_7__ {int of_node; } ;


 int FUNC_0 (struct fimc_sensor_info*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct fimc_md* FUNC_1 (struct v4l2_async_notifier*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int ,int ) ;
 int FUNC_4 (struct v4l2_subdev*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_async_notifier *VAR_4,
     struct v4l2_subdev *VAR_5,
     struct v4l2_async_subdev *VAR_6)
{
 struct fimc_md *VAR_7 = FUNC_1(VAR_4);
 struct fimc_sensor_info *VAR_8 = ((void*)0);
 int VAR_9;


 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_7->sensor); VAR_9++)
  if (VAR_7->sensor[VAR_9].asd.match.fwnode ==
      FUNC_2(VAR_5->dev->of_node))
   VAR_8 = &VAR_7->sensor[VAR_9];

 if (VAR_8 == ((void*)0))
  return -VAR_0;

 FUNC_4(VAR_5, &VAR_8->pdata);

 if (VAR_8->pdata.fimc_bus_type == VAR_1)
  VAR_5->grp_id = VAR_2;
 else
  VAR_5->grp_id = VAR_3;

 VAR_8->subdev = VAR_5;

 FUNC_3(&VAR_7->v4l2_dev, "Registered sensor subdevice: %s (%d)\n",
    VAR_5->name, VAR_7->num_sensors);

 VAR_7->num_sensors++;

 return 0;
}
