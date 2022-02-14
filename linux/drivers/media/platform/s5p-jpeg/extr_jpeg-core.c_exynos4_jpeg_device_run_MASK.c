
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int size; TYPE_1__* fmt; } ;
struct TYPE_9__ {TYPE_3__* fmt; int h; int w; } ;
struct s5p_jpeg_ctx {scalar_t__ mode; TYPE_5__ out_q; TYPE_4__ cap_q; int subsampling; struct s5p_jpeg* jpeg; int compr_quality; } ;
struct s5p_jpeg {int slock; int regs; TYPE_2__* variant; } ;
struct TYPE_8__ {int fourcc; } ;
struct TYPE_7__ {scalar_t__ version; } ;
struct TYPE_6__ {int fourcc; } ;


 unsigned int FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct s5p_jpeg_ctx*) ;
 int FUNC_2 (struct s5p_jpeg_ctx*) ;
 int FUNC_3 (struct s5p_jpeg_ctx*) ;
 int FUNC_4 (struct s5p_jpeg_ctx*) ;
 int FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct s5p_jpeg_ctx*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,scalar_t__) ;
 int FUNC_15 (struct s5p_jpeg_ctx*) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int ,int ) ;
 int FUNC_19 (int ,int) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int *,unsigned long) ;
 int FUNC_24 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_25(void *VAR_3)
{
 struct s5p_jpeg_ctx *VAR_4 = VAR_3;
 struct s5p_jpeg *VAR_5 = VAR_4->jpeg;
 unsigned int VAR_6;
 unsigned long VAR_7;

 FUNC_23(&VAR_5->slock, VAR_7);

 if (VAR_4->mode == VAR_0) {
  FUNC_20(VAR_5->regs);
  FUNC_14(VAR_5->regs, VAR_5->variant->version);
  FUNC_10(VAR_5->regs, 1);

  FUNC_11(VAR_5->regs);





  FUNC_17(VAR_5->regs, VAR_4->compr_quality);
  FUNC_16(VAR_5->regs, VAR_4->compr_quality);

  FUNC_9(VAR_5->regs,
       VAR_4->compr_quality);
  FUNC_18(VAR_5->regs, VAR_4->cap_q.w,
       VAR_4->cap_q.h);

  if (VAR_4->jpeg->variant->version == VAR_1) {
   FUNC_7(VAR_5->regs,
           VAR_4->subsampling);
   FUNC_13(VAR_5->regs,
       VAR_4->out_q.fmt->fourcc);
  } else {
   FUNC_21(VAR_5->regs,
       VAR_4->subsampling);
   FUNC_22(VAR_5->regs,
          VAR_4->out_q.fmt->fourcc);
  }
  FUNC_12(VAR_4);
  FUNC_15(VAR_4);
  FUNC_8(VAR_5->regs,
       VAR_4->out_q.fmt->fourcc);
 } else {
  FUNC_20(VAR_5->regs);
  FUNC_14(VAR_5->regs,
        VAR_5->variant->version);
  FUNC_12(VAR_4);
  FUNC_15(VAR_4);

  if (VAR_5->variant->version == VAR_2) {
   FUNC_3(VAR_4);
   FUNC_1(VAR_4);

   FUNC_4(VAR_4);
   FUNC_2(VAR_4);

   FUNC_10(VAR_5->regs, 1);

   FUNC_18(VAR_5->regs, VAR_4->cap_q.w,
     VAR_4->cap_q.h);
   FUNC_21(VAR_5->regs,
       VAR_4->subsampling);
   FUNC_22(VAR_5->regs,
          VAR_4->cap_q.fmt->fourcc);
   VAR_6 = FUNC_0(VAR_4->out_q.size, 16);
  } else {
   FUNC_13(VAR_5->regs,
       VAR_4->cap_q.fmt->fourcc);
   VAR_6 = FUNC_0(VAR_4->out_q.size, 32);
  }

  FUNC_5(VAR_5->regs, VAR_6);
 }

 FUNC_19(VAR_5->regs, 1);
 FUNC_6(VAR_5->regs, VAR_4->mode);

 FUNC_24(&VAR_5->slock, VAR_7);
}
