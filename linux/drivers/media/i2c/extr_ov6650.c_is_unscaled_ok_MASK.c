
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_rect {int width; int height; } ;



__attribute__((used)) static bool FUNC_0(int VAR_0, int VAR_1, struct v4l2_rect *VAR_2)
{
 return VAR_0 > VAR_2->width >> 1 || VAR_1 > VAR_2->height >> 1;
}
