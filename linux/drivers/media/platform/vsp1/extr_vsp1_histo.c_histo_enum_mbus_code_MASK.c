
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_histogram {int num_formats; int formats; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {scalar_t__ pad; int code; } ;
struct v4l2_subdev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct vsp1_histogram* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_mbus_code_enum*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_2,
    struct v4l2_subdev_pad_config *VAR_3,
    struct v4l2_subdev_mbus_code_enum *VAR_4)
{
 struct vsp1_histogram *VAR_5 = FUNC_0(VAR_2);

 if (VAR_4->pad == VAR_0) {
  VAR_4->code = VAR_1;
  return 0;
 }

 return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5->formats,
       VAR_5->num_formats);
}
