
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_hsit {scalar_t__ inverse; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {scalar_t__ index; scalar_t__ pad; int code; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct vsp1_hsit* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_5,
          struct v4l2_subdev_pad_config *VAR_6,
          struct v4l2_subdev_mbus_code_enum *VAR_7)
{
 struct vsp1_hsit *VAR_8 = FUNC_0(VAR_5);

 if (VAR_7->index > 0)
  return -VAR_0;

 if ((VAR_7->pad == VAR_1 && !VAR_8->inverse) |
     (VAR_7->pad == VAR_2 && VAR_8->inverse))
  VAR_7->code = VAR_4;
 else
  VAR_7->code = VAR_3;

 return 0;
}
