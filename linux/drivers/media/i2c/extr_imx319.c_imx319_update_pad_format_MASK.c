
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int field; int code; int height; int width; } ;
struct v4l2_subdev_format {TYPE_1__ format; } ;
struct imx319_mode {int height; int width; } ;
struct imx319 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct imx319*) ;

__attribute__((used)) static void FUNC_1(struct imx319 *VAR_1,
         const struct imx319_mode *VAR_2,
         struct v4l2_subdev_format *VAR_3)
{
 VAR_3->format.width = VAR_2->width;
 VAR_3->format.height = VAR_2->height;
 VAR_3->format.code = FUNC_0(VAR_1);
 VAR_3->format.field = VAR_0;
}
