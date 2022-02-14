
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct sched_param {int sched_priority; } ;
struct TYPE_18__ {int max_frames_buffered; int track_osd; int lace_threshold; int lace_mode; int next_dma_frame; } ;
struct TYPE_17__ {int SGlist; int lock; } ;
struct TYPE_14__ {int sliced; } ;
struct TYPE_15__ {TYPE_5__ fmt; int type; } ;
struct TYPE_16__ {TYPE_6__ in; int * sliced_in; } ;
struct TYPE_13__ {int capabilities; int port; } ;
struct TYPE_12__ {int name; } ;
struct TYPE_11__ {int max_mbox; } ;
struct TYPE_10__ {int max_mbox; } ;
struct ivtv {int cur_dma_stream; int cur_pio_stream; int speed; int osd_global_alpha_state; int osd_global_alpha; TYPE_9__ yuv_info; TYPE_8__ udma; TYPE_7__ vbi; int dma_timer; int dma_waitq; int vsync_waitq; int event_waitq; int eos_waitq; TYPE_4__ cxhdl; int irq_work; int irq_worker_task; TYPE_3__ v4l2_dev; int irq_worker; int dma_reg_lock; int lock; int i2c_bus_lock; int serialize_lock; TYPE_2__ dec_mbox; TYPE_1__ enc_mbox; int pdev; int base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,char*,int ) ;
 int VAR_9 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,struct sched_param*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_13(struct ivtv *VAR_10)
{
 struct sched_param VAR_11 = { .sched_priority = 99 };

 VAR_10->base_addr = FUNC_8(VAR_10->pdev, 0);
 VAR_10->enc_mbox.max_mbox = 2;
 VAR_10->dec_mbox.max_mbox = 1;

 FUNC_7(&VAR_10->serialize_lock);
 FUNC_7(&VAR_10->i2c_bus_lock);
 FUNC_7(&VAR_10->udma.lock);

 FUNC_11(&VAR_10->lock);
 FUNC_11(&VAR_10->dma_reg_lock);

 FUNC_5(&VAR_10->irq_worker);
 VAR_10->irq_worker_task = FUNC_6(VAR_9, &VAR_10->irq_worker,
        "%s", VAR_10->v4l2_dev.name);
 if (FUNC_0(VAR_10->irq_worker_task)) {
  FUNC_1("Could not create ivtv task\n");
  return -1;
 }

 FUNC_9(VAR_10->irq_worker_task, VAR_3, &VAR_11);

 FUNC_4(&VAR_10->irq_work, VAR_5);


 VAR_10->cxhdl.port = VAR_1;
 VAR_10->cxhdl.capabilities = VAR_0;
 FUNC_3(&VAR_10->eos_waitq);
 FUNC_3(&VAR_10->event_waitq);
 FUNC_3(&VAR_10->vsync_waitq);
 FUNC_3(&VAR_10->dma_waitq);
 FUNC_12(&VAR_10->dma_timer, VAR_6, 0);

 VAR_10->cur_dma_stream = -1;
 VAR_10->cur_pio_stream = -1;


 VAR_10->speed = 1000;


 VAR_10->vbi.in.type = VAR_4;
 VAR_10->vbi.sliced_in = &VAR_10->vbi.in.fmt.sliced;


 FUNC_10(VAR_10->udma.SGlist, VAR_2);


 VAR_10->osd_global_alpha_state = 1;
 VAR_10->osd_global_alpha = 255;


 FUNC_2(&VAR_10->yuv_info.next_dma_frame, -1);
 VAR_10->yuv_info.lace_mode = VAR_7;
 VAR_10->yuv_info.lace_threshold = VAR_8;
 VAR_10->yuv_info.max_frames_buffered = 3;
 VAR_10->yuv_info.track_osd = 1;
 return 0;
}
