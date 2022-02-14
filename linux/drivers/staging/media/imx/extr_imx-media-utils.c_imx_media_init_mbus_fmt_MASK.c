
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct v4l2_mbus_framefmt {scalar_t__ code; scalar_t__ field; scalar_t__ height; scalar_t__ width; } ;
struct imx_media_pixfmt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__*,int ,int ,int) ;
 struct imx_media_pixfmt* FUNC_1 (scalar_t__,int ) ;
 struct imx_media_pixfmt* FUNC_2 (scalar_t__,int ,int) ;
 int FUNC_3 (struct v4l2_mbus_framefmt*,struct imx_media_pixfmt const*) ;

int FUNC_4(struct v4l2_mbus_framefmt *VAR_3,
       u32 VAR_4, u32 VAR_5, u32 VAR_6, u32 VAR_7,
       const struct imx_media_pixfmt **VAR_8)
{
 const struct imx_media_pixfmt *VAR_9;

 VAR_3->width = VAR_4;
 VAR_3->height = VAR_5;
 VAR_3->field = VAR_7;
 if (VAR_6 == 0)
  FUNC_0(&VAR_6, 0, VAR_1, 0);
 VAR_9 = FUNC_2(VAR_6, VAR_0, 0);
 if (!VAR_9) {
  VAR_9 = FUNC_1(VAR_6, VAR_0);
  if (!VAR_9)
   return -VAR_2;
 }

 VAR_3->code = VAR_6;
 FUNC_3(VAR_3, VAR_9);
 if (VAR_8)
  *VAR_8 = VAR_9;

 return 0;
}
