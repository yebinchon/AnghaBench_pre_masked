
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct video_frame {int flags; int aux_addr; } ;
struct tegra_vde_h264_decoder_ctx {int pic_width_in_mbs; int pic_height_in_mbs; int level_idc; int log2_max_pic_order_cnt_lsb; int pic_order_cnt_type; int log2_max_frame_num; int pic_init_qp; int chroma_qp_index_offset; int num_ref_idx_l0_active_minus1; int num_ref_idx_l1_active_minus1; int baseline_profile; scalar_t__ dpb_frames_nb; int direct_8x8_inference_flag; int constrained_intra_pred_flag; int pic_order_present_flag; int deblocking_filter_control_present_flag; int dpb_ref_frames_with_earlier_poc_nb; } ;
struct TYPE_2__ {struct device* parent; } ;
struct tegra_vde {int iram_lists_addr; int mbe; int sxe; int bsev; scalar_t__ iram; int mce; int tfe; int frameid; int vdma; int ppe; TYPE_1__ miscdev; } ;
struct device {int dummy; } ;
typedef size_t dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (int,int) ;
 int VAR_5 ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (scalar_t__,int ,unsigned int) ;
 int FUNC_3 (struct tegra_vde*,struct video_frame*,scalar_t__,int,int) ;
 int FUNC_4 (struct tegra_vde*,int,int) ;
 int FUNC_5 (struct tegra_vde*,int,int) ;
 int FUNC_6 (struct tegra_vde*,int,int ,int) ;
 int FUNC_7 (struct tegra_vde*,struct video_frame*,scalar_t__,int ) ;
 int FUNC_8 (struct tegra_vde*,scalar_t__,int) ;
 int FUNC_9 (struct tegra_vde*,int) ;
 int FUNC_10 (struct tegra_vde*) ;
 int FUNC_11 (struct tegra_vde*,int,int ,int) ;
 int FUNC_12 () ;

__attribute__((used)) static int FUNC_13(struct tegra_vde *VAR_6,
          struct tegra_vde_h264_decoder_ctx *VAR_7,
          struct video_frame *VAR_8,
          dma_addr_t VAR_9,
          size_t VAR_10,
          unsigned int VAR_11)
{
 struct device *VAR_12 = VAR_6->miscdev.parent;
 u32 VAR_13;
 int VAR_14;

 FUNC_6(VAR_6, 0x000A, VAR_6->sxe, 0xF0);
 FUNC_6(VAR_6, 0x000B, VAR_6->bsev, VAR_2);
 FUNC_6(VAR_6, 0x8002, VAR_6->mbe, 0x50);
 FUNC_6(VAR_6, 0x000A, VAR_6->mbe, 0xA0);
 FUNC_6(VAR_6, 0x000A, VAR_6->ppe, 0x14);
 FUNC_6(VAR_6, 0x000A, VAR_6->ppe, 0x28);
 FUNC_6(VAR_6, 0x0A00, VAR_6->mce, 0x08);
 FUNC_6(VAR_6, 0x000A, VAR_6->tfe, 0x00);
 FUNC_6(VAR_6, 0x0005, VAR_6->vdma, 0x04);

 FUNC_11(VAR_6, 0x00000000, VAR_6->vdma, 0x1C);
 FUNC_11(VAR_6, 0x00000000, VAR_6->vdma, 0x00);
 FUNC_11(VAR_6, 0x00000007, VAR_6->vdma, 0x04);
 FUNC_11(VAR_6, 0x00000007, VAR_6->frameid, 0x200);
 FUNC_11(VAR_6, 0x00000005, VAR_6->tfe, 0x04);
 FUNC_11(VAR_6, 0x00000000, VAR_6->mbe, 0x84);
 FUNC_11(VAR_6, 0x00000010, VAR_6->sxe, 0x08);
 FUNC_11(VAR_6, 0x00000150, VAR_6->sxe, 0x54);
 FUNC_11(VAR_6, 0x0000054C, VAR_6->sxe, 0x58);
 FUNC_11(VAR_6, 0x00000E34, VAR_6->sxe, 0x5C);
 FUNC_11(VAR_6, 0x063C063C, VAR_6->mce, 0x10);
 FUNC_11(VAR_6, 0x0003FC00, VAR_6->bsev, VAR_5);
 FUNC_11(VAR_6, 0x0000150D, VAR_6->bsev, VAR_0);
 FUNC_11(VAR_6, 0x00000100, VAR_6->bsev, VAR_1);
 FUNC_11(VAR_6, 0x00000000, VAR_6->bsev, 0x98);
 FUNC_11(VAR_6, 0x00000060, VAR_6->bsev, 0x9C);

 FUNC_2(VAR_6->iram + 128, 0, VAR_11 / 2);

 FUNC_3(VAR_6, VAR_8, VAR_7->dpb_frames_nb,
        VAR_7->pic_width_in_mbs, VAR_7->pic_height_in_mbs);

 FUNC_7(VAR_6, VAR_8,
        VAR_7->dpb_frames_nb - 1,
        VAR_7->dpb_ref_frames_with_earlier_poc_nb);





 FUNC_12();

 FUNC_11(VAR_6, 0x00000000, VAR_6->bsev, 0x8C);
 FUNC_11(VAR_6, VAR_9 + VAR_10,
    VAR_6->bsev, 0x54);

 VAR_13 = VAR_7->pic_width_in_mbs << 11 | VAR_7->pic_height_in_mbs << 3;

 FUNC_11(VAR_6, VAR_13, VAR_6->bsev, 0x88);

 VAR_14 = FUNC_9(VAR_6, 0);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_5(VAR_6, 0x800003FC, 0);
 if (VAR_14)
  return VAR_14;

 VAR_13 = 0x01500000;
 VAR_13 |= ((VAR_6->iram_lists_addr + 512) >> 2) & 0xFFFF;

 VAR_14 = FUNC_5(VAR_6, VAR_13, 1);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_5(VAR_6, 0x840F054C, 0);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_5(VAR_6, 0x80000080, 0);
 if (VAR_14)
  return VAR_14;

 VAR_13 = 0x0E340000 | ((VAR_6->iram_lists_addr >> 2) & 0xFFFF);

 VAR_14 = FUNC_5(VAR_6, VAR_13, 1);
 if (VAR_14)
  return VAR_14;

 VAR_13 = 0x00800005;
 VAR_13 |= VAR_7->pic_width_in_mbs << 11;
 VAR_13 |= VAR_7->pic_height_in_mbs << 3;

 FUNC_11(VAR_6, VAR_13, VAR_6->sxe, 0x10);

 VAR_13 = !VAR_7->baseline_profile << 17;
 VAR_13 |= VAR_7->level_idc << 13;
 VAR_13 |= VAR_7->log2_max_pic_order_cnt_lsb << 7;
 VAR_13 |= VAR_7->pic_order_cnt_type << 5;
 VAR_13 |= VAR_7->log2_max_frame_num;

 FUNC_11(VAR_6, VAR_13, VAR_6->sxe, 0x40);

 VAR_13 = VAR_7->pic_init_qp << 25;
 VAR_13 |= !!(VAR_7->deblocking_filter_control_present_flag) << 2;
 VAR_13 |= !!VAR_7->pic_order_present_flag;

 FUNC_11(VAR_6, VAR_13, VAR_6->sxe, 0x44);

 VAR_13 = VAR_7->chroma_qp_index_offset;
 VAR_13 |= VAR_7->num_ref_idx_l0_active_minus1 << 5;
 VAR_13 |= VAR_7->num_ref_idx_l1_active_minus1 << 10;
 VAR_13 |= !!VAR_7->constrained_intra_pred_flag << 15;

 FUNC_11(VAR_6, VAR_13, VAR_6->sxe, 0x48);

 VAR_13 = 0x0C000000;
 VAR_13 |= !!(VAR_8[0].flags & VAR_3) << 24;

 FUNC_11(VAR_6, VAR_13, VAR_6->sxe, 0x4C);

 VAR_13 = 0x03800000;
 VAR_13 |= VAR_10 & FUNC_0(19, 15);

 FUNC_11(VAR_6, VAR_13, VAR_6->sxe, 0x68);

 FUNC_11(VAR_6, VAR_9, VAR_6->sxe, 0x6C);

 VAR_13 = 0x10000005;
 VAR_13 |= VAR_7->pic_width_in_mbs << 11;
 VAR_13 |= VAR_7->pic_height_in_mbs << 3;

 FUNC_11(VAR_6, VAR_13, VAR_6->mbe, 0x80);

 VAR_13 = 0x26800000;
 VAR_13 |= VAR_7->level_idc << 4;
 VAR_13 |= !VAR_7->baseline_profile << 1;
 VAR_13 |= !!VAR_7->direct_8x8_inference_flag;

 FUNC_11(VAR_6, VAR_13, VAR_6->mbe, 0x80);

 FUNC_11(VAR_6, 0xF4000001, VAR_6->mbe, 0x80);
 FUNC_11(VAR_6, 0x20000000, VAR_6->mbe, 0x80);
 FUNC_11(VAR_6, 0xF4000101, VAR_6->mbe, 0x80);

 VAR_13 = 0x20000000;
 VAR_13 |= VAR_7->chroma_qp_index_offset << 8;

 FUNC_11(VAR_6, VAR_13, VAR_6->mbe, 0x80);

 VAR_14 = FUNC_8(VAR_6,
         VAR_7->dpb_frames_nb - 1,
         VAR_7->pic_order_cnt_type == 0);
 if (VAR_14) {
  FUNC_1(VAR_12, "MBE frames setup failed %d\n", VAR_14);
  return VAR_14;
 }

 FUNC_4(VAR_6, 0, 0x000009FC);
 FUNC_4(VAR_6, 2, 0x61DEAD00);
 FUNC_4(VAR_6, 4, 0x62DEAD00);
 FUNC_4(VAR_6, 6, 0x63DEAD00);
 FUNC_4(VAR_6, 8, VAR_8[0].aux_addr);

 VAR_13 = 0xFC000000;
 VAR_13 |= !!(VAR_8[0].flags & VAR_3) << 2;

 if (!VAR_7->baseline_profile)
  VAR_13 |= !!(VAR_8[0].flags & VAR_4) << 1;

 FUNC_11(VAR_6, VAR_13, VAR_6->mbe, 0x80);

 VAR_14 = FUNC_10(VAR_6);
 if (VAR_14) {
  FUNC_1(VAR_12, "MBE programming failed %d\n", VAR_14);
  return VAR_14;
 }

 return 0;
}
