
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vimc_deb_pix_map {int dummy; } ;
struct vimc_deb_device {scalar_t__ src_code; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_size_enum {scalar_t__ code; int max_height; int min_height; int max_width; int min_width; int pad; scalar_t__ index; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct vimc_deb_device* FUNC_1 (struct v4l2_subdev*) ;
 struct vimc_deb_pix_map* FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_5,
        struct v4l2_subdev_pad_config *VAR_6,
        struct v4l2_subdev_frame_size_enum *VAR_7)
{
 struct vimc_deb_device *VAR_8 = FUNC_1(VAR_5);

 if (VAR_7->index)
  return -VAR_0;

 if (FUNC_0(VAR_7->pad)) {
  const struct vimc_deb_pix_map *VAR_9 =
   FUNC_2(VAR_7->code);

  if (!VAR_9)
   return -VAR_0;
 } else if (VAR_7->code != VAR_8->src_code) {
  return -VAR_0;
 }

 VAR_7->min_width = VAR_4;
 VAR_7->max_width = VAR_2;
 VAR_7->min_height = VAR_3;
 VAR_7->max_height = VAR_1;

 return 0;
}
