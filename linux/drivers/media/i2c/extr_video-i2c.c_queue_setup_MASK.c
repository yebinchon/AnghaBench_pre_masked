
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_i2c_data {TYPE_1__* chip; } ;
struct vb2_queue {unsigned int num_buffers; } ;
struct device {int dummy; } ;
struct TYPE_2__ {unsigned int buffer_size; } ;


 int VAR_0 ;
 struct video_i2c_data* FUNC_0 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_1(struct vb2_queue *VAR_1,
         unsigned int *VAR_2, unsigned int *VAR_3,
         unsigned int VAR_4[], struct device *VAR_5[])
{
 struct video_i2c_data *VAR_6 = FUNC_0(VAR_1);
 unsigned int VAR_7 = VAR_6->chip->buffer_size;

 if (VAR_1->num_buffers + *VAR_2 < 2)
  *VAR_2 = 2;

 if (*VAR_3)
  return VAR_4[0] < VAR_7 ? -VAR_0 : 0;

 *VAR_3 = 1;
 VAR_4[0] = VAR_7;

 return 0;
}
