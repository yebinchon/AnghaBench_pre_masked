
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {TYPE_1__* asd; struct v4l2_async_notifier* notifier; int * subdev_notifier; } ;
struct v4l2_async_notifier {int waiting; } ;
struct TYPE_2__ {int list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct v4l2_subdev*) ;
 int FUNC_7 (struct v4l2_async_notifier*,struct v4l2_subdev*,TYPE_1__*) ;

void FUNC_8(struct v4l2_subdev *VAR_1)
{
 FUNC_4(&VAR_0);

 FUNC_1(VAR_1->subdev_notifier);
 FUNC_0(VAR_1->subdev_notifier);
 FUNC_2(VAR_1->subdev_notifier);
 VAR_1->subdev_notifier = ((void*)0);

 if (VAR_1->asd) {
  struct v4l2_async_notifier *VAR_2 = VAR_1->notifier;

  FUNC_3(&VAR_1->asd->list, &VAR_2->waiting);

  FUNC_7(VAR_2, VAR_1, VAR_1->asd);
 }

 FUNC_6(VAR_1);

 FUNC_5(&VAR_0);
}
