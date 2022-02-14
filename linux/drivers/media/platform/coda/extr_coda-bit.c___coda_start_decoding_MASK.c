
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_7__ {int width; } ;
struct coda_q_data {scalar_t__ fourcc; TYPE_2__ rect; } ;
struct coda_dev {int v4l2_dev; TYPE_5__* devtype; } ;
struct TYPE_9__ {int paddr; int size; } ;
struct TYPE_8__ {int buf_bit_use; int buf_ip_ac_dc_use; int buf_dbk_y_use; int buf_dbk_c_use; int buf_ovl_use; int buf_btp_use; } ;
struct TYPE_6__ {int paddr; } ;
struct coda_ctx {int num_internal_frames; struct coda_dev* dev; TYPE_4__ slicebuf; TYPE_3__ iram_info; TYPE_1__ parabuf; int initialized; } ;
struct TYPE_10__ {scalar_t__ product; } ;


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
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_0 (struct coda_ctx*) ;
 int FUNC_1 (struct coda_ctx*,scalar_t__) ;
 int FUNC_2 (struct coda_ctx*,struct coda_q_data*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct coda_ctx*,int ) ;
 int FUNC_4 (struct coda_ctx*) ;
 int FUNC_5 (struct coda_dev*,int,int ) ;
 struct coda_q_data* FUNC_6 (struct coda_ctx*,int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int *,char*) ;

__attribute__((used)) static int FUNC_9(struct coda_ctx *VAR_23)
{
 struct coda_q_data *VAR_24, *VAR_25;
 struct coda_dev *VAR_26 = VAR_23->dev;
 u32 VAR_27, VAR_28;
 int VAR_29;

 if (!VAR_23->initialized) {
  VAR_29 = FUNC_0(VAR_23);
  if (VAR_29 < 0)
   return VAR_29;
 }

 VAR_24 = FUNC_6(VAR_23, VAR_21);
 VAR_25 = FUNC_6(VAR_23, VAR_20);
 VAR_27 = VAR_24->fourcc;
 VAR_28 = VAR_25->fourcc;

 FUNC_5(VAR_26, VAR_23->parabuf.paddr, VAR_18);

 VAR_29 = FUNC_2(VAR_23, VAR_25, VAR_27);
 if (VAR_29 < 0) {
  FUNC_8(&VAR_26->v4l2_dev, "failed to allocate framebuffers\n");
  return VAR_29;
 }


 FUNC_5(VAR_26, VAR_23->num_internal_frames, VAR_11);
 FUNC_5(VAR_26, FUNC_7(VAR_25->rect.width, 16),
     VAR_12);

 if (VAR_26->devtype->product != VAR_16) {

  FUNC_4(VAR_23);

  FUNC_5(VAR_26, VAR_23->iram_info.buf_bit_use,
    VAR_0);
  FUNC_5(VAR_26, VAR_23->iram_info.buf_ip_ac_dc_use,
    VAR_3);
  FUNC_5(VAR_26, VAR_23->iram_info.buf_dbk_y_use,
    VAR_2);
  FUNC_5(VAR_26, VAR_23->iram_info.buf_dbk_c_use,
    VAR_1);
  FUNC_5(VAR_26, VAR_23->iram_info.buf_ovl_use,
    VAR_4);
  if (VAR_26->devtype->product == VAR_10) {
   FUNC_5(VAR_26, VAR_23->iram_info.buf_btp_use,
     VAR_6);

   FUNC_5(VAR_26, -1, VAR_7);
   FUNC_1(VAR_23, VAR_28);
  }
 }

 if (VAR_27 == VAR_22) {
  FUNC_5(VAR_26, VAR_23->slicebuf.paddr,
    VAR_14);
  FUNC_5(VAR_26, VAR_23->slicebuf.size / 1024,
    VAR_13);
 }

 if (VAR_26->devtype->product == VAR_17 ||
     VAR_26->devtype->product == VAR_9) {
  int VAR_30 = 1920 / 16;
  int VAR_31 = 1088 / 16;
  int VAR_32 = VAR_30 * VAR_31;

  FUNC_5(VAR_26, VAR_32 << 16 | VAR_30 << 8 | VAR_31,
    VAR_5);
 } else if (VAR_26->devtype->product == VAR_10) {
  int VAR_33 = 1920 / 16;
  int VAR_34 = 1088 / 16;
  int VAR_35 = VAR_33 * VAR_34;

  FUNC_5(VAR_26, VAR_35 << 16 | VAR_33 << 8 | VAR_34,
    VAR_8);
 }

 if (FUNC_3(VAR_23, VAR_15)) {
  FUNC_8(&VAR_23->dev->v4l2_dev,
    "CODA_COMMAND_SET_FRAME_BUF timeout\n");
  return -VAR_19;
 }

 return 0;
}
