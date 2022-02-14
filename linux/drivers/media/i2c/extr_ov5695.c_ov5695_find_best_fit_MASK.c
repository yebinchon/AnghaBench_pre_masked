
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_framefmt {int dummy; } ;
struct v4l2_subdev_format {struct v4l2_mbus_framefmt format; } ;
struct ov5695_mode {int dummy; } ;


 int FUNC_0 (struct ov5695_mode const*) ;
 int FUNC_1 (struct ov5695_mode const*,struct v4l2_mbus_framefmt*) ;
 struct ov5695_mode const* VAR_0 ;

__attribute__((used)) static const struct ov5695_mode *
FUNC_2(struct v4l2_subdev_format *VAR_1)
{
 struct v4l2_mbus_framefmt *VAR_2 = &VAR_1->format;
 int VAR_3;
 int VAR_4 = 0;
 int VAR_5 = -1;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
  VAR_3 = FUNC_1(&VAR_0[VAR_6], VAR_2);
  if (VAR_5 == -1 || VAR_3 < VAR_5) {
   VAR_5 = VAR_3;
   VAR_4 = VAR_6;
  }
 }

 return &VAR_0[VAR_4];
}
