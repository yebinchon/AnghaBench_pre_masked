
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int xfer_func; int quantization; int ycbcr_enc; int colorspace; int sizeimage; int bytesperline; int height; int width; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct allegro_channel {int height; int width; int sizeimage_encoded; int level; int xfer_func; int quantization; int ycbcr_enc; int colorspace; int sizeimage_raw; int stride; } ;


 int FUNC_0 (struct file*,void*,struct v4l2_format*) ;
 int FUNC_1 (int ,int ) ;
 struct allegro_channel* FUNC_2 (void*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_0, void *VAR_1,
     struct v4l2_format *VAR_2)
{
 struct allegro_channel *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_3->width = VAR_2->fmt.pix.width;
 VAR_3->height = VAR_2->fmt.pix.height;
 VAR_3->stride = VAR_2->fmt.pix.bytesperline;
 VAR_3->sizeimage_raw = VAR_2->fmt.pix.sizeimage;

 VAR_3->colorspace = VAR_2->fmt.pix.colorspace;
 VAR_3->ycbcr_enc = VAR_2->fmt.pix.ycbcr_enc;
 VAR_3->quantization = VAR_2->fmt.pix.quantization;
 VAR_3->xfer_func = VAR_2->fmt.pix.xfer_func;

 VAR_3->level =
  FUNC_3(VAR_3->width, VAR_3->height);
 VAR_3->sizeimage_encoded =
  FUNC_1(VAR_3->width, VAR_3->height);

 return 0;
}
