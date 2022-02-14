
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {struct cx25821_channel* drv_priv; } ;
struct device {int dummy; } ;
struct cx25821_channel {int width; int height; TYPE_1__* fmt; } ;
struct TYPE_2__ {int depth; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct vb2_queue *VAR_1,
      unsigned int *VAR_2, unsigned int *VAR_3,
      unsigned int VAR_4[], struct device *VAR_5[])
{
 struct cx25821_channel *VAR_6 = VAR_1->drv_priv;
 unsigned VAR_7 = (VAR_6->fmt->depth * VAR_6->width * VAR_6->height) >> 3;

 if (*VAR_3)
  return VAR_4[0] < VAR_7 ? -VAR_0 : 0;

 *VAR_3 = 1;
 VAR_4[0] = VAR_7;
 return 0;
}
