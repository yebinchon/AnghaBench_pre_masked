
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_selection {scalar_t__ target; int which; int pad; int r; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct mt9t001 {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (struct mt9t001*,struct v4l2_subdev_pad_config*,int ,int ) ;
 struct mt9t001* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_2,
     struct v4l2_subdev_pad_config *VAR_3,
     struct v4l2_subdev_selection *VAR_4)
{
 struct mt9t001 *VAR_5 = FUNC_1(VAR_2);

 if (VAR_4->target != VAR_1)
  return -VAR_0;

 VAR_4->r = *FUNC_0(VAR_5, VAR_3, VAR_4->pad, VAR_4->which);
 return 0;
}
