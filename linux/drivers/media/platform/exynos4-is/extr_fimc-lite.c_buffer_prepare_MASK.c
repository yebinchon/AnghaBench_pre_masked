
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_queue {struct fimc_lite* drv_priv; } ;
struct vb2_buffer {struct vb2_queue* vb2_queue; } ;
struct TYPE_4__ {int vdev; } ;
struct TYPE_6__ {TYPE_2__* fmt; } ;
struct fimc_lite {unsigned long* payload; TYPE_1__ ve; TYPE_3__ out_frame; } ;
struct TYPE_5__ {int memplanes; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,unsigned long,unsigned long) ;
 unsigned long FUNC_1 (struct vb2_buffer*,int) ;
 int FUNC_2 (struct vb2_buffer*,int,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct vb2_buffer *VAR_1)
{
 struct vb2_queue *VAR_2 = VAR_1->vb2_queue;
 struct fimc_lite *VAR_3 = VAR_2->drv_priv;
 int VAR_4;

 if (VAR_3->out_frame.fmt == ((void*)0))
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_3->out_frame.fmt->memplanes; VAR_4++) {
  unsigned long VAR_5 = VAR_3->payload[VAR_4];

  if (FUNC_1(VAR_1, VAR_4) < VAR_5) {
   FUNC_0(&VAR_3->ve.vdev,
     "User buffer too small (%ld < %ld)\n",
     FUNC_1(VAR_1, VAR_4), VAR_5);
   return -VAR_0;
  }
  FUNC_2(VAR_1, VAR_4, VAR_5);
 }

 return 0;
}
