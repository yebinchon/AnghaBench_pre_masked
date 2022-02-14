
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_pix_format {int width; int height; int sizeimage; int quantization; int ycbcr_enc; } ;
struct v4l2_mbus_framefmt {int height; int width; int quantization; int ycbcr_enc; } ;
struct prp_priv {TYPE_3__* rot_buf; int ic; int rot_out_ch; int rot_in_ch; int out_ch; int rot_mode; struct imx_media_pixfmt** cc; struct v4l2_mbus_framefmt* format_mbus; struct imx_ic_priv* ic_priv; struct imx_media_video_dev* vdev; } ;
struct ipu_ic_csc {int dummy; } ;
struct TYPE_5__ {struct v4l2_pix_format pix; } ;
struct TYPE_6__ {TYPE_1__ fmt; } ;
struct imx_media_video_dev {struct imx_media_pixfmt* cc; TYPE_2__ fmt; } ;
struct imx_media_pixfmt {int cs; } ;
struct imx_ic_priv {int ipu_dev; int sd; } ;
typedef int dma_addr_t ;
struct TYPE_7__ {int phys; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_3__*,int ) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (struct ipu_ic_csc*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct ipu_ic_csc*,int ,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct prp_priv*,int ,int ,int ,int ,int) ;
 int FUNC_10 (struct prp_priv*,int *) ;
 int FUNC_11 (struct prp_priv*,int ) ;
 int FUNC_12 (int *,char*,int) ;

__attribute__((used)) static int FUNC_13(struct prp_priv *VAR_3)
{
 struct imx_media_video_dev *VAR_4 = VAR_3->vdev;
 struct imx_ic_priv *VAR_5 = VAR_3->ic_priv;
 const struct imx_media_pixfmt *VAR_6, *VAR_7;
 struct v4l2_mbus_framefmt *VAR_8;
 struct v4l2_pix_format *VAR_9;
 struct ipu_ic_csc VAR_10;
 dma_addr_t VAR_11[2];
 int VAR_12;

 VAR_8 = &VAR_3->format_mbus[VAR_1];
 VAR_9 = &VAR_4->fmt.fmt.pix;
 VAR_7 = VAR_3->cc[VAR_1];
 VAR_6 = VAR_4->cc;

 VAR_12 = FUNC_2(&VAR_10,
         VAR_8->ycbcr_enc, VAR_8->quantization,
         VAR_7->cs,
         VAR_9->ycbcr_enc, VAR_9->quantization,
         VAR_6->cs);
 if (VAR_12) {
  FUNC_12(&VAR_5->sd, "ipu_ic_calc_csc failed, %d\n",
    VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_0(VAR_5->ipu_dev, &VAR_3->rot_buf[0],
          VAR_9->sizeimage);
 if (VAR_12) {
  FUNC_12(&VAR_5->sd, "failed to alloc rot_buf[0], %d\n", VAR_12);
  return VAR_12;
 }
 VAR_12 = FUNC_0(VAR_5->ipu_dev, &VAR_3->rot_buf[1],
          VAR_9->sizeimage);
 if (VAR_12) {
  FUNC_12(&VAR_5->sd, "failed to alloc rot_buf[1], %d\n", VAR_12);
  goto free_rot0;
 }

 VAR_12 = FUNC_5(VAR_3->ic, &VAR_10,
          VAR_8->width, VAR_8->height,
          VAR_9->height, VAR_9->width);
 if (VAR_12) {
  FUNC_12(&VAR_5->sd, "ipu_ic_task_init failed, %d\n", VAR_12);
  goto free_rot1;
 }


 VAR_12 = FUNC_9(VAR_3, VAR_3->out_ch, VAR_0,
    VAR_3->rot_buf[0].phys, VAR_3->rot_buf[1].phys,
    1);
 if (VAR_12) {
  FUNC_12(&VAR_5->sd,
    "prp_setup_channel(out_ch) failed, %d\n", VAR_12);
  goto free_rot1;
 }


 VAR_12 = FUNC_9(VAR_3, VAR_3->rot_in_ch, VAR_3->rot_mode,
    VAR_3->rot_buf[0].phys, VAR_3->rot_buf[1].phys,
    1);
 if (VAR_12) {
  FUNC_12(&VAR_5->sd,
    "prp_setup_channel(rot_in_ch) failed, %d\n", VAR_12);
  goto free_rot1;
 }

 FUNC_10(VAR_3, VAR_11);


 VAR_12 = FUNC_9(VAR_3, VAR_3->rot_out_ch, VAR_0,
    VAR_11[0], VAR_11[1],
    0);
 if (VAR_12) {
  FUNC_12(&VAR_5->sd,
    "prp_setup_channel(rot_out_ch) failed, %d\n", VAR_12);
  goto unsetup_vb2;
 }


 FUNC_7(VAR_3->out_ch, VAR_3->rot_in_ch);


 FUNC_3(VAR_3->ic);


 FUNC_8(VAR_3->out_ch, 0);
 FUNC_8(VAR_3->out_ch, 1);
 FUNC_8(VAR_3->rot_out_ch, 0);
 FUNC_8(VAR_3->rot_out_ch, 1);


 FUNC_6(VAR_3->out_ch);
 FUNC_6(VAR_3->rot_in_ch);
 FUNC_6(VAR_3->rot_out_ch);


 FUNC_4(VAR_3->ic);

 return 0;

unsetup_vb2:
 FUNC_11(VAR_3, VAR_2);
free_rot1:
 FUNC_1(VAR_5->ipu_dev, &VAR_3->rot_buf[1]);
free_rot0:
 FUNC_1(VAR_5->ipu_dev, &VAR_3->rot_buf[0]);
 return VAR_12;
}
