
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int name; } ;
struct v4l2_async_subdev {int dummy; } ;
struct v4l2_async_notifier {int v4l2_dev; } ;
struct rvin_dev {TYPE_1__* parallel; int lock; } ;
struct TYPE_2__ {int sink_pad; int source_pad; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rvin_dev*,struct v4l2_subdev*) ;
 struct rvin_dev* FUNC_3 (int ) ;
 int FUNC_4 (struct v4l2_subdev*,struct rvin_dev*) ;
 int FUNC_5 (struct rvin_dev*,char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct v4l2_async_notifier *VAR_0,
          struct v4l2_subdev *VAR_1,
          struct v4l2_async_subdev *VAR_2)
{
 struct rvin_dev *VAR_3 = FUNC_3(VAR_0->v4l2_dev);
 int VAR_4;

 FUNC_0(&VAR_3->lock);
 VAR_4 = FUNC_2(VAR_3, VAR_1);
 FUNC_1(&VAR_3->lock);
 if (VAR_4)
  return VAR_4;

 FUNC_4(VAR_1, VAR_3);

 FUNC_5(VAR_3, "bound subdev %s source pad: %u sink pad: %u\n",
  VAR_1->name, VAR_3->parallel->source_pad,
  VAR_3->parallel->sink_pad);

 return 0;
}
