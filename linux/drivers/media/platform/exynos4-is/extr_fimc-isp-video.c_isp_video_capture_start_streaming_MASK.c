
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct param_dma_output {scalar_t__ buffer_address; int dma_out_mask; int buffer_number; int notify_dma_done; int cmd; } ;
struct TYPE_4__ {int vdev; } ;
struct fimc_is_video {TYPE_2__ ve; TYPE_1__* format; int buf_count; int buf_mask; int reqbufs_count; } ;
struct fimc_isp {int state; struct fimc_is_video video_capture; } ;
struct fimc_is {scalar_t__ is_dma_p_region; } ;
struct TYPE_3__ {int memplanes; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct fimc_is*,int ) ;
 struct param_dma_output* FUNC_1 (struct fimc_is*) ;
 int FUNC_2 (struct fimc_is*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct fimc_is*,int ) ;
 struct fimc_is* FUNC_5 (struct fimc_isp*) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 int FUNC_7 (int,int *,char*,int ,int ,scalar_t__) ;
 int FUNC_8 (int ,int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_9 (int ,int *) ;
 struct fimc_isp* FUNC_10 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_11(struct vb2_queue *VAR_7,
      unsigned int VAR_8)
{
 struct fimc_isp *VAR_9 = FUNC_10(VAR_7);
 struct fimc_is *VAR_10 = FUNC_5(VAR_9);
 struct param_dma_output *VAR_11 = FUNC_1(VAR_10);
 struct fimc_is_video *VAR_12 = &VAR_9->video_capture;
 int VAR_13;

 if (!FUNC_9(VAR_4, &VAR_9->state) ||
     FUNC_9(VAR_5, &VAR_9->state))
  return 0;


 VAR_11->cmd = VAR_1;
 VAR_11->notify_dma_done = VAR_2;
 VAR_11->buffer_address = VAR_10->is_dma_p_region +
    VAR_0;
 VAR_11->buffer_number = VAR_12->reqbufs_count;
 VAR_11->dma_out_mask = VAR_12->buf_mask;

 FUNC_7(2, &VAR_12->ve.vdev,
  "buf_count: %d, planes: %d, dma addr table: %#x\n",
  VAR_12->buf_count, VAR_12->format->memplanes,
  VAR_11->buffer_address);

 FUNC_3();

 FUNC_4(VAR_10, VAR_3);
 FUNC_0(VAR_10, VAR_3);

 VAR_13 = FUNC_2(VAR_10, 0);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_6(&VAR_12->ve, VAR_6, 1);
 if (VAR_13 < 0)
  return VAR_13;

 FUNC_8(VAR_5, &VAR_9->state);
 return VAR_13;
}
