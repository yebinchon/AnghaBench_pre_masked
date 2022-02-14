
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vip_buffer {int dummy; } ;
struct vb2_queue {int dummy; } ;
struct TYPE_5__ {int io_modes; int buf_struct_size; int * lock; int * dev; int timestamp_flags; int * mem_ops; int * ops; struct sta2x11_vip* drv_priv; int type; } ;
struct sta2x11_vip {int lock; int buffer_list; TYPE_2__ vb_vidq; int v4l_lock; TYPE_1__* pdev; int v4l2_dev; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(struct sta2x11_vip *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_2(&VAR_6->pdev->dev, FUNC_0(29));
 if (VAR_7) {
  FUNC_5(&VAR_6->v4l2_dev, "Cannot configure coherent mask");
  return VAR_7;
 }
 FUNC_3(&VAR_6->vb_vidq, 0, sizeof(struct vb2_queue));
 VAR_6->vb_vidq.type = VAR_1;
 VAR_6->vb_vidq.io_modes = VAR_2 | VAR_3;
 VAR_6->vb_vidq.drv_priv = VAR_6;
 VAR_6->vb_vidq.buf_struct_size = sizeof(struct vip_buffer);
 VAR_6->vb_vidq.ops = &VAR_5;
 VAR_6->vb_vidq.mem_ops = &VAR_4;
 VAR_6->vb_vidq.timestamp_flags = VAR_0;
 VAR_6->vb_vidq.dev = &VAR_6->pdev->dev;
 VAR_6->vb_vidq.lock = &VAR_6->v4l_lock;
 VAR_7 = FUNC_6(&VAR_6->vb_vidq);
 if (VAR_7)
  return VAR_7;
 FUNC_1(&VAR_6->buffer_list);
 FUNC_4(&VAR_6->lock);
 return 0;
}
