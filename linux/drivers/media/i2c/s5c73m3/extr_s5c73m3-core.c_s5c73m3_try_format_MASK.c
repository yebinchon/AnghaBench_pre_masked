
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_format {scalar_t__ pad; int format; } ;
struct s5c73m3_frame_size {int dummy; } ;
struct s5c73m3 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct s5c73m3_frame_size const*,int ) ;
 struct s5c73m3_frame_size* FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct s5c73m3 *VAR_5,
         struct v4l2_subdev_pad_config *VAR_6,
         struct v4l2_subdev_format *VAR_7,
         const struct s5c73m3_frame_size **VAR_8)
{
 u32 VAR_9;

 if (VAR_7->pad == VAR_3) {
  *VAR_8 = FUNC_1(&VAR_7->format, VAR_0);
  VAR_9 = VAR_2;
 } else {
  *VAR_8 = FUNC_1(&VAR_7->format, VAR_1);
  VAR_9 = VAR_4;
 }

 FUNC_0(&VAR_7->format, *VAR_8, VAR_9);
}
