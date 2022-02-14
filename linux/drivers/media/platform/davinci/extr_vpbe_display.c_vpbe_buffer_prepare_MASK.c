
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sizeimage; } ;
struct vpbe_layer {TYPE_1__ pix_fmt; TYPE_2__* disp_dev; } ;
struct vpbe_device {int v4l2_dev; } ;
struct vb2_queue {int dummy; } ;
struct vb2_buffer {struct vb2_queue* vb2_queue; } ;
struct TYPE_4__ {struct vpbe_device* vpbe_dev; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,int) ;
 int VAR_1 ;
 int FUNC_1 (int,int ,int *,char*) ;
 int FUNC_2 (int *,char*) ;
 unsigned long FUNC_3 (struct vb2_buffer*,int ) ;
 struct vpbe_layer* FUNC_4 (struct vb2_queue*) ;
 scalar_t__ FUNC_5 (struct vb2_buffer*,int ) ;
 scalar_t__ FUNC_6 (struct vb2_buffer*,int ) ;
 int FUNC_7 (struct vb2_buffer*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct vb2_buffer *VAR_2)
{
 struct vb2_queue *VAR_3 = VAR_2->vb2_queue;
 struct vpbe_layer *VAR_4 = FUNC_4(VAR_3);
 struct vpbe_device *VAR_5 = VAR_4->disp_dev->vpbe_dev;
 unsigned long VAR_6;

 FUNC_1(1, VAR_1, &VAR_5->v4l2_dev,
    "vpbe_buffer_prepare\n");

 FUNC_7(VAR_2, 0, VAR_4->pix_fmt.sizeimage);
 if (FUNC_5(VAR_2, 0) > FUNC_6(VAR_2, 0))
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_2, 0);
 if (!FUNC_0(VAR_6, 8)) {
  FUNC_2(&VAR_5->v4l2_dev,
    "buffer_prepare:offset is not aligned to 32 bytes\n");
  return -VAR_0;
 }
 return 0;
}
