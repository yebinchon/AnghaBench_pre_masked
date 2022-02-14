
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {scalar_t__ code; } ;
struct noon010_format {scalar_t__ code; } ;


 int FUNC_0 (struct noon010_format const*) ;
 struct noon010_format const* VAR_0 ;

__attribute__((used)) static const struct noon010_format *FUNC_1(struct v4l2_subdev *VAR_1,
         struct v4l2_mbus_framefmt *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0);

 while (--VAR_3)
  if (VAR_2->code == VAR_0[VAR_3].code)
   break;
 VAR_2->code = VAR_0[VAR_3].code;

 return &VAR_0[VAR_3];
}
