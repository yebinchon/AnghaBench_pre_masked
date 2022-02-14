
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_mbus_framefmt {int code; int height; int width; } ;
struct TYPE_2__ {int bus_format; int window_height; int window_width; } ;
struct et8ek8_reglist {TYPE_1__ mode; } ;



__attribute__((used)) static void FUNC_0(const struct et8ek8_reglist *VAR_0,
       struct v4l2_mbus_framefmt *VAR_1)
{
 VAR_1->width = VAR_0->mode.window_width;
 VAR_1->height = VAR_0->mode.window_height;
 VAR_1->code = VAR_0->mode.bus_format;
}
