
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct coda_dev {TYPE_2__* devtype; } ;
struct TYPE_6__ {int codec_mode; int codec_mode_aux; } ;
struct TYPE_4__ {int paddr; } ;
struct coda_ctx {int bit_stream_param; int frm_dis_flg; int frame_mem_ctrl; int idx; TYPE_3__ params; TYPE_1__ workbuf; int reg_idx; struct coda_dev* dev; } ;
struct TYPE_5__ {scalar_t__ product; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct coda_dev*,int,int ) ;
 int FUNC_2 (struct coda_ctx*,int) ;

__attribute__((used)) static void FUNC_3(struct coda_ctx *VAR_14, int VAR_15)
{
 struct coda_dev *VAR_16 = VAR_14->dev;

 if (VAR_16->devtype->product == VAR_5 ||
     VAR_16->devtype->product == VAR_3 ||
     VAR_16->devtype->product == VAR_4) {

  FUNC_1(VAR_16, VAR_14->bit_stream_param,
    VAR_6);
  FUNC_1(VAR_16, VAR_14->frm_dis_flg,
    FUNC_0(VAR_14->reg_idx));
  FUNC_1(VAR_16, VAR_14->frame_mem_ctrl,
    VAR_9);
  FUNC_1(VAR_16, VAR_14->workbuf.paddr, VAR_13);
 }

 if (VAR_16->devtype->product == VAR_4) {
  FUNC_1(VAR_16, 1, VAR_1);
  FUNC_1(VAR_16, 0, VAR_2);
 }

 FUNC_1(VAR_16, VAR_8, VAR_7);

 FUNC_1(VAR_16, VAR_14->idx, VAR_12);
 FUNC_1(VAR_16, VAR_14->params.codec_mode, VAR_10);
 FUNC_1(VAR_16, VAR_14->params.codec_mode_aux, VAR_0);

 FUNC_2(VAR_14, VAR_15);

 FUNC_1(VAR_16, VAR_15, VAR_11);
}
