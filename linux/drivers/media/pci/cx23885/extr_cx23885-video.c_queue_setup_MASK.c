
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {struct cx23885_dev* drv_priv; } ;
struct device {int dummy; } ;
struct cx23885_dev {int width; int height; TYPE_1__* fmt; } ;
struct TYPE_2__ {int depth; } ;



__attribute__((used)) static int FUNC_0(struct vb2_queue *VAR_0,
      unsigned int *VAR_1, unsigned int *VAR_2,
      unsigned int VAR_3[], struct device *VAR_4[])
{
 struct cx23885_dev *VAR_5 = VAR_0->drv_priv;

 *VAR_2 = 1;
 VAR_3[0] = (VAR_5->fmt->depth * VAR_5->width * VAR_5->height) >> 3;
 return 0;
}
