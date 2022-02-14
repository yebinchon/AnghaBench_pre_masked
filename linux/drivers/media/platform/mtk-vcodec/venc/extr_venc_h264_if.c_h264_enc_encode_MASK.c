
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_key_frm; } ;
struct venc_h264_inst {TYPE_1__ vpu_inst; int prepend_hdr; struct mtk_vcodec_ctx* ctx; } ;
struct venc_frm_buf {int dummy; } ;
struct venc_done_result {unsigned int bs_size; int is_key_frm; } ;
struct mtk_vcodec_mem {int size; int dma_addr; int va; } ;
struct mtk_vcodec_ctx {TYPE_2__* dev; } ;
typedef enum venc_start_opt { ____Placeholder_venc_start_opt } venc_start_opt ;
struct TYPE_4__ {int enc_irq; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct venc_h264_inst*,int ,int) ;
 int FUNC_3 (struct venc_h264_inst*,struct venc_frm_buf*,struct mtk_vcodec_mem*,unsigned int*) ;
 int FUNC_4 (struct venc_h264_inst*,struct mtk_vcodec_mem*,unsigned int*) ;
 int FUNC_5 (struct venc_h264_inst*,char*,...) ;
 int FUNC_6 (struct venc_h264_inst*,char*,int) ;

__attribute__((used)) static int FUNC_7(void *VAR_2,
      enum venc_start_opt VAR_3,
      struct venc_frm_buf *VAR_4,
      struct mtk_vcodec_mem *VAR_5,
      struct venc_done_result *VAR_6)
{
 int VAR_7 = 0;
 struct venc_h264_inst *VAR_8 = (struct venc_h264_inst *)VAR_2;
 struct mtk_vcodec_ctx *VAR_9 = VAR_8->ctx;

 FUNC_5(VAR_8, "opt %d ->", VAR_3);

 FUNC_1(VAR_9->dev->enc_irq);

 switch (VAR_3) {
 case 128: {
  unsigned int VAR_10;

  VAR_7 = FUNC_4(VAR_8, VAR_5, &VAR_10);
  if (VAR_7)
   goto encode_err;

  VAR_6->bs_size = VAR_10;
  VAR_6->is_key_frm = 0;
  break;
 }

 case 129: {
  int VAR_11;
  int VAR_12;
  int VAR_13 = 0;
  const int VAR_14 = 128;
  struct mtk_vcodec_mem VAR_15;
  unsigned int VAR_16;
  unsigned int VAR_17;

  if (!VAR_8->prepend_hdr) {
   VAR_7 = FUNC_3(VAR_8, VAR_4, VAR_5,
      &VAR_6->bs_size);
   if (VAR_7)
    goto encode_err;
   VAR_6->is_key_frm = VAR_8->vpu_inst.is_key_frm;
   break;
  }

  FUNC_5(VAR_8, "h264_encode_frame prepend SPS/PPS");

  VAR_7 = FUNC_4(VAR_8, VAR_5, &VAR_16);
  if (VAR_7)
   goto encode_err;

  VAR_11 = VAR_16;
  VAR_12 = (VAR_11 & (VAR_14 - 1));
  if (VAR_12) {
   VAR_13 = VAR_14 - VAR_12;
   if (VAR_12 + VAR_1 > VAR_14)
    VAR_13 += VAR_14;
   FUNC_2(VAR_8, VAR_5->va + VAR_11,
        VAR_13);
  }

  VAR_15.va = VAR_5->va + VAR_11 + VAR_13;
  VAR_15.dma_addr = VAR_5->dma_addr + VAR_11 + VAR_13;
  VAR_15.size = VAR_5->size - (VAR_11 + VAR_13);

  VAR_7 = FUNC_3(VAR_8, VAR_4, &VAR_15,
     &VAR_17);
  if (VAR_7)
   goto encode_err;

  VAR_6->bs_size = VAR_11 + VAR_13 + VAR_17;

  FUNC_5(VAR_8, "hdr %d filler %d frame %d bs %d",
     VAR_11, VAR_13, VAR_17,
     VAR_6->bs_size);

  VAR_8->prepend_hdr = 0;
  VAR_6->is_key_frm = VAR_8->vpu_inst.is_key_frm;
  break;
 }

 default:
  FUNC_6(VAR_8, "venc_start_opt %d not supported", VAR_3);
  VAR_7 = -VAR_0;
  break;
 }

encode_err:

 FUNC_0(VAR_9->dev->enc_irq);
 FUNC_5(VAR_8, "opt %d <-", VAR_3);

 return VAR_7;
}
