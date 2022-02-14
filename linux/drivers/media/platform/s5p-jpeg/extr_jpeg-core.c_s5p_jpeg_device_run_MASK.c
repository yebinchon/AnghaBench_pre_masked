
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vb2_v4l2_buffer {int vb2_buf; } ;
struct TYPE_10__ {TYPE_4__* fmt; int size; } ;
struct TYPE_8__ {int h; int w; TYPE_2__* fmt; } ;
struct TYPE_6__ {int m2m_ctx; } ;
struct s5p_jpeg_ctx {scalar_t__ mode; struct s5p_jpeg* jpeg; TYPE_5__ cap_q; int compr_quality; TYPE_3__ out_q; int restart_interval; int subsampling; TYPE_1__ fh; } ;
struct s5p_jpeg {int slock; int regs; } ;
struct TYPE_9__ {scalar_t__ fourcc; } ;
struct TYPE_7__ {scalar_t__ fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (int ,int,int,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,unsigned long) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,scalar_t__) ;
 int FUNC_13 (int ,int,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int *,unsigned long) ;
 int FUNC_23 (int *,unsigned long) ;
 struct vb2_v4l2_buffer* FUNC_24 (int ) ;
 struct vb2_v4l2_buffer* FUNC_25 (int ) ;
 unsigned long FUNC_26 (int *,int ) ;

__attribute__((used)) static void FUNC_27(void *VAR_16)
{
 struct s5p_jpeg_ctx *VAR_17 = VAR_16;
 struct s5p_jpeg *VAR_18 = VAR_17->jpeg;
 struct vb2_v4l2_buffer *VAR_19, *VAR_20;
 unsigned long VAR_21, VAR_22, VAR_23;

 FUNC_22(&VAR_17->jpeg->slock, VAR_23);

 VAR_19 = FUNC_25(VAR_17->fh.m2m_ctx);
 VAR_20 = FUNC_24(VAR_17->fh.m2m_ctx);
 VAR_21 = FUNC_26(&VAR_19->vb2_buf, 0);
 VAR_22 = FUNC_26(&VAR_20->vb2_buf, 0);

 FUNC_14(VAR_18->regs);
 FUNC_11(VAR_18->regs);
 FUNC_12(VAR_18->regs, VAR_17->mode);
 if (VAR_17->mode == VAR_9) {
  if (VAR_17->out_q.fmt->fourcc == VAR_14)
   FUNC_8(VAR_18->regs,
       VAR_11);
  else
   FUNC_8(VAR_18->regs,
       VAR_10);
  FUNC_19(VAR_18->regs, VAR_17->subsampling);
  FUNC_2(VAR_18->regs, VAR_17->restart_interval);
  FUNC_20(VAR_18->regs, VAR_17->out_q.w);
  FUNC_21(VAR_18->regs, VAR_17->out_q.h);
  FUNC_7(VAR_18->regs, VAR_21);
  FUNC_9(VAR_18->regs, VAR_22);


  FUNC_3(VAR_18->regs, VAR_17->cap_q.size);


  FUNC_0(VAR_18->regs, 1, 1, VAR_0);
  FUNC_0(VAR_18->regs, 1, 2, VAR_1);
  FUNC_0(VAR_18->regs, 1, 3, VAR_2);
  FUNC_0(VAR_18->regs, 2, 1, VAR_3);
  FUNC_0(VAR_18->regs, 2, 2, VAR_4);
  FUNC_0(VAR_18->regs, 2, 3, VAR_5);
  FUNC_0(VAR_18->regs, 3, 1, VAR_6);
  FUNC_0(VAR_18->regs, 3, 2, VAR_7);
  FUNC_0(VAR_18->regs, 3, 3, VAR_8);





  FUNC_17(VAR_18->regs, VAR_17->compr_quality);
  FUNC_16(VAR_18->regs, VAR_17->compr_quality);

  FUNC_13(VAR_18->regs, 1, 0);

  FUNC_13(VAR_18->regs, 2, 1);
  FUNC_13(VAR_18->regs, 3, 1);


  FUNC_5(VAR_18->regs, 1);
  FUNC_6(VAR_18->regs, 1);
  FUNC_5(VAR_18->regs, 2);
  FUNC_6(VAR_18->regs, 2);
  FUNC_5(VAR_18->regs, 3);
  FUNC_6(VAR_18->regs, 3);
 } else {
  FUNC_15(VAR_18->regs, 1);
  FUNC_1(VAR_18->regs, 1);
  FUNC_4(VAR_18->regs, 1);
  if (VAR_17->cap_q.fmt->fourcc == VAR_15)
   FUNC_10(VAR_18->regs, VAR_13);
  else
   FUNC_10(VAR_18->regs, VAR_12);
  FUNC_9(VAR_18->regs, VAR_21);
  FUNC_7(VAR_18->regs, VAR_22);
 }

 FUNC_18(VAR_18->regs);

 FUNC_23(&VAR_17->jpeg->slock, VAR_23);
}
