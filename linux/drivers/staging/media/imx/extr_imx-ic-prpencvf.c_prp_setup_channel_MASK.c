
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_mbus_framefmt {int field; } ;
struct prp_priv {int interweave_swap; int ic; struct ipuv3_channel* out_ch; struct ipuv3_channel* rot_out_ch; struct ipuv3_channel* rot_in_ch; struct v4l2_mbus_framefmt* format_mbus; struct imx_media_video_dev* vdev; } ;
struct ipuv3_channel {int dummy; } ;
struct TYPE_8__ {scalar_t__ field; int width; int bytesperline; int pixelformat; int height; } ;
struct TYPE_7__ {int width; int top; int height; } ;
struct ipu_image {TYPE_4__ pix; void* phys1; void* phys0; TYPE_3__ rect; } ;
struct TYPE_5__ {TYPE_4__ pix; } ;
struct TYPE_6__ {TYPE_1__ fmt; } ;
struct imx_media_video_dev {TYPE_3__ compose; TYPE_2__ fmt; struct imx_media_pixfmt* cc; } ;
struct imx_media_pixfmt {int bpp; scalar_t__ planar; } ;
typedef int image ;
typedef enum ipu_rotate_mode { ____Placeholder_ipu_rotate_mode } ipu_rotate_mode ;
typedef void* dma_addr_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;



 int FUNC_2 (struct ipuv3_channel*,int,int) ;
 int FUNC_3 (struct ipuv3_channel*,int) ;
 int FUNC_4 (struct ipuv3_channel*) ;
 int FUNC_5 (struct ipuv3_channel*,unsigned int) ;
 int FUNC_6 (struct ipuv3_channel*,struct ipu_image*) ;
 int FUNC_7 (struct ipuv3_channel*,int) ;
 int FUNC_8 (struct ipuv3_channel*) ;
 int FUNC_9 (struct ipuv3_channel*) ;
 int FUNC_10 (int ,struct ipuv3_channel*,int,int ,unsigned int,int) ;
 int FUNC_11 (struct ipuv3_channel*,int) ;
 int FUNC_12 (struct ipu_image*,int ,int) ;
 int FUNC_13 (int,int ) ;

__attribute__((used)) static int FUNC_14(struct prp_priv *VAR_2,
        struct ipuv3_channel *VAR_3,
        enum ipu_rotate_mode VAR_4,
        dma_addr_t VAR_5, dma_addr_t VAR_6,
        bool VAR_7)
{
 struct imx_media_video_dev *VAR_8 = VAR_2->vdev;
 const struct imx_media_pixfmt *VAR_9;
 struct v4l2_mbus_framefmt *VAR_10;
 unsigned int VAR_11;
 struct ipu_image VAR_12;
 bool VAR_13;
 int VAR_14;

 VAR_10 = &VAR_2->format_mbus[VAR_0];
 VAR_9 = VAR_8->cc;

 FUNC_9(VAR_3);

 FUNC_12(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.pix = VAR_8->fmt.fmt.pix;
 VAR_12.rect = VAR_8->compose;






 VAR_13 = FUNC_0(VAR_12.pix.field) &&
  FUNC_1(VAR_10->field);
 VAR_2->interweave_swap = VAR_13 &&
  VAR_12.pix.field == VAR_1;

 if (VAR_7) {
  FUNC_13(VAR_12.pix.width, VAR_12.pix.height);
  FUNC_13(VAR_12.rect.width, VAR_12.rect.height);

  VAR_12.pix.bytesperline = VAR_9->planar ?
   VAR_12.pix.width :
   (VAR_12.pix.width * VAR_9->bpp) >> 3;
 }

 if (VAR_2->interweave_swap && VAR_3 == VAR_2->out_ch) {

  VAR_12.rect.top = 1;
 }

 VAR_12.phys0 = VAR_5;
 VAR_12.phys1 = VAR_6;






 if ((VAR_3 == VAR_2->out_ch && !VAR_13) ||
     VAR_3 == VAR_2->rot_out_ch) {
  switch (VAR_12.pix.pixelformat) {
  case 129:
  case 128:
  case 130:
   FUNC_8(VAR_3);
   break;
  }
 }

 VAR_14 = FUNC_6(VAR_3, &VAR_12);
 if (VAR_14)
  return VAR_14;

 if (VAR_3 == VAR_2->rot_in_ch ||
     VAR_3 == VAR_2->rot_out_ch) {
  VAR_11 = 8;
  FUNC_4(VAR_3);
 } else {
  VAR_11 = (VAR_12.pix.width & 0xf) ? 8 : 16;
 }

 FUNC_5(VAR_3, VAR_11);

 if (VAR_4)
  FUNC_7(VAR_3, VAR_4);

 if (VAR_13 && VAR_3 == VAR_2->out_ch)
  FUNC_2(VAR_3,
       VAR_2->interweave_swap ?
       -VAR_12.pix.bytesperline :
       VAR_12.pix.bytesperline,
       VAR_12.pix.pixelformat);

 VAR_14 = FUNC_10(VAR_2->ic, VAR_3,
        VAR_12.pix.width, VAR_12.pix.height,
        VAR_11, VAR_4);
 if (VAR_14)
  return VAR_14;

 FUNC_3(VAR_3, 1);

 FUNC_11(VAR_3, 1);

 return 0;
}
