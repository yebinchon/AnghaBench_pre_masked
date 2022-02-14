
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_mbus_framefmt {int field; int colorspace; int code; int height; int width; } ;
struct s5c73m3_frame_size {int height; int width; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct v4l2_mbus_framefmt *VAR_2,
      const struct s5c73m3_frame_size *VAR_3,
      u32 VAR_4)
{
 VAR_2->width = VAR_3->width;
 VAR_2->height = VAR_3->height;
 VAR_2->code = VAR_4;
 VAR_2->colorspace = VAR_0;
 VAR_2->field = VAR_1;
}
