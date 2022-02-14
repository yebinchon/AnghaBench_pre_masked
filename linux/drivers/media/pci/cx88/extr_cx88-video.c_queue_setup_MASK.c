
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {struct cx8800_dev* drv_priv; } ;
struct device {int dummy; } ;
struct cx88_core {int width; int height; } ;
struct cx8800_dev {TYPE_1__* fmt; struct cx88_core* core; } ;
struct TYPE_2__ {int depth; } ;



__attribute__((used)) static int FUNC_0(struct vb2_queue *VAR_0,
         unsigned int *VAR_1, unsigned int *VAR_2,
         unsigned int VAR_3[], struct device *VAR_4[])
{
 struct cx8800_dev *VAR_5 = VAR_0->drv_priv;
 struct cx88_core *VAR_6 = VAR_5->core;

 *VAR_2 = 1;
 VAR_3[0] = (VAR_5->fmt->depth * VAR_6->width * VAR_6->height) >> 3;
 return 0;
}
