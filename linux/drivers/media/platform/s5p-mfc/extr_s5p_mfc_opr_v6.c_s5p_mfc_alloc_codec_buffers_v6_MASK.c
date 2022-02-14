
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct s5p_mfc_dev {int dummy; } ;
struct TYPE_4__ {int size; int dma; } ;
struct TYPE_3__ {int size; } ;
struct s5p_mfc_ctx {scalar_t__ type; int mv_size; unsigned int tmv_buffer_size; int codec_mode; int luma_dpb_size; unsigned int chroma_dpb_size; unsigned int me_buffer_size; unsigned int scratch_buf_size; int mv_count; int pb_count; TYPE_2__ bank1; TYPE_1__ bank2; int img_height; int img_width; int total_dpb_count; int chroma_size; int luma_size; struct s5p_mfc_dev* dev; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 unsigned int FUNC_4 (unsigned int,unsigned int) ;
 unsigned int FUNC_5 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_6 (struct s5p_mfc_dev*) ;
 int FUNC_7 (struct s5p_mfc_dev*) ;
 scalar_t__ FUNC_8 (struct s5p_mfc_dev*) ;
 unsigned int FUNC_9 (int ) ;
 unsigned int FUNC_10 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 unsigned int FUNC_11 (int ,int ,unsigned int,unsigned int) ;
 unsigned int FUNC_12 (int ,int ,unsigned int,unsigned int) ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 unsigned int FUNC_13 (unsigned int,unsigned int) ;
 unsigned int FUNC_14 (unsigned int,unsigned int) ;
 unsigned int FUNC_15 (unsigned int,unsigned int) ;
 int FUNC_16 (unsigned int,unsigned int) ;
 int FUNC_17 (unsigned int,unsigned int) ;
 int FUNC_18 (unsigned int,unsigned int) ;
 int FUNC_19 (unsigned int,unsigned int) ;
 unsigned int FUNC_20 (unsigned int,unsigned int) ;
 unsigned int FUNC_21 (unsigned int,unsigned int) ;
 unsigned int FUNC_22 (unsigned int,unsigned int) ;
 unsigned int FUNC_23 (unsigned int,unsigned int) ;
 unsigned int FUNC_24 (unsigned int,unsigned int) ;
 unsigned int FUNC_25 (unsigned int,unsigned int) ;
 int VAR_14 ;
 unsigned int FUNC_26 (unsigned int,unsigned int) ;
 unsigned int FUNC_27 (unsigned int,unsigned int) ;
 unsigned int FUNC_28 (int ) ;
 unsigned int FUNC_29 (int ) ;
 int FUNC_30 (int,char*,...) ;
 int FUNC_31 (char*) ;
 int FUNC_32 (struct s5p_mfc_dev*,int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_33(struct s5p_mfc_ctx *VAR_15)
{
 struct s5p_mfc_dev *VAR_16 = VAR_15->dev;
 unsigned int VAR_17, VAR_18;
 unsigned int VAR_19 = 0, VAR_20 = 0;
 int VAR_21;

 VAR_17 = FUNC_10(VAR_15->img_width);
 VAR_18 = FUNC_9(VAR_15->img_height);

 if (VAR_15->type == VAR_3) {
  FUNC_30(2, "Luma size:%d Chroma size:%d MV size:%d\n",
     VAR_15->luma_size, VAR_15->chroma_size, VAR_15->mv_size);
  FUNC_30(2, "Totals bufs: %d\n", VAR_15->total_dpb_count);
 } else if (VAR_15->type == VAR_4) {
  if (FUNC_6(VAR_16)) {
   VAR_15->tmv_buffer_size = 0;
  } else if (FUNC_8(VAR_16))
   VAR_15->tmv_buffer_size = VAR_12 *
   FUNC_0(FUNC_27(VAR_17, VAR_18),
   VAR_14);
  else
   VAR_15->tmv_buffer_size = VAR_12 *
   FUNC_0(FUNC_26(VAR_17, VAR_18),
   VAR_14);
  if (FUNC_6(VAR_16)) {
   VAR_19 = FUNC_29(VAR_15->img_width);
   VAR_20 = FUNC_28(VAR_15->img_height);
   if (VAR_15->codec_mode != VAR_8) {
    VAR_15->luma_dpb_size =
     FUNC_0((VAR_17 * 16), 64)
     * FUNC_0((VAR_18 * 16), 32)
      + 64;
    VAR_15->chroma_dpb_size =
     FUNC_0((VAR_17 * 16), 64)
       * (VAR_18 * 8)
       + 64;
   } else {
    VAR_15->luma_dpb_size =
     FUNC_0((VAR_19 * 32), 64)
     * FUNC_0((VAR_20 * 32), 32)
      + 64;
    VAR_15->chroma_dpb_size =
     FUNC_0((VAR_19 * 32), 64)
       * (VAR_20 * 16)
       + 64;
   }
  } else {
   VAR_15->luma_dpb_size = FUNC_0((VAR_17 * VAR_18) *
     VAR_10,
     VAR_9);
   VAR_15->chroma_dpb_size = FUNC_0((VAR_17 * VAR_18) *
     VAR_7,
     VAR_6);
  }
  if (FUNC_8(VAR_16))
   VAR_15->me_buffer_size = FUNC_0(FUNC_12(
      VAR_15->img_width, VAR_15->img_height,
      VAR_17, VAR_18),
      VAR_11);
  else
   VAR_15->me_buffer_size = FUNC_0(FUNC_11(
      VAR_15->img_width, VAR_15->img_height,
      VAR_17, VAR_18),
      VAR_11);

  FUNC_30(2, "recon luma size: %zu chroma size: %zu\n",
     VAR_15->luma_dpb_size, VAR_15->chroma_dpb_size);
 } else {
  return -VAR_2;
 }


 switch (VAR_15->codec_mode) {
 case 140:
 case 138:
  if (FUNC_6(VAR_16))
   FUNC_30(2, "Use min scratch buffer size\n");
  else if (FUNC_8(VAR_16))
   VAR_15->scratch_buf_size =
    FUNC_15(
     VAR_17,
     VAR_18);
  else
   VAR_15->scratch_buf_size =
    FUNC_14(
     VAR_17,
     VAR_18);
  VAR_15->scratch_buf_size = FUNC_0(VAR_15->scratch_buf_size,
    VAR_13);
  VAR_15->bank1.size =
   VAR_15->scratch_buf_size +
   (VAR_15->mv_count * VAR_15->mv_size);
  break;
 case 134:
  if (FUNC_6(VAR_16))
   FUNC_30(2, "Use min scratch buffer size\n");
  else if (FUNC_7(VAR_16)) {
   VAR_15->scratch_buf_size =
    FUNC_19(
      VAR_17,
      VAR_18);
  } else {
   VAR_15->scratch_buf_size =
    FUNC_18(
      VAR_17,
      VAR_18);
  }

  VAR_15->scratch_buf_size = FUNC_0(VAR_15->scratch_buf_size,
    VAR_13);
  VAR_15->bank1.size = VAR_15->scratch_buf_size;
  break;
 case 132:
 case 131:
  if (FUNC_6(VAR_16))
   FUNC_30(2, "Use min scratch buffer size\n");
  else
   VAR_15->scratch_buf_size =
    FUNC_21(
      VAR_17,
      VAR_18);

  VAR_15->scratch_buf_size = FUNC_0(VAR_15->scratch_buf_size,
    VAR_13);
  VAR_15->bank1.size = VAR_15->scratch_buf_size;
  break;
 case 135:
  VAR_15->bank1.size = 0;
  VAR_15->bank2.size = 0;
  break;
 case 142:
  if (FUNC_6(VAR_16))
   FUNC_30(2, "Use min scratch buffer size\n");
  else
   VAR_15->scratch_buf_size =
    FUNC_13(
      VAR_17,
      VAR_18);
  VAR_15->scratch_buf_size = FUNC_0(VAR_15->scratch_buf_size,
    VAR_13);
  VAR_15->bank1.size = VAR_15->scratch_buf_size;
  break;
 case 130:
  if (FUNC_6(VAR_16))
   FUNC_30(2, "Use min scratch buffer size\n");
  else if (FUNC_8(VAR_16))
   VAR_15->scratch_buf_size =
    FUNC_23(
      VAR_17,
      VAR_18);
  else
   VAR_15->scratch_buf_size =
    FUNC_22(
      VAR_17,
      VAR_18);
  VAR_15->scratch_buf_size = FUNC_0(VAR_15->scratch_buf_size,
    VAR_13);
  VAR_15->bank1.size = VAR_15->scratch_buf_size;
  break;
 case 137:
  FUNC_30(2, "Use min scratch buffer size\n");
  VAR_15->bank1.size =
   VAR_15->scratch_buf_size +
   (VAR_15->mv_count * VAR_15->mv_size);
  break;
 case 128:
  FUNC_30(2, "Use min scratch buffer size\n");
  VAR_15->bank1.size =
   VAR_15->scratch_buf_size +
   VAR_1;
  break;
 case 139:
  if (FUNC_6(VAR_16)) {
   FUNC_30(2, "Use min scratch buffer size\n");
   VAR_15->me_buffer_size =
   FUNC_0(FUNC_2(VAR_17, VAR_18), 16);
  } else if (FUNC_8(VAR_16))
   VAR_15->scratch_buf_size =
    FUNC_17(
     VAR_17,
     VAR_18);
  else
   VAR_15->scratch_buf_size =
    FUNC_16(
      VAR_17,
      VAR_18);
  VAR_15->scratch_buf_size = FUNC_0(VAR_15->scratch_buf_size,
    VAR_13);
  VAR_15->bank1.size =
   VAR_15->scratch_buf_size + VAR_15->tmv_buffer_size +
   (VAR_15->pb_count * (VAR_15->luma_dpb_size +
   VAR_15->chroma_dpb_size + VAR_15->me_buffer_size));
  VAR_15->bank2.size = 0;
  break;
 case 133:
 case 141:
  if (FUNC_6(VAR_16)) {
   FUNC_30(2, "Use min scratch buffer size\n");
   VAR_15->me_buffer_size =
    FUNC_0(FUNC_4(VAR_17,
       VAR_18), 16);
  } else
   VAR_15->scratch_buf_size =
    FUNC_20(
      VAR_17,
      VAR_18);
  VAR_15->scratch_buf_size = FUNC_0(VAR_15->scratch_buf_size,
    VAR_13);
  VAR_15->bank1.size =
   VAR_15->scratch_buf_size + VAR_15->tmv_buffer_size +
   (VAR_15->pb_count * (VAR_15->luma_dpb_size +
   VAR_15->chroma_dpb_size + VAR_15->me_buffer_size));
  VAR_15->bank2.size = 0;
  break;
 case 129:
  if (FUNC_6(VAR_16)) {
   FUNC_30(2, "Use min scratch buffer size\n");
   VAR_15->me_buffer_size =
    FUNC_0(FUNC_5(VAR_17, VAR_18),
      16);
  } else if (FUNC_8(VAR_16))
   VAR_15->scratch_buf_size =
    FUNC_25(
     VAR_17,
     VAR_18);
  else
   VAR_15->scratch_buf_size =
    FUNC_24(
      VAR_17,
      VAR_18);
  VAR_15->scratch_buf_size = FUNC_0(VAR_15->scratch_buf_size,
    VAR_13);
  VAR_15->bank1.size =
   VAR_15->scratch_buf_size + VAR_15->tmv_buffer_size +
   (VAR_15->pb_count * (VAR_15->luma_dpb_size +
   VAR_15->chroma_dpb_size + VAR_15->me_buffer_size));
  VAR_15->bank2.size = 0;
  break;
 case 136:
  FUNC_30(2, "Use min scratch buffer size\n");
  VAR_15->me_buffer_size =
   FUNC_0(FUNC_3(VAR_19, VAR_20), 16);
  VAR_15->scratch_buf_size = FUNC_0(VAR_15->scratch_buf_size, 256);
  VAR_15->bank1.size =
   VAR_15->scratch_buf_size + VAR_15->tmv_buffer_size +
   (VAR_15->pb_count * (VAR_15->luma_dpb_size +
   VAR_15->chroma_dpb_size + VAR_15->me_buffer_size));
  VAR_15->bank2.size = 0;
  break;
 default:
  break;
 }


 if (VAR_15->bank1.size > 0) {
  VAR_21 = FUNC_32(VAR_16, VAR_0, &VAR_15->bank1);
  if (VAR_21) {
   FUNC_31("Failed to allocate Bank1 memory\n");
   return VAR_21;
  }
  FUNC_1(VAR_15->bank1.dma & ((1 << VAR_5) - 1));
 }
 return 0;
}
