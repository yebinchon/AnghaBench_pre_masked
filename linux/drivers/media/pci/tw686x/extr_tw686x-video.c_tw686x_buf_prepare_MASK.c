
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_buffer {int vb2_queue; } ;
struct tw686x_video_channel {int width; int height; TYPE_1__* format; } ;
struct TYPE_2__ {int depth; } ;


 int VAR_0 ;
 struct tw686x_video_channel* FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct vb2_buffer*,int ) ;
 int FUNC_2 (struct vb2_buffer*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct vb2_buffer *VAR_1)
{
 struct tw686x_video_channel *VAR_2 = FUNC_0(VAR_1->vb2_queue);
 unsigned int VAR_3 =
  (VAR_2->width * VAR_2->height * VAR_2->format->depth) >> 3;

 if (FUNC_1(VAR_1, 0) < VAR_3)
  return -VAR_0;
 FUNC_2(VAR_1, 0, VAR_3);
 return 0;
}
