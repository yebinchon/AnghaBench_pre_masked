
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int timestamp; } ;
struct vb2_v4l2_buffer {int flags; TYPE_4__ vb2_buf; } ;
struct fimc_frame {int paddr; } ;
struct TYPE_6__ {struct fimc_ctx* ctx; } ;
struct fimc_dev {int slock; TYPE_3__* drv_data; TYPE_2__ m2m; int state; } ;
struct TYPE_5__ {int m2m_ctx; } ;
struct fimc_ctx {int state; TYPE_1__ fh; struct fimc_frame d_frame; struct fimc_frame s_frame; struct fimc_dev* fimc_dev; } ;
struct TYPE_7__ {scalar_t__ alpha_color; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,char*) ;
 int FUNC_1 (struct fimc_ctx*) ;
 int FUNC_2 (struct fimc_dev*,int) ;
 int FUNC_3 (struct fimc_ctx*) ;
 int FUNC_4 (struct fimc_ctx*) ;
 int FUNC_5 (struct fimc_dev*,int *) ;
 int FUNC_6 (struct fimc_ctx*) ;
 int FUNC_7 (struct fimc_ctx*) ;
 int FUNC_8 (struct fimc_ctx*) ;
 int FUNC_9 (struct fimc_dev*,int *,int) ;
 int FUNC_10 (struct fimc_ctx*) ;
 int FUNC_11 (struct fimc_ctx*) ;
 int FUNC_12 (struct fimc_ctx*) ;
 int FUNC_13 (struct fimc_ctx*) ;
 int FUNC_14 (struct fimc_ctx*) ;
 int FUNC_15 (struct fimc_ctx*,TYPE_4__*,struct fimc_frame*,int *) ;
 int FUNC_16 (struct fimc_ctx*,struct fimc_frame*) ;
 int FUNC_17 (struct fimc_ctx*) ;
 int FUNC_18 (struct fimc_ctx*) ;
 int FUNC_19 (int ,int *) ;
 int FUNC_20 (int *,unsigned long) ;
 int FUNC_21 (int *,unsigned long) ;
 struct vb2_v4l2_buffer* FUNC_22 (int ) ;
 struct vb2_v4l2_buffer* FUNC_23 (int ) ;

__attribute__((used)) static void FUNC_24(void *VAR_5)
{
 struct vb2_v4l2_buffer *VAR_6, *VAR_7;
 struct fimc_ctx *VAR_8 = VAR_5;
 struct fimc_frame *VAR_9, *VAR_10;
 struct fimc_dev *VAR_11;
 unsigned long VAR_12;
 int VAR_13;

 if (FUNC_0(!VAR_8, "Null context\n"))
  return;

 VAR_11 = VAR_8->fimc_dev;
 FUNC_20(&VAR_11->slock, VAR_12);

 FUNC_19(VAR_3, &VAR_11->state);
 VAR_9 = &VAR_8->s_frame;
 VAR_10 = &VAR_8->d_frame;

 if (VAR_8->state & VAR_2) {

  FUNC_16(VAR_8, VAR_9);
  FUNC_16(VAR_8, VAR_10);
 }

 VAR_6 = FUNC_23(VAR_8->fh.m2m_ctx);
 VAR_13 = FUNC_15(VAR_8, &VAR_6->vb2_buf, VAR_9, &VAR_9->paddr);
 if (VAR_13)
  goto dma_unlock;

 VAR_7 = FUNC_22(VAR_8->fh.m2m_ctx);
 VAR_13 = FUNC_15(VAR_8, &VAR_7->vb2_buf, VAR_10, &VAR_10->paddr);
 if (VAR_13)
  goto dma_unlock;

 VAR_7->vb2_buf.timestamp = VAR_6->vb2_buf.timestamp;
 VAR_7->flags &= ~VAR_4;
 VAR_7->flags |=
  VAR_6->flags & VAR_4;


 if (VAR_11->m2m.ctx != VAR_8) {
  VAR_8->state |= VAR_2;
  VAR_11->m2m.ctx = VAR_8;
 }

 if (VAR_8->state & VAR_2) {
  FUNC_18(VAR_8);
  FUNC_6(VAR_8);
  FUNC_4(VAR_8);
  VAR_13 = FUNC_17(VAR_8);
  if (VAR_13)
   goto dma_unlock;
  FUNC_11(VAR_8);
  FUNC_7(VAR_8);
  FUNC_14(VAR_8);
  FUNC_13(VAR_8);
  FUNC_3(VAR_8);
  FUNC_8(VAR_8);
  if (VAR_11->drv_data->alpha_color)
   FUNC_12(VAR_8);
  FUNC_10(VAR_8);
 }
 FUNC_5(VAR_11, &VAR_9->paddr);
 FUNC_9(VAR_11, &VAR_10->paddr, -1);

 FUNC_1(VAR_8);
 VAR_8->state &= (VAR_1 | VAR_0);
 FUNC_2(VAR_11, 1);

dma_unlock:
 FUNC_21(&VAR_11->slock, VAR_12);
}
