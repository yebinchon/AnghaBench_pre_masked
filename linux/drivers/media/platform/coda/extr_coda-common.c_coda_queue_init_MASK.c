
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int buf_struct_size; int allow_zero_bytesused; int min_buffers_needed; int dev; int * lock; int timestamp_flags; int * ops; struct coda_ctx* drv_priv; } ;
struct v4l2_m2m_buffer {int dummy; } ;
struct coda_ctx {TYPE_1__* dev; } ;
struct TYPE_2__ {int dev; int dev_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_1(struct coda_ctx *VAR_2, struct vb2_queue *VAR_3)
{
 VAR_3->drv_priv = VAR_2;
 VAR_3->ops = &VAR_1;
 VAR_3->buf_struct_size = sizeof(struct v4l2_m2m_buffer);
 VAR_3->timestamp_flags = VAR_0;
 VAR_3->lock = &VAR_2->dev->dev_mutex;






 VAR_3->allow_zero_bytesused = 1;





 VAR_3->min_buffers_needed = 1;
 VAR_3->dev = VAR_2->dev->dev;

 return FUNC_0(VAR_3);
}
