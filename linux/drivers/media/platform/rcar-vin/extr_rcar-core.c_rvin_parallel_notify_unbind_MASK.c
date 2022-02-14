
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int name; } ;
struct v4l2_async_subdev {int dummy; } ;
struct v4l2_async_notifier {int v4l2_dev; } ;
struct rvin_dev {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rvin_dev*) ;
 struct rvin_dev* FUNC_3 (int ) ;
 int FUNC_4 (struct rvin_dev*,char*,int ) ;

__attribute__((used)) static void FUNC_5(struct v4l2_async_notifier *VAR_0,
     struct v4l2_subdev *VAR_1,
     struct v4l2_async_subdev *VAR_2)
{
 struct rvin_dev *VAR_3 = FUNC_3(VAR_0->v4l2_dev);

 FUNC_4(VAR_3, "unbind parallel subdev %s\n", VAR_1->name);

 FUNC_0(&VAR_3->lock);
 FUNC_2(VAR_3);
 FUNC_1(&VAR_3->lock);
}
