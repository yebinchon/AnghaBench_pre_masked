
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct em28xx_v4l2 {int width; int height; TYPE_1__* format; } ;
struct em28xx {struct em28xx_v4l2* v4l2; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int depth; } ;


 int VAR_0 ;
 int FUNC_0 (struct em28xx*) ;
 struct em28xx* FUNC_1 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_2(struct vb2_queue *VAR_1,
         unsigned int *VAR_2, unsigned int *VAR_3,
         unsigned int VAR_4[], struct device *VAR_5[])
{
 struct em28xx *VAR_6 = FUNC_1(VAR_1);
 struct em28xx_v4l2 *VAR_7 = VAR_6->v4l2;
 unsigned long VAR_8 =
      (VAR_7->width * VAR_7->height * VAR_7->format->depth + 7) >> 3;

 if (*VAR_3)
  return VAR_4[0] < VAR_8 ? -VAR_0 : 0;
 *VAR_3 = 1;
 VAR_4[0] = VAR_8;

 FUNC_0(VAR_6);

 return 0;
}
