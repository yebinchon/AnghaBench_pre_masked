
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int async_list; struct v4l2_async_notifier* notifier; struct v4l2_async_subdev* asd; } ;
struct v4l2_device {int dummy; } ;
struct v4l2_async_subdev {int list; } ;
struct v4l2_async_notifier {struct v4l2_async_notifier* parent; int done; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 struct v4l2_async_notifier* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct v4l2_async_notifier*,struct v4l2_subdev*,struct v4l2_async_subdev*) ;
 int FUNC_4 (struct v4l2_async_notifier*) ;
 int FUNC_5 (struct v4l2_device*,struct v4l2_subdev*) ;
 int FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct v4l2_async_notifier *VAR_0,
       struct v4l2_device *VAR_1,
       struct v4l2_subdev *VAR_2,
       struct v4l2_async_subdev *VAR_3)
{
 struct v4l2_async_notifier *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_5(VAR_1, VAR_2);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_3(VAR_0, VAR_2, VAR_3);
 if (VAR_5 < 0) {
  FUNC_6(VAR_2);
  return VAR_5;
 }


 FUNC_0(&VAR_3->list);
 VAR_2->asd = VAR_3;
 VAR_2->notifier = VAR_0;


 FUNC_1(&VAR_2->async_list, &VAR_0->done);




 VAR_4 = FUNC_2(VAR_2);
 if (!VAR_4 || VAR_4->parent)
  return 0;






 VAR_4->parent = VAR_0;

 return FUNC_4(VAR_4);
}
