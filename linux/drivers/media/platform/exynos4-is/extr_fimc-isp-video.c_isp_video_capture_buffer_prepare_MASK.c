
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vb2_buffer {int vb2_queue; } ;
struct TYPE_9__ {int vdev; } ;
struct TYPE_8__ {TYPE_2__* plane_fmt; } ;
struct fimc_is_video {int buf_count; TYPE_5__** buffers; TYPE_4__ ve; TYPE_3__ pixfmt; TYPE_1__* format; } ;
struct fimc_isp {int state; struct fimc_is_video video_capture; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_10__ {scalar_t__* dma_addr; } ;
struct TYPE_7__ {unsigned long sizeimage; } ;
struct TYPE_6__ {int memplanes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (struct vb2_buffer*,int ) ;
 struct fimc_isp* FUNC_3 (int ) ;
 unsigned long FUNC_4 (struct vb2_buffer*,int) ;
 int FUNC_5 (struct vb2_buffer*,int,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct vb2_buffer *VAR_3)
{
 struct fimc_isp *VAR_4 = FUNC_3(VAR_3->vb2_queue);
 struct fimc_is_video *VAR_5 = &VAR_4->video_capture;
 int VAR_6;

 if (VAR_5->format == ((void*)0))
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_5->format->memplanes; VAR_6++) {
  unsigned long VAR_7 = VAR_5->pixfmt.plane_fmt[VAR_6].sizeimage;

  if (FUNC_4(VAR_3, VAR_6) < VAR_7) {
   FUNC_1(&VAR_5->ve.vdev,
     "User buffer too small (%ld < %ld)\n",
     FUNC_4(VAR_3, VAR_6), VAR_7);
   return -VAR_0;
  }
  FUNC_5(VAR_3, VAR_6, VAR_7);
 }


 if (FUNC_0(VAR_2, &VAR_4->state)) {
  dma_addr_t VAR_8 = FUNC_2(VAR_3, 0);
  int VAR_9;

  for (VAR_9 = 0; VAR_9 < VAR_5->buf_count; VAR_9++)
   if (VAR_5->buffers[VAR_9]->dma_addr[0] == VAR_8)
    return 0;
  return -VAR_1;
 }

 return 0;
}
