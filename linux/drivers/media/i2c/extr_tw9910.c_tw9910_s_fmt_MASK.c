
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {scalar_t__ field; scalar_t__ code; void* height; void* width; int colorspace; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct v4l2_subdev*,void**,void**) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_5,
   struct v4l2_mbus_framefmt *VAR_6)
{
 u32 VAR_7 = VAR_6->width, VAR_8 = VAR_6->height;
 int VAR_9;

 FUNC_0(VAR_6->field != VAR_3 &&
  VAR_6->field != VAR_4);


 if (VAR_6->code != VAR_1)
  return -VAR_0;

 VAR_6->colorspace = VAR_2;

 VAR_9 = FUNC_1(VAR_5, &VAR_7, &VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_6->width = VAR_7;
 VAR_6->height = VAR_8;

 return 0;
}
