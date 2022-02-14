
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct vb2_v4l2_buffer {int sequence; int vb2_buf; int flags; } ;
struct coda_q_data {int fourcc; int sizeimage; int bytesperline; } ;
struct coda_dev {TYPE_3__* devtype; int v4l2_dev; } ;
struct TYPE_5__ {int axi_sram_use; } ;
struct TYPE_8__ {int force_ipicture; int gop_size; int h264_intra_qp; int mpeg4_intra_qp; int h264_inter_qp; int mpeg4_inter_qp; int rot_mode; } ;
struct TYPE_6__ {int m2m_ctx; } ;
struct coda_ctx {int osequence; int* vpu_header_size; int bit_stream_param; TYPE_1__ iram_info; int streamon_out; TYPE_4__ params; struct coda_dev* dev; int ** vpu_header; TYPE_2__ fh; } ;
struct TYPE_7__ {scalar_t__ product; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;



 int FUNC_0 (struct coda_ctx*,int ) ;
 int FUNC_1 (struct coda_ctx*) ;
 int FUNC_2 (struct coda_ctx*) ;
 int FUNC_3 (struct coda_dev*,int,int ) ;
 int FUNC_4 (struct coda_ctx*,struct coda_q_data*,struct vb2_v4l2_buffer*,int) ;
 struct coda_q_data* FUNC_5 (struct coda_ctx*,int ) ;
 int FUNC_6 (int,int *,int) ;
 int FUNC_7 (struct coda_ctx*,struct vb2_v4l2_buffer*) ;
 struct vb2_v4l2_buffer* FUNC_8 (int ) ;
 struct vb2_v4l2_buffer* FUNC_9 (int ) ;
 int FUNC_10 (int *,char*,...) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static int FUNC_13(struct coda_ctx *VAR_21)
{
 struct coda_q_data *VAR_22, *VAR_23;
 struct vb2_v4l2_buffer *VAR_24, *VAR_25;
 struct coda_dev *VAR_26 = VAR_21->dev;
 int VAR_27;
 int VAR_28 = 0;
 u32 VAR_29, VAR_30;
 u32 VAR_31 = 0;
 u32 VAR_32;
 u32 VAR_33;
 int VAR_34;

 VAR_34 = FUNC_1(VAR_21);
 if (VAR_34 < 0) {
  FUNC_10(&VAR_21->dev->v4l2_dev, "parameter change failed: %d\n",
     VAR_34);
 }

 VAR_24 = FUNC_9(VAR_21->fh.m2m_ctx);
 VAR_25 = FUNC_8(VAR_21->fh.m2m_ctx);
 VAR_22 = FUNC_5(VAR_21, VAR_20);
 VAR_23 = FUNC_5(VAR_21, VAR_19);
 VAR_32 = VAR_23->fourcc;

 VAR_24->sequence = VAR_21->osequence;
 VAR_25->sequence = VAR_21->osequence;
 VAR_21->osequence++;

 VAR_27 = VAR_21->params.force_ipicture;
 if (VAR_27)
  VAR_21->params.force_ipicture = 0;
 else if (VAR_21->params.gop_size != 0 &&
   (VAR_24->sequence % VAR_21->params.gop_size) == 0)
  VAR_27 = 1;






 if (!VAR_27) {
  VAR_24->flags |= VAR_18;
  VAR_24->flags &= ~VAR_17;
 } else {
  VAR_24->flags |= VAR_17;
  VAR_24->flags &= ~VAR_18;
 }

 if (VAR_26->devtype->product == VAR_5)
  FUNC_2(VAR_21);





 if (VAR_24->sequence == 0 || VAR_27) {
  VAR_29 =
   FUNC_11(&VAR_25->vb2_buf, 0) +
   VAR_21->vpu_header_size[0] +
   VAR_21->vpu_header_size[1] +
   VAR_21->vpu_header_size[2];
  VAR_30 = VAR_23->sizeimage -
   VAR_21->vpu_header_size[0] -
   VAR_21->vpu_header_size[1] -
   VAR_21->vpu_header_size[2];
  FUNC_6(FUNC_12(&VAR_25->vb2_buf, 0),
         &VAR_21->vpu_header[0][0], VAR_21->vpu_header_size[0]);
  FUNC_6(FUNC_12(&VAR_25->vb2_buf, 0)
   + VAR_21->vpu_header_size[0], &VAR_21->vpu_header[1][0],
   VAR_21->vpu_header_size[1]);
  FUNC_6(FUNC_12(&VAR_25->vb2_buf, 0)
   + VAR_21->vpu_header_size[0] + VAR_21->vpu_header_size[1],
   &VAR_21->vpu_header[2][0], VAR_21->vpu_header_size[2]);
 } else {
  VAR_29 =
   FUNC_11(&VAR_25->vb2_buf, 0);
  VAR_30 = VAR_23->sizeimage;
 }

 if (VAR_27) {
  switch (VAR_32) {
  case 130:
   VAR_28 = VAR_21->params.h264_intra_qp;
   break;
  case 128:
   VAR_28 = VAR_21->params.mpeg4_intra_qp;
   break;
  case 129:
   VAR_28 = 30;
   break;
  default:
   FUNC_10(&VAR_21->dev->v4l2_dev,
    "cannot set intra qp, fmt not supported\n");
   break;
  }
 } else {
  switch (VAR_32) {
  case 130:
   VAR_28 = VAR_21->params.h264_inter_qp;
   break;
  case 128:
   VAR_28 = VAR_21->params.mpeg4_inter_qp;
   break;
  default:
   FUNC_10(&VAR_21->dev->v4l2_dev,
    "cannot set inter qp, fmt not supported\n");
   break;
  }
 }


 if (VAR_21->params.rot_mode)
  VAR_31 = VAR_16 | VAR_21->params.rot_mode;
 FUNC_3(VAR_26, VAR_31, VAR_11);
 FUNC_3(VAR_26, VAR_28, VAR_10);

 if (VAR_26->devtype->product == VAR_5) {
  FUNC_3(VAR_26, 4 , VAR_2);
  FUNC_3(VAR_26, VAR_22->bytesperline,
      VAR_3);
  FUNC_3(VAR_26, 0, VAR_4);

  VAR_33 = VAR_1;
 } else {
  VAR_33 = VAR_12;
 }
 FUNC_4(VAR_21, VAR_22, VAR_24, VAR_33);

 FUNC_3(VAR_26, VAR_27 << 1 & 0x2,
     VAR_9);

 FUNC_3(VAR_26, VAR_29, VAR_8);
 FUNC_3(VAR_26, VAR_30 / 1024,
     VAR_7);

 if (!VAR_21->streamon_out) {

  VAR_21->bit_stream_param |= VAR_6;
  FUNC_3(VAR_26, VAR_21->bit_stream_param,
      VAR_15);
 }

 if (VAR_26->devtype->product != VAR_14)
  FUNC_3(VAR_26, VAR_21->iram_info.axi_sram_use,
    VAR_0);

 FUNC_7(VAR_21, VAR_24);

 FUNC_0(VAR_21, VAR_13);

 return 0;
}
