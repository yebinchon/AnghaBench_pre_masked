
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vimc_pix_map {int dummy; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_size_enum {int max_height; int min_height; int max_width; int min_width; int code; scalar_t__ index; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct vimc_pix_map* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_5,
        struct v4l2_subdev_pad_config *VAR_6,
        struct v4l2_subdev_frame_size_enum *VAR_7)
{
 const struct vimc_pix_map *VAR_8;

 if (VAR_7->index)
  return -VAR_0;


 VAR_8 = FUNC_0(VAR_7->code);
 if (!VAR_8)
  return -VAR_0;

 VAR_7->min_width = VAR_4;
 VAR_7->max_width = VAR_2;
 VAR_7->min_height = VAR_3;
 VAR_7->max_height = VAR_1;

 return 0;
}
