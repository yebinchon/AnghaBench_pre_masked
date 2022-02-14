
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_async_subdev {int asd_list; } ;
struct v4l2_async_notifier {int asd_list; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct v4l2_async_notifier*,struct v4l2_async_subdev*,int) ;

int FUNC_4(struct v4l2_async_notifier *VAR_1,
       struct v4l2_async_subdev *VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_0);

 VAR_3 = FUNC_3(VAR_1, VAR_2, -1);
 if (VAR_3)
  goto unlock;

 FUNC_0(&VAR_2->asd_list, &VAR_1->asd_list);

unlock:
 FUNC_2(&VAR_0);
 return VAR_3;
}
