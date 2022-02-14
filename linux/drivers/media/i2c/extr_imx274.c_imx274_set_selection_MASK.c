
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ left; scalar_t__ top; int height; int width; } ;
struct v4l2_subdev_selection {scalar_t__ pad; scalar_t__ target; TYPE_1__ r; int flags; int which; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct stimx274 {int lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct stimx274*,struct v4l2_subdev_pad_config*,int ,int *,int *,int ) ;
 int FUNC_1 (struct stimx274*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_selection*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct stimx274* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_3,
    struct v4l2_subdev_pad_config *VAR_4,
    struct v4l2_subdev_selection *VAR_5)
{
 struct stimx274 *VAR_6 = FUNC_4(VAR_3);

 if (VAR_5->pad != 0)
  return -VAR_0;

 if (VAR_5->target == VAR_2)
  return FUNC_1(VAR_6, VAR_4, VAR_5);

 if (VAR_5->target == VAR_1) {
  int VAR_7;

  FUNC_2(&VAR_6->lock);
  VAR_7 = FUNC_0(VAR_6, VAR_4, VAR_5->which,
            &VAR_5->r.width, &VAR_5->r.height,
            VAR_5->flags);
  FUNC_3(&VAR_6->lock);





  if (!VAR_7) {
   VAR_5->r.top = 0;
   VAR_5->r.left = 0;
  }

  return VAR_7;
 }

 return -VAR_0;
}
