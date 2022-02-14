
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int sizeimage; } ;
struct vpbe_layer {TYPE_1__ pix_fmt; TYPE_2__* disp_dev; } ;
struct vpbe_device {int v4l2_dev; } ;
struct vb2_queue {scalar_t__ num_buffers; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct vpbe_device* vpbe_dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int *,char*) ;
 struct vpbe_layer* FUNC_1 (struct vb2_queue*) ;

__attribute__((used)) static int
FUNC_2(struct vb2_queue *VAR_3,
   unsigned int *VAR_4, unsigned int *VAR_5,
   unsigned int VAR_6[], struct device *VAR_7[])

{

 struct vpbe_layer *VAR_8 = FUNC_1(VAR_3);
 struct vpbe_device *VAR_9 = VAR_8->disp_dev->vpbe_dev;

 FUNC_0(1, VAR_2, &VAR_9->v4l2_dev, "vpbe_buffer_setup\n");


 if (VAR_3->num_buffers + *VAR_4 < VAR_1)
  *VAR_4 = VAR_1 - VAR_3->num_buffers;

 if (*VAR_5)
  return VAR_6[0] < VAR_8->pix_fmt.sizeimage ? -VAR_0 : 0;

 *VAR_5 = 1;
 VAR_6[0] = VAR_8->pix_fmt.sizeimage;

 return 0;
}
