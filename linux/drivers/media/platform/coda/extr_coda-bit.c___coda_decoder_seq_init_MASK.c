
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


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct TYPE_7__ {int left; int top; int width; int height; } ;
struct coda_q_data {scalar_t__ fourcc; int bytesperline; int height; TYPE_1__ rect; } ;
struct coda_dev {TYPE_6__* devtype; int v4l2_dev; int coda_mutex; } ;
struct TYPE_11__ {int paddr; } ;
struct TYPE_10__ {scalar_t__ codec_mode_aux; int codec_mode; } ;
struct TYPE_8__ {scalar_t__ paddr; scalar_t__ size; } ;
struct coda_ctx {int frame_mem_ctrl; scalar_t__ tiled_map_type; int display_idx; unsigned int sequence_offset; int initialized; int num_internal_frames; scalar_t__ use_vdoa; scalar_t__ bit_stream_param; TYPE_5__ psbuf; TYPE_4__ params; TYPE_3__* codec; int reg_idx; scalar_t__ frm_dis_flg; TYPE_2__ bitstream; struct coda_dev* dev; } ;
struct TYPE_12__ {scalar_t__ product; } ;
struct TYPE_9__ {scalar_t__ src_fourcc; int mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
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
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 scalar_t__ VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 scalar_t__ VAR_47 ;
 int FUNC_1 (struct coda_ctx*,int ) ;
 int FUNC_2 (int,struct coda_ctx*,char*,...) ;
 int FUNC_3 (struct coda_ctx*) ;
 int FUNC_4 (struct coda_ctx*) ;
 void* FUNC_5 (struct coda_dev*,int ) ;
 scalar_t__ FUNC_6 (struct coda_ctx*) ;
 int FUNC_7 (struct coda_ctx*,scalar_t__,scalar_t__) ;
 int FUNC_8 (struct coda_dev*,int,int ) ;
 struct coda_q_data* FUNC_9 (struct coda_ctx*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int *,char*,...) ;

__attribute__((used)) static int FUNC_13(struct coda_ctx *VAR_48)
{
 struct coda_q_data *VAR_49, *VAR_50;
 u32 VAR_51, VAR_52;
 struct coda_dev *VAR_53 = VAR_48->dev;
 int VAR_54, VAR_55;
 u32 VAR_56, VAR_57;
 u32 VAR_58;
 int VAR_59;

 FUNC_10(&VAR_53->coda_mutex);

 FUNC_2(1, VAR_48, "Video Data Order Adapter: %s\n",
   VAR_48->use_vdoa ? "Enabled" : "Disabled");


 VAR_49 = FUNC_9(VAR_48, VAR_42);
 VAR_50 = FUNC_9(VAR_48, VAR_41);
 VAR_51 = VAR_48->bitstream.paddr;
 VAR_52 = VAR_48->bitstream.size;
 VAR_56 = VAR_49->fourcc;
 VAR_57 = VAR_50->fourcc;


 FUNC_4(VAR_48);

 VAR_48->frame_mem_ctrl &= ~(VAR_24 | (0x3 << 9) |
     VAR_5);
 if (VAR_57 == VAR_46 || VAR_57 == VAR_47)
  VAR_48->frame_mem_ctrl |= VAR_24;
 if (VAR_48->tiled_map_type == VAR_40)
  VAR_48->frame_mem_ctrl |= (0x3 << 9) |
   ((VAR_48->use_vdoa) ? 0 : VAR_5);
 FUNC_8(VAR_53, VAR_48->frame_mem_ctrl, VAR_30);

 VAR_48->display_idx = -1;
 VAR_48->frm_dis_flg = 0;
 FUNC_8(VAR_53, 0, FUNC_0(VAR_48->reg_idx));

 FUNC_8(VAR_53, VAR_51, VAR_13);
 FUNC_8(VAR_53, VAR_52 / 1024, VAR_12);
 VAR_58 = 0;
 if (FUNC_6(VAR_48))
  VAR_58 |= VAR_31;
 if (VAR_48->codec->src_fourcc == VAR_44)
  VAR_58 |= VAR_29;
 FUNC_8(VAR_53, VAR_58, VAR_16);

 VAR_48->params.codec_mode = VAR_48->codec->mode;
 if (VAR_53->devtype->product == VAR_10 &&
     VAR_56 == VAR_45)
  VAR_48->params.codec_mode_aux = VAR_27;
 else
  VAR_48->params.codec_mode_aux = 0;
 if (VAR_56 == VAR_45) {
  FUNC_8(VAR_53, VAR_28,
      VAR_15);
 }
 if (VAR_56 == VAR_43) {
  if (VAR_53->devtype->product == VAR_25 ||
      VAR_53->devtype->product == VAR_9) {
   FUNC_8(VAR_53, VAR_48->psbuf.paddr,
     VAR_18);
   FUNC_8(VAR_53, (VAR_3 / 1024),
     VAR_17);
  }
  if (VAR_53->devtype->product == VAR_10) {
   FUNC_8(VAR_53, 0, VAR_21);
   FUNC_8(VAR_53, 512, VAR_19);
  }
 }
 if (VAR_56 == VAR_44)
  FUNC_8(VAR_53, 0, VAR_14);
 if (VAR_53->devtype->product != VAR_10)
  FUNC_8(VAR_53, 0, VAR_20);

 VAR_48->bit_stream_param = VAR_11;
 VAR_59 = FUNC_1(VAR_48, VAR_22);
 VAR_48->bit_stream_param = 0;
 if (VAR_59) {
  FUNC_12(&VAR_53->v4l2_dev, "CODA_COMMAND_SEQ_INIT timeout\n");
  return VAR_59;
 }
 VAR_48->sequence_offset = ~0U;
 VAR_48->initialized = 1;


 FUNC_3(VAR_48);

 if (FUNC_5(VAR_53, VAR_37) == 0) {
  FUNC_12(&VAR_53->v4l2_dev,
   "CODA_COMMAND_SEQ_INIT failed, error code = 0x%x\n",
   FUNC_5(VAR_53, VAR_34));
  return -VAR_38;
 }

 VAR_58 = FUNC_5(VAR_53, VAR_36);
 if (VAR_53->devtype->product == VAR_23) {
  VAR_54 = (VAR_58 >> VAR_8) & VAR_7;
  VAR_55 = VAR_58 & VAR_6;
 } else {
  VAR_54 = (VAR_58 >> VAR_2) & VAR_1;
  VAR_55 = VAR_58 & VAR_0;
 }

 if (VAR_54 > VAR_50->bytesperline || VAR_55 > VAR_50->height) {
  FUNC_12(&VAR_53->v4l2_dev, "stream is %dx%d, not %dx%d\n",
    VAR_54, VAR_55, VAR_50->bytesperline,
    VAR_50->height);
  return -VAR_39;
 }

 VAR_54 = FUNC_11(VAR_54, 16);
 VAR_55 = FUNC_11(VAR_55, 16);

 FUNC_2(1, VAR_48, "start decoding: %dx%d\n", VAR_54, VAR_55);

 VAR_48->num_internal_frames = FUNC_5(VAR_53, VAR_35);







 if (VAR_48->use_vdoa)
  VAR_48->num_internal_frames += 1;
 if (VAR_48->num_internal_frames > VAR_26) {
  FUNC_12(&VAR_53->v4l2_dev,
    "not enough framebuffers to decode (%d < %d)\n",
    VAR_26, VAR_48->num_internal_frames);
  return -VAR_39;
 }

 if (VAR_56 == VAR_43) {
  u32 VAR_60;
  u32 VAR_61;

  VAR_60 = FUNC_5(VAR_53, VAR_32);
  VAR_61 = FUNC_5(VAR_53, VAR_33);

  VAR_50->rect.left = (VAR_60 >> 10) & 0x3ff;
  VAR_50->rect.top = (VAR_61 >> 10) & 0x3ff;
  VAR_50->rect.width = VAR_54 - VAR_50->rect.left -
      (VAR_60 & 0x3ff);
  VAR_50->rect.height = VAR_55 - VAR_50->rect.top -
       (VAR_61 & 0x3ff);
 }

 if (VAR_53->devtype->product != VAR_23) {
  u8 VAR_62, VAR_63;

  VAR_58 = FUNC_5(VAR_53, VAR_4);
  VAR_62 = VAR_58 & 0xff;
  VAR_63 = (VAR_58 >> 8) & 0x7f;

  if (VAR_62 || VAR_63)
   FUNC_7(VAR_48, VAR_62, VAR_63);
 }

 return 0;
}
