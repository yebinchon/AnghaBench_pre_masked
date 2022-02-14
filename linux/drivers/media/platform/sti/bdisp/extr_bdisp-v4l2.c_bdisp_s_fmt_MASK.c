
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct vb2_queue {int dummy; } ;
struct v4l2_pix_format {int colorspace; int field; int sizeimage; int bytesperline; int height; int width; int pixelformat; } ;
struct TYPE_6__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {int type; TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_8__ {scalar_t__ top; scalar_t__ left; int height; int width; } ;
struct bdisp_frame {TYPE_4__ crop; int height; int width; int colorspace; int field; int sizeimage; int bytesperline; int fmt; } ;
struct TYPE_5__ {int m2m_ctx; } ;
struct bdisp_ctx {TYPE_3__* bdisp_dev; struct bdisp_frame dst; struct bdisp_frame src; TYPE_1__ fh; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,struct bdisp_ctx*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct file*,void*,struct v4l2_format*) ;
 int FUNC_3 (int ,char*,...) ;
 struct bdisp_ctx* FUNC_4 (void*) ;
 struct vb2_queue* FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_7, void *VAR_8, struct v4l2_format *VAR_9)
{
 struct bdisp_ctx *VAR_10 = FUNC_4(VAR_8);
 struct vb2_queue *VAR_11;
 struct bdisp_frame *VAR_12;
 struct v4l2_pix_format *VAR_13;
 int VAR_14;
 u32 VAR_15;

 VAR_14 = FUNC_2(VAR_7, VAR_8, VAR_9);
 if (VAR_14) {
  FUNC_3(VAR_10->bdisp_dev->dev, "Cannot set format\n");
  return VAR_14;
 }

 VAR_11 = FUNC_5(VAR_10->fh.m2m_ctx, VAR_9->type);
 if (FUNC_6(VAR_11)) {
  FUNC_3(VAR_10->bdisp_dev->dev, "queue (%d) busy\n", VAR_9->type);
  return -VAR_3;
 }

 VAR_12 = (VAR_9->type == VAR_6) ?
   &VAR_10->src : &VAR_10->dst;
 VAR_13 = &VAR_9->fmt.pix;
 VAR_12->fmt = FUNC_1(VAR_13->pixelformat);
 if (!VAR_12->fmt) {
  FUNC_3(VAR_10->bdisp_dev->dev, "Unknown format 0x%x\n",
   VAR_13->pixelformat);
  return -VAR_4;
 }

 VAR_12->width = VAR_13->width;
 VAR_12->height = VAR_13->height;
 VAR_12->bytesperline = VAR_13->bytesperline;
 VAR_12->sizeimage = VAR_13->sizeimage;
 VAR_12->field = VAR_13->field;
 if (VAR_9->type == VAR_6)
  VAR_12->colorspace = VAR_13->colorspace;

 VAR_12->crop.width = VAR_12->width;
 VAR_12->crop.height = VAR_12->height;
 VAR_12->crop.left = 0;
 VAR_12->crop.top = 0;

 VAR_15 = VAR_1;
 VAR_15 |= (VAR_9->type == VAR_5) ?
   VAR_0 : VAR_2;
 FUNC_0(VAR_15, VAR_10);

 return 0;
}
