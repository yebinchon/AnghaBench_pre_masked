
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_pix_format {int sizeimage; } ;
struct TYPE_3__ {struct v4l2_pix_format pix; } ;
struct TYPE_4__ {TYPE_1__ fmt; } ;
struct imx_media_video_dev {TYPE_2__ fmt; } ;
struct csi_priv {int last_eof; int nfb4eof; int underrun_buf; int dev; void* nfb4eof_irq; int eof_timeout_timer; int sd; void* eof_irq; int idmac_ch; int ipu; scalar_t__ frame_sequence; int last_eof_comp; scalar_t__ ipu_buf_num; int vc_num; int csi_id; int smfc; struct imx_media_video_dev* vdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct csi_priv*) ;
 int VAR_5 ;
 int FUNC_1 (struct csi_priv*) ;
 int FUNC_2 (struct csi_priv*) ;
 int FUNC_3 (struct csi_priv*,int ) ;
 int FUNC_4 (int ,void*,struct csi_priv*) ;
 int FUNC_5 (int ,void*,int ,int ,char*,struct csi_priv*) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 void* FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_11 (int *,scalar_t__) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int *,char*,int) ;

__attribute__((used)) static int FUNC_14(struct csi_priv *VAR_7)
{
 struct imx_media_video_dev *VAR_8 = VAR_7->vdev;
 struct v4l2_pix_format *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_7);
 if (VAR_10)
  return VAR_10;

 FUNC_10(VAR_7->smfc, VAR_7->csi_id, VAR_7->vc_num);

 VAR_9 = &VAR_8->fmt.fmt.pix;

 VAR_10 = FUNC_6(VAR_7->dev, &VAR_7->underrun_buf,
          VAR_9->sizeimage);
 if (VAR_10)
  goto out_put_ipu;

 VAR_7->ipu_buf_num = 0;


 FUNC_8(&VAR_7->last_eof_comp);
 VAR_7->frame_sequence = 0;
 VAR_7->last_eof = 0;
 VAR_7->nfb4eof = 0;

 VAR_10 = FUNC_2(VAR_7);
 if (VAR_10) {
  FUNC_13(&VAR_7->sd, "csi_idmac_setup failed: %d\n", VAR_10);
  goto out_free_dma_buf;
 }

 VAR_7->nfb4eof_irq = FUNC_9(VAR_7->ipu,
       VAR_7->idmac_ch,
       VAR_2);
 VAR_10 = FUNC_5(VAR_7->dev, VAR_7->nfb4eof_irq,
          VAR_5, 0,
          "imx-smfc-nfb4eof", VAR_7);
 if (VAR_10) {
  FUNC_13(&VAR_7->sd,
    "Error registering NFB4EOF irq: %d\n", VAR_10);
  goto out_unsetup;
 }

 VAR_7->eof_irq = FUNC_9(VAR_7->ipu, VAR_7->idmac_ch,
           VAR_1);

 VAR_10 = FUNC_5(VAR_7->dev, VAR_7->eof_irq,
          VAR_4, 0,
          "imx-smfc-eof", VAR_7);
 if (VAR_10) {
  FUNC_13(&VAR_7->sd,
    "Error registering eof irq: %d\n", VAR_10);
  goto out_free_nfb4eof_irq;
 }


 FUNC_11(&VAR_7->eof_timeout_timer,
    VAR_6 + FUNC_12(VAR_0));

 return 0;

out_free_nfb4eof_irq:
 FUNC_4(VAR_7->dev, VAR_7->nfb4eof_irq, VAR_7);
out_unsetup:
 FUNC_3(VAR_7, VAR_3);
out_free_dma_buf:
 FUNC_7(VAR_7->dev, &VAR_7->underrun_buf);
out_put_ipu:
 FUNC_1(VAR_7);
 return VAR_10;
}
