
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {unsigned int num_buffers; } ;
struct tw686x_video_channel {int width; int height; TYPE_1__* format; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int depth; } ;


 int VAR_0 ;
 struct tw686x_video_channel* FUNC_0 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_1(struct vb2_queue *VAR_1,
         unsigned int *VAR_2, unsigned int *VAR_3,
         unsigned int VAR_4[], struct device *VAR_5[])
{
 struct tw686x_video_channel *VAR_6 = FUNC_0(VAR_1);
 unsigned int VAR_7 =
  (VAR_6->width * VAR_6->height * VAR_6->format->depth) >> 3;





 if (VAR_1->num_buffers + *VAR_2 < 3)
  *VAR_2 = 3 - VAR_1->num_buffers;

 if (*VAR_3) {
  if (*VAR_3 != 1 || VAR_4[0] < VAR_7)
   return -VAR_0;
  return 0;
 }

 VAR_4[0] = VAR_7;
 *VAR_3 = 1;
 return 0;
}
