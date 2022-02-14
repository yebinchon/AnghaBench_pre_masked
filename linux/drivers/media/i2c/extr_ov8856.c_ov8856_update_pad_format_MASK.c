
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_framefmt {int field; int code; int height; int width; } ;
struct ov8856_mode {int height; int width; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(const struct ov8856_mode *VAR_2,
         struct v4l2_mbus_framefmt *VAR_3)
{
 VAR_3->width = VAR_2->width;
 VAR_3->height = VAR_2->height;
 VAR_3->code = VAR_0;
 VAR_3->field = VAR_1;
}
