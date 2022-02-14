
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int io_modes; int buf_struct_size; int * mem_ops; int * ops; int dev; int timestamp_flags; int * lock; struct mcam_camera* drv_priv; int type; } ;
struct mcam_vb_buffer {int dummy; } ;
struct mcam_camera {int buffer_mode; int frame_complete; int dma_setup; int s_tasklet; int buffers; int dev; int s_mutex; struct vb2_queue vb_queue; } ;





 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct vb2_queue*,int ,int) ;
 int FUNC_2 (int *,int ,unsigned long) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (struct vb2_queue*) ;
 int VAR_17 ;

__attribute__((used)) static int FUNC_4(struct mcam_camera *VAR_18)
{
 struct vb2_queue *VAR_19 = &VAR_18->vb_queue;

 FUNC_1(VAR_19, 0, sizeof(*VAR_19));
 VAR_19->type = VAR_1;
 VAR_19->drv_priv = VAR_18;
 VAR_19->lock = &VAR_18->s_mutex;
 VAR_19->timestamp_flags = VAR_0;
 VAR_19->io_modes = VAR_3 | VAR_5 | VAR_2 | VAR_4;
 VAR_19->buf_struct_size = sizeof(struct mcam_vb_buffer);
 VAR_19->dev = VAR_18->dev;
 FUNC_0(&VAR_18->buffers);
 switch (VAR_18->buffer_mode) {
 case 130:






  break;
 case 129:






  break;
 case 128:
  break;
 }
 return FUNC_3(VAR_19);
}
