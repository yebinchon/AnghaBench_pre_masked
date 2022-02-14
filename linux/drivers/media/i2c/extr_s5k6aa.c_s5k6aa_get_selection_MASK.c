
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_rect {int height; int width; int top; int left; } ;
struct v4l2_subdev_selection {scalar_t__ target; struct v4l2_rect r; int which; int reserved; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct s5k6aa {int lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct v4l2_rect* FUNC_0 (struct s5k6aa*,struct v4l2_subdev_pad_config*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct s5k6aa* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (int,int ,struct v4l2_subdev*,char*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_3,
    struct v4l2_subdev_pad_config *VAR_4,
    struct v4l2_subdev_selection *VAR_5)
{
 struct s5k6aa *VAR_6 = FUNC_4(VAR_3);
 struct v4l2_rect *VAR_7;

 if (VAR_5->target != VAR_1)
  return -VAR_0;

 FUNC_1(VAR_5->reserved, 0, sizeof(VAR_5->reserved));

 FUNC_2(&VAR_6->lock);
 VAR_7 = FUNC_0(VAR_6, VAR_4, VAR_5->which);
 VAR_5->r = *VAR_7;
 FUNC_3(&VAR_6->lock);

 FUNC_5(1, VAR_2, VAR_3, "Current crop rectangle: (%d,%d)/%dx%d\n",
   VAR_7->left, VAR_7->top, VAR_7->width, VAR_7->height);

 return 0;
}
