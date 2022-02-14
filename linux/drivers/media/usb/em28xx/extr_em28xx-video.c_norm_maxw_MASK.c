
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct em28xx_v4l2 {unsigned int sensor_xres; } ;
struct TYPE_2__ {scalar_t__ max_range_640_480; } ;
struct em28xx {TYPE_1__ board; scalar_t__ is_webcam; struct em28xx_v4l2* v4l2; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct em28xx *VAR_0)
{
 struct em28xx_v4l2 *VAR_1 = VAR_0->v4l2;

 if (VAR_0->is_webcam)
  return VAR_1->sensor_xres;

 if (VAR_0->board.max_range_640_480)
  return 640;

 return 720;
}
