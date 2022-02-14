
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {unsigned int num_buffers; } ;
struct tw68_dev {int width; int height; TYPE_1__* fmt; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int depth; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 struct tw68_dev* FUNC_1 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_2(struct vb2_queue *VAR_1,
      unsigned int *VAR_2, unsigned int *VAR_3,
      unsigned int VAR_4[], struct device *VAR_5[])
{
 struct tw68_dev *VAR_6 = FUNC_1(VAR_1);
 unsigned VAR_7 = VAR_1->num_buffers + *VAR_2;
 unsigned VAR_8 = (VAR_6->fmt->depth * VAR_6->width * VAR_6->height) >> 3;

 if (VAR_7 < 2)
  VAR_7 = 2;
 VAR_7 = FUNC_0(VAR_8, VAR_7);
 *VAR_2 = VAR_7 - VAR_1->num_buffers;





 if (*VAR_3)
  return VAR_4[0] < VAR_8 ? -VAR_0 : 0;
 *VAR_3 = 1;
 VAR_4[0] = VAR_8;

 return 0;
}
