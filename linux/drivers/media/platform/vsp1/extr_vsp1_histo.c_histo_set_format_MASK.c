
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_histogram {int num_formats; int formats; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_format {scalar_t__ pad; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_format*) ;
 struct vsp1_histogram* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_format*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_3,
       struct v4l2_subdev_pad_config *VAR_4,
       struct v4l2_subdev_format *VAR_5)
{
 struct vsp1_histogram *VAR_6 = FUNC_1(VAR_3);

 if (VAR_5->pad != VAR_2)
  return FUNC_0(VAR_3, VAR_4, VAR_5);

 return FUNC_2(VAR_3, VAR_4, VAR_5,
       VAR_6->formats, VAR_6->num_formats,
       VAR_1, VAR_1,
       VAR_0, VAR_0);
}
