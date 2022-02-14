
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_mbus_code_enum {int index; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_device {int dummy; } ;
struct pxa_camera_format_xlate {scalar_t__ code; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pxa_camera_format_xlate* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct pxa_camera_format_xlate* FUNC_1 (unsigned int,int,int ) ;
 int FUNC_2 (struct pxa_camera_format_xlate*) ;
 int VAR_5 ;
 int FUNC_3 (struct v4l2_subdev*,int ,int ,int *,struct v4l2_subdev_mbus_code_enum*) ;

__attribute__((used)) static struct pxa_camera_format_xlate *FUNC_4(
 struct v4l2_device *VAR_6, struct v4l2_subdev *VAR_7,
 int (*VAR_8)(struct v4l2_device *, unsigned int,
      struct pxa_camera_format_xlate *VAR_9))
{
 unsigned int VAR_10, VAR_11 = 0, VAR_12 = 0;
 int VAR_13;
 struct v4l2_subdev_mbus_code_enum VAR_14 = {
  .which = VAR_3,
 };
 struct pxa_camera_format_xlate *VAR_15;

 while (!FUNC_3(VAR_7, VAR_5, VAR_4, ((void*)0), &VAR_14)) {
  VAR_12++;
  VAR_14.index++;
 }





 for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
  VAR_13 = VAR_8(VAR_6, VAR_10, ((void*)0));
  if (VAR_13 < 0)
   return FUNC_0(VAR_13);
  VAR_11 += VAR_13;
 }

 if (!VAR_11)
  return FUNC_0(-VAR_1);

 VAR_15 = FUNC_1(VAR_11 + 1, sizeof(*VAR_15), VAR_2);
 if (!VAR_15)
  return FUNC_0(-VAR_0);


 VAR_11 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
  VAR_13 = VAR_8(VAR_6, VAR_10, VAR_15 + VAR_11);
  if (VAR_13 < 0)
   goto egfmt;
  VAR_11 += VAR_13;
 }
 VAR_15[VAR_11].code = 0;

 return VAR_15;
egfmt:
 FUNC_2(VAR_15);
 return FUNC_0(VAR_13);
}
