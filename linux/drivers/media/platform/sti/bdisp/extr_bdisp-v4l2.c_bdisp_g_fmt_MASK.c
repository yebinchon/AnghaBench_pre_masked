
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_pix_format {int colorspace; int sizeimage; int bytesperline; int field; int pixelformat; int height; int width; } ;
struct TYPE_6__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {int type; TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct bdisp_frame {int colorspace; int sizeimage; int bytesperline; int field; TYPE_3__* fmt; int height; int width; } ;
struct bdisp_ctx {TYPE_1__* bdisp_dev; } ;
struct TYPE_8__ {int colorspace; } ;
struct TYPE_7__ {int pixelformat; } ;
struct TYPE_5__ {int dev; } ;


 scalar_t__ FUNC_0 (struct bdisp_frame*) ;
 int FUNC_1 (struct bdisp_frame*) ;
 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 struct bdisp_frame* FUNC_2 (struct bdisp_ctx*,int ) ;
 int FUNC_3 (int ,char*,struct bdisp_frame*) ;
 struct bdisp_ctx* FUNC_4 (void*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_2, void *VAR_3, struct v4l2_format *VAR_4)
{
 struct bdisp_ctx *VAR_5 = FUNC_4(VAR_3);
 struct v4l2_pix_format *VAR_6;
 struct bdisp_frame *VAR_7 = FUNC_2(VAR_5, VAR_4->type);

 if (FUNC_0(VAR_7)) {
  FUNC_3(VAR_5->bdisp_dev->dev, "Invalid frame (%p)\n", VAR_7);
  return FUNC_1(VAR_7);
 }

 VAR_6 = &VAR_4->fmt.pix;
 VAR_6->width = VAR_7->width;
 VAR_6->height = VAR_7->height;
 VAR_6->pixelformat = VAR_7->fmt->pixelformat;
 VAR_6->field = VAR_7->field;
 VAR_6->bytesperline = VAR_7->bytesperline;
 VAR_6->sizeimage = VAR_7->sizeimage;
 VAR_6->colorspace = (VAR_4->type == VAR_0) ?
    VAR_7->colorspace : VAR_1.colorspace;

 return 0;
}
