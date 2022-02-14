
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_pix_format {int sizeimage; } ;
struct prp_priv {int last_eof; int nfb4eof; int underrun_buf; void* nfb4eof_irq; void* eof_irq; int eof_timeout_timer; int src_sd; int out_ch; int rot_out_ch; int rot_mode; scalar_t__ frame_sequence; int last_eof_comp; scalar_t__ ipu_buf_num; struct imx_media_video_dev* vdev; struct imx_ic_priv* ic_priv; } ;
struct TYPE_3__ {struct v4l2_pix_format pix; } ;
struct TYPE_4__ {TYPE_1__ fmt; } ;
struct imx_media_video_dev {TYPE_2__ fmt; } ;
struct imx_ic_priv {int ipu_dev; int sd; int ipu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,void*,struct prp_priv*) ;
 int FUNC_1 (int ,void*,int ,int ,char*,struct prp_priv*) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int *,scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_6 ;
 int FUNC_9 (struct prp_priv*) ;
 int VAR_7 ;
 int FUNC_10 (struct prp_priv*) ;
 int FUNC_11 (struct prp_priv*) ;
 int FUNC_12 (struct prp_priv*) ;
 int FUNC_13 (struct prp_priv*,int ) ;
 int VAR_8 ;
 int FUNC_14 (int *,char*,int) ;
 int FUNC_15 (int ,int ,int ,int) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_16(struct prp_priv *VAR_10)
{
 struct imx_ic_priv *VAR_11 = VAR_10->ic_priv;
 struct imx_media_video_dev *VAR_12 = VAR_10->vdev;
 struct v4l2_pix_format *VAR_13;
 int VAR_14;

 VAR_14 = FUNC_9(VAR_10);
 if (VAR_14)
  return VAR_14;

 VAR_13 = &VAR_12->fmt.fmt.pix;

 VAR_14 = FUNC_2(VAR_11->ipu_dev, &VAR_10->underrun_buf,
          VAR_13->sizeimage);
 if (VAR_14)
  goto out_put_ipu;

 VAR_10->ipu_buf_num = 0;


 FUNC_4(&VAR_10->last_eof_comp);
 VAR_10->frame_sequence = 0;
 VAR_10->last_eof = 0;
 VAR_10->nfb4eof = 0;

 if (FUNC_6(VAR_10->rot_mode))
  VAR_14 = FUNC_12(VAR_10);
 else
  VAR_14 = FUNC_11(VAR_10);
 if (VAR_14)
  goto out_free_underrun;

 VAR_10->nfb4eof_irq = FUNC_5(VAR_11->ipu,
        VAR_10->out_ch,
        VAR_3);
 VAR_14 = FUNC_1(VAR_11->ipu_dev, VAR_10->nfb4eof_irq,
          VAR_7, 0,
          "imx-ic-prp-nfb4eof", VAR_10);
 if (VAR_14) {
  FUNC_14(&VAR_11->sd,
    "Error registering NFB4EOF irq: %d\n", VAR_14);
  goto out_unsetup;
 }

 if (FUNC_6(VAR_10->rot_mode))
  VAR_10->eof_irq = FUNC_5(
   VAR_11->ipu, VAR_10->rot_out_ch, VAR_2);
 else
  VAR_10->eof_irq = FUNC_5(
   VAR_11->ipu, VAR_10->out_ch, VAR_2);

 VAR_14 = FUNC_1(VAR_11->ipu_dev, VAR_10->eof_irq,
          VAR_6, 0,
          "imx-ic-prp-eof", VAR_10);
 if (VAR_14) {
  FUNC_14(&VAR_11->sd,
    "Error registering eof irq: %d\n", VAR_14);
  goto out_free_nfb4eof_irq;
 }


 VAR_14 = FUNC_15(VAR_10->src_sd, VAR_9, VAR_8, 1);
 VAR_14 = (VAR_14 && VAR_14 != -VAR_0) ? VAR_14 : 0;
 if (VAR_14) {
  FUNC_14(&VAR_11->sd,
    "upstream stream on failed: %d\n", VAR_14);
  goto out_free_eof_irq;
 }


 FUNC_7(&VAR_10->eof_timeout_timer,
    VAR_5 + FUNC_8(VAR_1));

 return 0;

out_free_eof_irq:
 FUNC_0(VAR_11->ipu_dev, VAR_10->eof_irq, VAR_10);
out_free_nfb4eof_irq:
 FUNC_0(VAR_11->ipu_dev, VAR_10->nfb4eof_irq, VAR_10);
out_unsetup:
 FUNC_13(VAR_10, VAR_4);
out_free_underrun:
 FUNC_3(VAR_11->ipu_dev, &VAR_10->underrun_buf);
out_put_ipu:
 FUNC_10(VAR_10);
 return VAR_14;
}
