
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_subdev {int name; } ;
struct TYPE_4__ {scalar_t__ fwnode; } ;
struct v4l2_async_subdev {TYPE_1__ match; } ;
struct v4l2_async_notifier {int v4l2_dev; } ;
struct rvin_dev {TYPE_3__* group; } ;
struct TYPE_6__ {int lock; TYPE_2__* csi; scalar_t__* vin; } ;
struct TYPE_5__ {scalar_t__ fwnode; int * subdev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 struct rvin_dev* FUNC_3 (int ) ;
 int FUNC_4 (struct rvin_dev*,char*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct v4l2_async_notifier *VAR_2,
         struct v4l2_subdev *VAR_3,
         struct v4l2_async_subdev *VAR_4)
{
 struct rvin_dev *VAR_5 = FUNC_3(VAR_2->v4l2_dev);
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  if (VAR_5->group->vin[VAR_6])
   FUNC_2(VAR_5->group->vin[VAR_6]);

 FUNC_0(&VAR_5->group->lock);

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (VAR_5->group->csi[VAR_6].fwnode != VAR_4->match.fwnode)
   continue;
  VAR_5->group->csi[VAR_6].subdev = ((void*)0);
  FUNC_4(VAR_5, "Unbind CSI-2 %s from slot %u\n", VAR_3->name, VAR_6);
  break;
 }

 FUNC_1(&VAR_5->group->lock);
}
