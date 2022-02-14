
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_pix_format {int height; int width; int quantization; int ycbcr_enc; } ;
struct v4l2_mbus_framefmt {int height; int width; int quantization; int ycbcr_enc; } ;
struct prp_priv {int ic; int out_ch; int rot_mode; struct imx_media_pixfmt** cc; struct v4l2_mbus_framefmt* format_mbus; struct imx_ic_priv* ic_priv; struct imx_media_video_dev* vdev; } ;
struct ipu_ic_csc {int dummy; } ;
struct TYPE_3__ {struct v4l2_pix_format pix; } ;
struct TYPE_4__ {TYPE_1__ fmt; } ;
struct imx_media_video_dev {struct imx_media_pixfmt* cc; TYPE_2__ fmt; } ;
struct imx_media_pixfmt {int cs; } ;
struct imx_ic_priv {int ipu; int sd; } ;
typedef int dma_addr_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ipu_ic_csc*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,struct ipu_ic_csc*,int ,int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct prp_priv*,int ,int ,int ,int ,int) ;
 int FUNC_10 (struct prp_priv*,int *) ;
 int FUNC_11 (struct prp_priv*,int ) ;
 int FUNC_12 (int *,char*,int) ;

__attribute__((used)) static int FUNC_13(struct prp_priv *VAR_2)
{
 struct imx_media_video_dev *VAR_3 = VAR_2->vdev;
 struct imx_ic_priv *VAR_4 = VAR_2->ic_priv;
 const struct imx_media_pixfmt *VAR_5, *VAR_6;
 struct v4l2_mbus_framefmt *VAR_7;
 struct v4l2_pix_format *VAR_8;
 struct ipu_ic_csc VAR_9;
 dma_addr_t VAR_10[2];
 int VAR_11;

 VAR_7 = &VAR_2->format_mbus[VAR_0];
 VAR_8 = &VAR_3->fmt.fmt.pix;
 VAR_6 = VAR_2->cc[VAR_0];
 VAR_5 = VAR_3->cc;

 VAR_11 = FUNC_2(&VAR_9,
         VAR_7->ycbcr_enc, VAR_7->quantization,
         VAR_6->cs,
         VAR_8->ycbcr_enc, VAR_8->quantization,
         VAR_5->cs);
 if (VAR_11) {
  FUNC_12(&VAR_4->sd, "ipu_ic_calc_csc failed, %d\n",
    VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_6(VAR_2->ic, &VAR_9,
          VAR_7->width, VAR_7->height,
          VAR_8->width, VAR_8->height);
 if (VAR_11) {
  FUNC_12(&VAR_4->sd, "ipu_ic_task_init failed, %d\n", VAR_11);
  return VAR_11;
 }

 FUNC_10(VAR_2, VAR_10);


 VAR_11 = FUNC_9(VAR_2, VAR_2->out_ch, VAR_2->rot_mode,
    VAR_10[0], VAR_10[1], 0);
 if (VAR_11) {
  FUNC_12(&VAR_4->sd,
    "prp_setup_channel(out_ch) failed, %d\n", VAR_11);
  goto unsetup_vb2;
 }

 FUNC_0(VAR_2->out_ch);
 FUNC_3(VAR_2->ic);
 FUNC_1(VAR_4->ipu);

 FUNC_4(VAR_2->ic);


 FUNC_8(VAR_2->out_ch, 0);
 FUNC_8(VAR_2->out_ch, 1);


 FUNC_7(VAR_2->out_ch);


 FUNC_5(VAR_2->ic);

 return 0;

unsetup_vb2:
 FUNC_11(VAR_2, VAR_1);
 return VAR_11;
}
