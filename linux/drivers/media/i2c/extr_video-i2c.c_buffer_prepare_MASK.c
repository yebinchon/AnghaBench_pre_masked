
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_i2c_data {TYPE_1__* chip; } ;
struct vb2_v4l2_buffer {int field; } ;
struct vb2_buffer {int vb2_queue; } ;
struct TYPE_2__ {unsigned int buffer_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vb2_v4l2_buffer* FUNC_0 (struct vb2_buffer*) ;
 struct video_i2c_data* FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct vb2_buffer*,int ) ;
 int FUNC_3 (struct vb2_buffer*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct vb2_buffer *VAR_2)
{
 struct vb2_v4l2_buffer *VAR_3 = FUNC_0(VAR_2);
 struct video_i2c_data *VAR_4 = FUNC_1(VAR_2->vb2_queue);
 unsigned int VAR_5 = VAR_4->chip->buffer_size;

 if (FUNC_2(VAR_2, 0) < VAR_5)
  return -VAR_0;

 VAR_3->field = VAR_1;
 FUNC_3(VAR_2, 0, VAR_5);

 return 0;
}
