
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {TYPE_5__* fmt; int w; int size; } ;
struct TYPE_10__ {int size; TYPE_3__* fmt; int w; } ;
struct TYPE_8__ {int top; int left; int height; int width; } ;
struct s5p_jpeg_ctx {scalar_t__ mode; struct s5p_jpeg* jpeg; TYPE_6__ cap_q; TYPE_4__ out_q; int scale_factor; int subsampling; TYPE_2__ crop_rect; int compr_quality; int restart_interval; } ;
struct s5p_jpeg {int slock; int regs; scalar_t__ irq_status; TYPE_1__* variant; } ;
struct TYPE_11__ {scalar_t__ fourcc; } ;
struct TYPE_9__ {scalar_t__ fourcc; } ;
struct TYPE_7__ {scalar_t__ htbl_reinit; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,scalar_t__) ;
 int FUNC_14 (int ,int,int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct s5p_jpeg_ctx*) ;
 int FUNC_18 (struct s5p_jpeg_ctx*) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ,scalar_t__,int ) ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int ,int ) ;
 int FUNC_31 (int ,int ) ;
 int FUNC_32 (int *,unsigned long) ;
 int FUNC_33 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_34(void *VAR_5)
{
 struct s5p_jpeg_ctx *VAR_6 = VAR_5;
 struct s5p_jpeg *VAR_7 = VAR_6->jpeg;
 unsigned long VAR_8;

 FUNC_32(&VAR_6->jpeg->slock, VAR_8);

 FUNC_15(VAR_7->regs);
 FUNC_16(VAR_7->regs);
 FUNC_12(VAR_7->regs);
 FUNC_0(VAR_7->regs);
 FUNC_13(VAR_7->regs, VAR_6->mode);

 if (VAR_6->mode == VAR_1) {
  FUNC_8(VAR_7->regs,
           VAR_6->out_q.fmt->fourcc);
  FUNC_4(VAR_7->regs, VAR_6->restart_interval);





  FUNC_31(VAR_7->regs, VAR_6->compr_quality);
  FUNC_30(VAR_7->regs, VAR_6->compr_quality);

  FUNC_14(VAR_7->regs, 1, 0);

  FUNC_14(VAR_7->regs, 2, 1);
  FUNC_14(VAR_7->regs, 3, 1);




  if (VAR_7->variant->htbl_reinit) {
   FUNC_28(VAR_7->regs);
   FUNC_29(VAR_7->regs);
   FUNC_26(VAR_7->regs);
   FUNC_27(VAR_7->regs);
  }


  FUNC_6(VAR_7->regs, 1);
  FUNC_7(VAR_7->regs, 1);
  FUNC_6(VAR_7->regs, 2);
  FUNC_7(VAR_7->regs, 2);
  FUNC_6(VAR_7->regs, 3);
  FUNC_7(VAR_7->regs, 3);

  FUNC_20(VAR_7->regs, VAR_6->crop_rect.width);
  FUNC_21(VAR_7->regs, VAR_6->crop_rect.height);
  FUNC_24(VAR_7->regs, VAR_6->out_q.fmt->fourcc,
        VAR_6->out_q.w);
  FUNC_10(VAR_7->regs, VAR_6->crop_rect.left,
       VAR_6->crop_rect.top);
  FUNC_17(VAR_6);
  FUNC_18(VAR_6);
  FUNC_25(VAR_7->regs, VAR_6->subsampling);


  FUNC_5(VAR_7->regs, VAR_6->cap_q.size);

  if (VAR_6->out_q.fmt->fourcc == VAR_3 ||
      VAR_6->out_q.fmt->fourcc == VAR_4 ||
      VAR_6->out_q.fmt->fourcc == VAR_2)
   FUNC_22(VAR_7->regs, 1);
 } else {
  FUNC_17(VAR_6);
  FUNC_18(VAR_6);
  FUNC_24(VAR_7->regs, VAR_6->cap_q.fmt->fourcc,
        VAR_6->cap_q.w);
  FUNC_10(VAR_7->regs, 0, 0);
  FUNC_2(VAR_7->regs,
       VAR_6->scale_factor);
  FUNC_3(VAR_7->regs, VAR_6->out_q.size);
  FUNC_11(VAR_7->regs,
      VAR_6->cap_q.fmt->fourcc);
 }

 FUNC_9(VAR_7->regs);


 FUNC_1(VAR_7->regs, VAR_6->mode);

 FUNC_19(VAR_7->regs, VAR_0);
 VAR_7->irq_status = 0;
 FUNC_23(VAR_7->regs);

 FUNC_33(&VAR_6->jpeg->slock, VAR_8);
}
