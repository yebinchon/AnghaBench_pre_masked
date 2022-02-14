
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_framefmt {int field; int colorspace; int code; int height; int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct v4l2_mbus_framefmt *VAR_5)
{
 VAR_5->width = VAR_2;
 VAR_5->height = VAR_1;
 VAR_5->code = VAR_0;
 VAR_5->colorspace = VAR_3;
 VAR_5->field = VAR_4;
}
