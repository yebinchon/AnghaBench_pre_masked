
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct solo_vb2_buf {int dummy; } ;
struct TYPE_14__ {int error; } ;
struct TYPE_13__ {int io_modes; int gfp_flags; int buf_struct_size; int * dev; int * lock; int timestamp_flags; struct solo_dev* drv_priv; int * mem_ops; int * ops; int type; } ;
struct solo_dev {int nr_chans; TYPE_2__* vfd; TYPE_7__ disp_hdl; int nr_ext; TYPE_1__* pdev; TYPE_6__ vidq; int lock; int v4l2_dev; int vidq_active; int slock; int disp_thread_wait; } ;
struct TYPE_12__ {int num; int name; TYPE_7__* ctrl_handler; int * lock; TYPE_6__* queue; int * v4l2_dev; } ;
struct TYPE_11__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,char*,int,int,int ) ;
 scalar_t__ FUNC_2 (struct solo_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int,char*,char*,int) ;
 int VAR_10 ;
 int FUNC_6 (struct solo_dev*,int) ;
 TYPE_2__ VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_7__*) ;
 int FUNC_9 (TYPE_7__*,int) ;
 int FUNC_10 (TYPE_7__*,int *,int *) ;
 int VAR_13 ;
 int FUNC_11 (TYPE_6__*) ;
 TYPE_2__* FUNC_12 () ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*,int ,unsigned int) ;
 int FUNC_15 (TYPE_2__*,struct solo_dev*) ;

int FUNC_16(struct solo_dev *VAR_14, unsigned VAR_15)
{
 int VAR_16;
 int VAR_17;

 FUNC_3(&VAR_14->disp_thread_wait);
 FUNC_7(&VAR_14->slock);
 FUNC_4(&VAR_14->lock);
 FUNC_0(&VAR_14->vidq_active);

 VAR_14->vfd = FUNC_12();
 if (!VAR_14->vfd)
  return -VAR_0;

 *VAR_14->vfd = VAR_11;
 VAR_14->vfd->v4l2_dev = &VAR_14->v4l2_dev;
 VAR_14->vfd->queue = &VAR_14->vidq;
 VAR_14->vfd->lock = &VAR_14->lock;
 FUNC_9(&VAR_14->disp_hdl, 1);
 FUNC_10(&VAR_14->disp_hdl, &VAR_10, ((void*)0));
 if (VAR_14->disp_hdl.error) {
  VAR_16 = VAR_14->disp_hdl.error;
  goto fail;
 }
 VAR_14->vfd->ctrl_handler = &VAR_14->disp_hdl;

 FUNC_15(VAR_14->vfd, VAR_14);

 VAR_14->vidq.type = VAR_3;
 VAR_14->vidq.io_modes = VAR_4 | VAR_6 | VAR_5;
 VAR_14->vidq.ops = &VAR_12;
 VAR_14->vidq.mem_ops = &VAR_13;
 VAR_14->vidq.drv_priv = VAR_14;
 VAR_14->vidq.timestamp_flags = VAR_2;
 VAR_14->vidq.gfp_flags = VAR_8 | VAR_9;
 VAR_14->vidq.buf_struct_size = sizeof(struct solo_vb2_buf);
 VAR_14->vidq.lock = &VAR_14->lock;
 VAR_14->vidq.dev = &VAR_14->pdev->dev;
 VAR_16 = FUNC_11(&VAR_14->vidq);
 if (VAR_16 < 0)
  goto fail;


 for (VAR_17 = 0; VAR_17 < VAR_14->nr_chans; VAR_17++) {
  FUNC_6(VAR_14, VAR_17);
  while (FUNC_2(VAR_14))
                   ;
 }


 FUNC_6(VAR_14, 0);
 while (FUNC_2(VAR_14))
                  ;

 VAR_16 = FUNC_14(VAR_14->vfd, VAR_7, VAR_15);
 if (VAR_16 < 0)
  goto fail;

 FUNC_5(VAR_14->vfd->name, sizeof(VAR_14->vfd->name), "%s (%i)",
   VAR_1, VAR_14->vfd->num);

 FUNC_1(&VAR_14->pdev->dev, "Display as /dev/video%d with %d inputs (%d extended)\n",
   VAR_14->vfd->num,
   VAR_14->nr_chans, VAR_14->nr_ext);

 return 0;

fail:
 FUNC_13(VAR_14->vfd);
 FUNC_8(&VAR_14->disp_hdl);
 VAR_14->vfd = ((void*)0);
 return VAR_16;
}
