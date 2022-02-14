
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct v4l2_async_subdev {int dummy; } ;
struct rvin_dev {TYPE_2__* group; int v4l2_dev; } ;
struct TYPE_9__ {int * ops; int asd_list; } ;
struct TYPE_8__ {unsigned int count; TYPE_3__ notifier; TYPE_1__** vin; int lock; } ;
struct TYPE_7__ {int dev; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ,TYPE_3__*,int,int,int ) ;
 int FUNC_7 (int *,TYPE_3__*) ;
 int FUNC_8 (struct rvin_dev*,char*) ;

__attribute__((used)) static int FUNC_9(struct rvin_dev *VAR_3)
{
 unsigned int VAR_4 = 0, VAR_5 = 0;
 unsigned int VAR_6;
 int VAR_7;

 FUNC_2(&VAR_3->group->lock);


 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_3->group->vin[VAR_6]) {
   VAR_4++;
   VAR_5 |= FUNC_0(VAR_6);
  }
 }

 if (VAR_3->group->count != VAR_4) {
  FUNC_3(&VAR_3->group->lock);
  return 0;
 }

 FUNC_3(&VAR_3->group->lock);

 FUNC_5(&VAR_3->group->notifier);






 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (!(VAR_5 & FUNC_0(VAR_6)))
   continue;

  VAR_7 = FUNC_6(
    VAR_3->group->vin[VAR_6]->dev, &VAR_3->group->notifier,
    sizeof(struct v4l2_async_subdev), 1,
    VAR_2);
  if (VAR_7)
   return VAR_7;
 }

 if (FUNC_1(&VAR_3->group->notifier.asd_list))
  return 0;

 VAR_3->group->notifier.ops = &VAR_1;
 VAR_7 = FUNC_7(&VAR_3->v4l2_dev,
        &VAR_3->group->notifier);
 if (VAR_7 < 0) {
  FUNC_8(VAR_3, "Notifier registration failed\n");
  FUNC_4(&VAR_3->group->notifier);
  return VAR_7;
 }

 return 0;
}
