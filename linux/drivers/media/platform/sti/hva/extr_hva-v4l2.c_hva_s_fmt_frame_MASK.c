
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct v4l2_pix_format {int height; int width; scalar_t__ pixelformat; int sizeimage; int quantization; int ycbcr_enc; int xfer_func; int colorspace; } ;
struct TYPE_4__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {int type; TYPE_1__ fmt; } ;
struct TYPE_6__ {int height; int width; scalar_t__ pixelformat; int size; void* aligned_height; void* aligned_width; } ;
struct TYPE_5__ {int m2m_ctx; } ;
struct hva_ctx {int flags; TYPE_3__ frameinfo; int quantization; int ycbcr_enc; int xfer_func; int colorspace; int name; TYPE_2__ fh; } ;
struct file {int private_data; } ;
struct device {int dummy; } ;


 void* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct device* FUNC_1 (struct hva_ctx*) ;
 int FUNC_2 (struct device*,char*,int ,...) ;
 struct hva_ctx* FUNC_3 (int ) ;
 int FUNC_4 (struct file*,void*,struct v4l2_format*) ;
 struct vb2_queue* FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_4, void *VAR_5, struct v4l2_format *VAR_6)
{
 struct hva_ctx *VAR_7 = FUNC_3(VAR_4->private_data);
 struct device *VAR_8 = FUNC_1(VAR_7);
 struct v4l2_pix_format *VAR_9 = &VAR_6->fmt.pix;
 struct vb2_queue *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_4(VAR_4, VAR_5, VAR_6);
 if (VAR_11) {
  FUNC_2(VAR_8, "%s V4L2 S_FMT (OUTPUT): unsupported format %.4s\n",
   VAR_7->name, (char *)&VAR_9->pixelformat);
  return VAR_11;
 }

 VAR_10 = FUNC_5(VAR_7->fh.m2m_ctx, VAR_6->type);
 if (FUNC_6(VAR_10)) {
  FUNC_2(VAR_8, "%s V4L2 S_FMT (OUTPUT): queue busy\n", VAR_7->name);
  return -VAR_0;
 }

 VAR_7->colorspace = VAR_9->colorspace;
 VAR_7->xfer_func = VAR_9->xfer_func;
 VAR_7->ycbcr_enc = VAR_9->ycbcr_enc;
 VAR_7->quantization = VAR_9->quantization;

 VAR_7->frameinfo.aligned_width = FUNC_0(VAR_9->width, VAR_3);
 VAR_7->frameinfo.aligned_height = FUNC_0(VAR_9->height,
           VAR_2);
 VAR_7->frameinfo.size = VAR_9->sizeimage;
 VAR_7->frameinfo.pixelformat = VAR_9->pixelformat;
 VAR_7->frameinfo.width = VAR_9->width;
 VAR_7->frameinfo.height = VAR_9->height;
 VAR_7->flags |= VAR_1;

 return 0;
}
