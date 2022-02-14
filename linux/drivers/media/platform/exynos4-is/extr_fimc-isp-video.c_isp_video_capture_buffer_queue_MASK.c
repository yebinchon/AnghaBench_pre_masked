
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_buffer {int vb2_queue; int index; } ;
struct isp_video_buf {scalar_t__ index; int * dma_addr; } ;
struct TYPE_6__ {int vdev; } ;
struct fimc_is_video {unsigned long buf_mask; scalar_t__ buf_count; scalar_t__ reqbufs_count; TYPE_3__ ve; struct isp_video_buf** buffers; TYPE_1__* format; } ;
struct fimc_isp {int state; struct fimc_is_video video_capture; } ;
struct fimc_is {TYPE_2__* is_p_region; int slock; } ;
struct TYPE_5__ {int * shared; } ;
struct TYPE_4__ {unsigned int memplanes; } ;


 unsigned long FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 struct fimc_is* FUNC_1 (struct fimc_isp*) ;
 int FUNC_2 (int,int *,char*,int,unsigned int,unsigned int,int ,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 struct isp_video_buf* FUNC_8 (struct vb2_v4l2_buffer*) ;
 struct vb2_v4l2_buffer* FUNC_9 (struct vb2_buffer*) ;
 int FUNC_10 (struct vb2_buffer*,unsigned int) ;
 struct fimc_isp* FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct vb2_buffer *VAR_2)
{
 struct vb2_v4l2_buffer *VAR_3 = FUNC_9(VAR_2);
 struct fimc_isp *VAR_4 = FUNC_11(VAR_2->vb2_queue);
 struct fimc_is_video *VAR_5 = &VAR_4->video_capture;
 struct fimc_is *VAR_6 = FUNC_1(VAR_4);
 struct isp_video_buf *VAR_7 = FUNC_8(VAR_3);
 unsigned long VAR_8;
 unsigned int VAR_9;

 if (FUNC_7(VAR_0, &VAR_4->state)) {
  FUNC_5(&VAR_6->slock, VAR_8);
  VAR_5->buf_mask |= FUNC_0(VAR_7->index);
  FUNC_6(&VAR_6->slock, VAR_8);
 } else {
  unsigned int VAR_10 = VAR_5->format->memplanes;

  VAR_7->index = VAR_5->buf_count;
  VAR_5->buffers[VAR_7->index] = VAR_7;

  for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
   int VAR_11 = VAR_7->index * VAR_10 + VAR_9;

   VAR_7->dma_addr[VAR_9] = FUNC_10(VAR_2, VAR_9);
   VAR_6->is_p_region->shared[32 + VAR_11] =
       VAR_7->dma_addr[VAR_9];

   FUNC_2(2, &VAR_5->ve.vdev,
    "dma_buf %d (%d/%d/%d) addr: %pad\n",
    VAR_11, VAR_7->index, VAR_9, VAR_2->index,
    &VAR_7->dma_addr[VAR_9]);
  }

  if (++VAR_5->buf_count < VAR_5->reqbufs_count)
   return;

  VAR_5->buf_mask = (1UL << VAR_5->buf_count) - 1;
  FUNC_4(VAR_0, &VAR_4->state);
 }

 if (!FUNC_7(VAR_1, &VAR_4->state))
  FUNC_3(VAR_2->vb2_queue, 0);
}
