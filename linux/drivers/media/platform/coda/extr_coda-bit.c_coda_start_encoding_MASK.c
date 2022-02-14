
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u32 ;
struct vb2_v4l2_buffer {int vb2_buf; } ;
struct v4l2_device {int dummy; } ;
struct TYPE_11__ {int width; int height; } ;
struct coda_q_data {int fourcc; int sizeimage; int bytesperline; TYPE_10__ rect; } ;
struct TYPE_13__ {int paddr; } ;
struct coda_dev {int coda_mutex; TYPE_9__* devtype; TYPE_2__ iram; struct v4l2_device v4l2_dev; } ;
struct TYPE_19__ {int m2m_ctx; } ;
struct TYPE_18__ {int framerate; int h264_disable_deblocking_filter_idc; int h264_slice_alpha_c0_offset_div2; int h264_slice_beta_offset_div2; int h264_constrained_intra_pred_flag; int h264_chroma_qp_index_offset; int jpeg_restart_interval; int gop_size; int bitrate; int bitrate_changed; int h264_intra_qp_changed; int vbv_delay; int vbv_size; int intra_refresh; int h264_min_qp; int h264_max_qp; int codec_mode; int jpeg_quality; void** jpeg_qmat_tab; } ;
struct TYPE_14__ {int search_ram_paddr; int search_ram_size; int buf_bit_use; int buf_ip_ac_dc_use; int buf_dbk_y_use; int buf_dbk_c_use; int buf_ovl_use; int buf_btp_use; } ;
struct TYPE_12__ {int paddr; } ;
struct coda_ctx {int frame_mem_ctrl; scalar_t__ tiled_map_type; int initialized; int num_internal_frames; scalar_t__* vpu_header_size; int ** vpu_header; struct coda_dev* dev; TYPE_8__ fh; TYPE_7__ params; TYPE_6__* codec; TYPE_5__* internal_frames; TYPE_3__ iram_info; int reg_idx; TYPE_1__ parabuf; } ;
struct TYPE_20__ {int product; } ;
struct TYPE_17__ {int src_fourcc; int mode; } ;
struct TYPE_15__ {int paddr; } ;
struct TYPE_16__ {TYPE_4__ buf; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;


 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;

 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;

 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int FUNC_1 (int ) ;
 int VAR_88 ;
 int FUNC_2 (int ) ;
 int VAR_89 ;
 int VAR_90 ;
 int VAR_91 ;
 int VAR_92 ;
 int VAR_93 ;
 int VAR_94 ;
 scalar_t__ VAR_95 ;
 int VAR_96 ;
 int VAR_97 ;
 int VAR_98 ;



 scalar_t__ VAR_99 ;
 int FUNC_3 (struct coda_ctx*,scalar_t__) ;
 int FUNC_4 (struct coda_ctx*,struct coda_q_data*,int) ;
 int FUNC_5 (struct coda_ctx*,int ) ;
 int FUNC_6 (int,struct coda_ctx*,char*,int,int,char*,char*,int,int) ;
 int FUNC_7 (struct coda_ctx*,struct vb2_v4l2_buffer*,int ,int *,scalar_t__*) ;
 scalar_t__ FUNC_8 (scalar_t__,int *) ;
 int FUNC_9 (struct coda_ctx*,int,int,int *,scalar_t__*,int) ;
 int FUNC_10 (struct coda_dev*) ;
 int FUNC_11 (struct coda_ctx*) ;
 scalar_t__ FUNC_12 (struct coda_dev*,int ) ;
 int FUNC_13 (struct coda_ctx*,int ) ;
 int FUNC_14 (struct coda_ctx*) ;
 int FUNC_15 (struct coda_ctx*) ;
 int FUNC_16 (struct coda_dev*,int,int ) ;
 struct coda_q_data* FUNC_17 (struct coda_ctx*,int ) ;
 void* FUNC_18 (int,int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int,int) ;
 int FUNC_22 (struct v4l2_device*,char*,...) ;
 struct vb2_v4l2_buffer* FUNC_23 (int ) ;
 int FUNC_24 (int *,int ) ;

__attribute__((used)) static int FUNC_25(struct coda_ctx *VAR_100)
{
 struct coda_dev *VAR_101 = VAR_100->dev;
 struct v4l2_device *VAR_102 = &VAR_101->v4l2_dev;
 struct coda_q_data *VAR_103, *VAR_104;
 u32 VAR_105, VAR_106;
 struct vb2_v4l2_buffer *VAR_107;
 int VAR_108, VAR_109, VAR_110;
 u32 VAR_111;
 int VAR_112;
 u32 VAR_113;

 VAR_103 = FUNC_17(VAR_100, VAR_98);
 VAR_104 = FUNC_17(VAR_100, VAR_97);
 VAR_111 = VAR_104->fourcc;

 VAR_107 = FUNC_23(VAR_100->fh.m2m_ctx);
 VAR_105 = FUNC_24(&VAR_107->vb2_buf, 0);
 VAR_106 = VAR_104->sizeimage;

 if (!FUNC_10(VAR_101)) {
  FUNC_22(VAR_102, "coda is not initialized.\n");
  return -VAR_92;
 }

 if (VAR_111 == 129) {
  if (!VAR_100->params.jpeg_qmat_tab[0])
   VAR_100->params.jpeg_qmat_tab[0] = FUNC_18(64, VAR_96);
  if (!VAR_100->params.jpeg_qmat_tab[1])
   VAR_100->params.jpeg_qmat_tab[1] = FUNC_18(64, VAR_96);
  FUNC_13(VAR_100, VAR_100->params.jpeg_quality);
 }

 FUNC_19(&VAR_101->coda_mutex);

 FUNC_16(VAR_101, VAR_100->parabuf.paddr, VAR_87);
 FUNC_16(VAR_101, VAR_105, FUNC_1(VAR_100->reg_idx));
 FUNC_16(VAR_101, VAR_105, FUNC_2(VAR_100->reg_idx));
 switch (VAR_101->devtype->product) {
 case 132:
  FUNC_16(VAR_101, VAR_34 |
   VAR_35, VAR_88);
  break;
 case 133:
  FUNC_16(VAR_101, 0, VAR_23);

 case 131:
 case 134:
  FUNC_16(VAR_101, VAR_14 |
   VAR_15, VAR_88);
  break;
 }

 VAR_100->frame_mem_ctrl &= ~(VAR_70 | (0x3 << 9) |
     VAR_22);
 if (VAR_103->fourcc == VAR_99)
  VAR_100->frame_mem_ctrl |= VAR_70;
 if (VAR_100->tiled_map_type == VAR_95)
  VAR_100->frame_mem_ctrl |= (0x3 << 9) | VAR_22;
 FUNC_16(VAR_101, VAR_100->frame_mem_ctrl, VAR_86);

 if (VAR_101->devtype->product == 132) {

  FUNC_16(VAR_101, VAR_101->iram.paddr,
      VAR_33);
 }


 VAR_110 = 0;
 switch (VAR_101->devtype->product) {
 case 132:
  VAR_110 = (VAR_103->rect.width & VAR_31)
   << VAR_32;
  VAR_110 |= (VAR_103->rect.height & VAR_30)
    << VAR_78;
  break;
 case 131:
 case 134:
  if (VAR_111 == 130) {
   VAR_110 = (FUNC_21(VAR_103->rect.width, 16) &
     VAR_12) << VAR_13;
   VAR_110 |= (FUNC_21(VAR_103->rect.height, 16) &
     VAR_11) << VAR_78;
   break;
  }

 case 133:
  VAR_110 = (VAR_103->rect.width & VAR_12)
   << VAR_13;
  VAR_110 |= (VAR_103->rect.height & VAR_11)
    << VAR_78;
 }
 FUNC_16(VAR_101, VAR_110, VAR_64);
 if (VAR_111 == 129)
  VAR_100->params.framerate = 0;
 FUNC_16(VAR_101, VAR_100->params.framerate,
     VAR_63);

 VAR_100->params.codec_mode = VAR_100->codec->mode;
 switch (VAR_111) {
 case 128:
  if (VAR_101->devtype->product == 133)
   FUNC_16(VAR_101, VAR_27,
       VAR_47);
  else
   FUNC_16(VAR_101, VAR_91,
       VAR_47);
  FUNC_16(VAR_101, 0, VAR_55);
  break;
 case 130:
  if (VAR_101->devtype->product == 133)
   FUNC_16(VAR_101, VAR_26,
       VAR_47);
  else
   FUNC_16(VAR_101, VAR_90,
       VAR_47);
  VAR_110 = ((VAR_100->params.h264_disable_deblocking_filter_idc &
     VAR_42) <<
    VAR_43) |
   ((VAR_100->params.h264_slice_alpha_c0_offset_div2 &
     VAR_38) <<
    VAR_39) |
   ((VAR_100->params.h264_slice_beta_offset_div2 &
     VAR_40) <<
    VAR_41) |
   (VAR_100->params.h264_constrained_intra_pred_flag <<
    VAR_37) |
   (VAR_100->params.h264_chroma_qp_index_offset &
    VAR_36);
  FUNC_16(VAR_101, VAR_110, VAR_44);
  break;
 case 129:
  FUNC_16(VAR_101, 0, VAR_50);
  FUNC_16(VAR_101, VAR_100->params.jpeg_restart_interval,
    VAR_51);
  FUNC_16(VAR_101, 0, VAR_52);
  FUNC_16(VAR_101, 0, VAR_54);
  FUNC_16(VAR_101, 0, VAR_53);

  FUNC_11(VAR_100);
  break;
 default:
  FUNC_22(VAR_102,
    "dst format (0x%08x) invalid.\n", VAR_111);
  VAR_109 = -VAR_93;
  goto out;
 }





 if (VAR_111 != 129) {
  VAR_110 = FUNC_15(VAR_100);
  FUNC_16(VAR_101, VAR_110, VAR_62);
  VAR_110 = VAR_100->params.gop_size;
  FUNC_16(VAR_101, VAR_110, VAR_48);
 }

 if (VAR_100->params.bitrate) {
  VAR_100->params.bitrate_changed = 0;
  VAR_100->params.h264_intra_qp_changed = 0;


  VAR_110 = (VAR_100->params.bitrate & VAR_81)
   << VAR_82;
  VAR_110 |= 1 & VAR_83;
  VAR_110 |= (VAR_100->params.vbv_delay &
     VAR_84)
    << VAR_85;
  if (VAR_101->devtype->product == 133)
   VAR_110 |= FUNC_0(31);
 } else {
  VAR_110 = 0;
 }
 FUNC_16(VAR_101, VAR_110, VAR_60);

 FUNC_16(VAR_101, VAR_100->params.vbv_size, VAR_57);
 FUNC_16(VAR_101, VAR_100->params.intra_refresh,
     VAR_49);

 FUNC_16(VAR_101, VAR_105, VAR_46);
 FUNC_16(VAR_101, VAR_106 / 1024, VAR_45);


 VAR_110 = 0;
 if (VAR_101->devtype->product == 133)
  VAR_108 = VAR_21;
 else
  VAR_108 = VAR_69;
 if (VAR_108 > 0) {
  FUNC_16(VAR_101, (VAR_108 & VAR_71) << VAR_72,
      VAR_58);
 }

 if (VAR_100->params.h264_min_qp || VAR_100->params.h264_max_qp) {
  FUNC_16(VAR_101,
      VAR_100->params.h264_min_qp << VAR_80 |
      VAR_100->params.h264_max_qp << VAR_79,
      VAR_61);
 }
 if (VAR_101->devtype->product == 133) {
  if (VAR_100->params.h264_max_qp)
   VAR_110 |= 1 << VAR_25;
  if (VAR_69 > 0)
   VAR_110 |= 1 << VAR_24;
 } else {
  if (VAR_69 > 0) {
   if (VAR_101->devtype->product == 132)
    VAR_110 |= 1 << VAR_29;
   else
    VAR_110 |= 1 << VAR_8;
  }
  if (VAR_100->params.h264_min_qp)
   VAR_110 |= 1 << VAR_10;
  if (VAR_100->params.h264_max_qp)
   VAR_110 |= 1 << VAR_9;
 }
 FUNC_16(VAR_101, VAR_110, VAR_56);

 FUNC_16(VAR_101, 0, VAR_59);

 FUNC_14(VAR_100);

 if (VAR_111 == 130) {
  switch (VAR_101->devtype->product) {
  case 132:
   VAR_110 = VAR_94 << 7;
   FUNC_16(VAR_101, VAR_110, VAR_28);
   break;
  case 131:
  case 134:
   FUNC_16(VAR_101, VAR_100->iram_info.search_ram_paddr,
     VAR_0);
   FUNC_16(VAR_101, VAR_100->iram_info.search_ram_size,
     VAR_1);
   break;
  case 133:
   FUNC_16(VAR_101, 0, VAR_17);
   FUNC_16(VAR_101, 0, VAR_16);
  }
 }

 VAR_109 = FUNC_5(VAR_100, VAR_67);
 if (VAR_109 < 0) {
  FUNC_22(VAR_102, "CODA_COMMAND_SEQ_INIT timeout\n");
  goto out;
 }

 if (FUNC_12(VAR_101, VAR_89) == 0) {
  FUNC_22(VAR_102, "CODA_COMMAND_SEQ_INIT failed\n");
  VAR_109 = -VAR_92;
  goto out;
 }
 VAR_100->initialized = 1;

 if (VAR_111 != 129) {
  if (VAR_101->devtype->product == 133)
   VAR_100->num_internal_frames = 4;
  else
   VAR_100->num_internal_frames = 2;
  VAR_109 = FUNC_4(VAR_100, VAR_103, VAR_111);
  if (VAR_109 < 0) {
   FUNC_22(VAR_102, "failed to allocate framebuffers\n");
   goto out;
  }
  VAR_112 = 2;
  VAR_113 = VAR_103->bytesperline;
 } else {
  VAR_100->num_internal_frames = 0;
  VAR_112 = 0;
  VAR_113 = 0;
 }
 FUNC_16(VAR_101, VAR_112, VAR_65);
 FUNC_16(VAR_101, VAR_113, VAR_66);

 if (VAR_101->devtype->product == 131 ||
     VAR_101->devtype->product == 134) {
  FUNC_16(VAR_101, VAR_103->bytesperline,
    VAR_7);
 }
 if (VAR_101->devtype->product != 132) {
  FUNC_16(VAR_101, VAR_100->iram_info.buf_bit_use,
    VAR_2);
  FUNC_16(VAR_101, VAR_100->iram_info.buf_ip_ac_dc_use,
    VAR_5);
  FUNC_16(VAR_101, VAR_100->iram_info.buf_dbk_y_use,
    VAR_4);
  FUNC_16(VAR_101, VAR_100->iram_info.buf_dbk_c_use,
    VAR_3);
  FUNC_16(VAR_101, VAR_100->iram_info.buf_ovl_use,
    VAR_6);
  if (VAR_101->devtype->product == 133) {
   FUNC_16(VAR_101, VAR_100->iram_info.buf_btp_use,
     VAR_18);

   FUNC_3(VAR_100, VAR_103->fourcc);


   FUNC_16(VAR_101, VAR_100->internal_frames[2].buf.paddr,
       VAR_19);
   FUNC_16(VAR_101, VAR_100->internal_frames[3].buf.paddr,
       VAR_20);
  }
 }

 VAR_109 = FUNC_5(VAR_100, VAR_68);
 if (VAR_109 < 0) {
  FUNC_22(VAR_102, "CODA_COMMAND_SET_FRAME_BUF timeout\n");
  goto out;
 }

 FUNC_6(1, VAR_100, "start encoding %dx%d %4.4s->%4.4s @ %d/%d Hz\n",
   VAR_103->rect.width, VAR_103->rect.height,
   (char *)&VAR_100->codec->src_fourcc, (char *)&VAR_111,
   VAR_100->params.framerate & 0xffff,
   (VAR_100->params.framerate >> 16) + 1);


 VAR_107 = FUNC_23(VAR_100->fh.m2m_ctx);
 switch (VAR_111) {
 case 130:




  VAR_109 = FUNC_7(VAR_100, VAR_107, VAR_74,
      &VAR_100->vpu_header[0][0],
      &VAR_100->vpu_header_size[0]);
  if (VAR_109 < 0)
   goto out;
  if (VAR_100->dev->devtype->product != 133 &&
      ((VAR_103->rect.width % 16) ||
       (VAR_103->rect.height % 16))) {
   VAR_109 = FUNC_9(VAR_100, VAR_103->rect.width,
        VAR_103->rect.height,
        &VAR_100->vpu_header[0][0],
        &VAR_100->vpu_header_size[0],
        sizeof(VAR_100->vpu_header[0]));
   if (VAR_109 < 0)
    goto out;
  }





  VAR_109 = FUNC_7(VAR_100, VAR_107, VAR_73,
      &VAR_100->vpu_header[1][0],
      &VAR_100->vpu_header_size[1]);
  if (VAR_109 < 0)
   goto out;






  VAR_100->vpu_header_size[2] = FUNC_8(
     (VAR_100->vpu_header_size[0] +
      VAR_100->vpu_header_size[1]),
      VAR_100->vpu_header[2]);
  break;
 case 128:




  VAR_109 = FUNC_7(VAR_100, VAR_107, VAR_77,
      &VAR_100->vpu_header[0][0],
      &VAR_100->vpu_header_size[0]);
  if (VAR_109 < 0)
   goto out;

  VAR_109 = FUNC_7(VAR_100, VAR_107, VAR_75,
      &VAR_100->vpu_header[1][0],
      &VAR_100->vpu_header_size[1]);
  if (VAR_109 < 0)
   goto out;

  VAR_109 = FUNC_7(VAR_100, VAR_107, VAR_76,
      &VAR_100->vpu_header[2][0],
      &VAR_100->vpu_header_size[2]);
  if (VAR_109 < 0)
   goto out;
  break;
 default:

  break;
 }

out:
 FUNC_20(&VAR_101->coda_mutex);
 return VAR_109;
}
