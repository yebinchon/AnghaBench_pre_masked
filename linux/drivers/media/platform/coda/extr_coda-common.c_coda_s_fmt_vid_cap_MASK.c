
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_rect {int height; int width; scalar_t__ top; scalar_t__ left; } ;
struct TYPE_4__ {int quantization; int ycbcr_enc; int xfer_func; int colorspace; int pixelformat; } ;
struct TYPE_5__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct coda_q_data {int fourcc; int height; int width; } ;
struct coda_ctx {scalar_t__ inst_type; int quantization; int ycbcr_enc; int xfer_func; int colorspace; struct coda_codec const* codec; TYPE_3__* dev; } ;
struct coda_codec {int dummy; } ;
struct TYPE_6__ {int v4l2_dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct coda_codec* FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (struct coda_ctx*,struct v4l2_format*,struct v4l2_rect*) ;
 int FUNC_2 (struct file*,void*,struct v4l2_format*) ;
 struct coda_ctx* FUNC_3 (void*) ;
 struct coda_q_data* FUNC_4 (struct coda_ctx*,int ) ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_3, void *VAR_4,
         struct v4l2_format *VAR_5)
{
 struct coda_ctx *VAR_6 = FUNC_3(VAR_4);
 struct coda_q_data *VAR_7;
 const struct coda_codec *VAR_8;
 struct v4l2_rect VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_3, VAR_4, VAR_5);
 if (VAR_10)
  return VAR_10;

 VAR_7 = FUNC_4(VAR_6, VAR_2);
 VAR_9.left = 0;
 VAR_9.top = 0;
 VAR_9.width = VAR_7->width;
 VAR_9.height = VAR_7->height;

 VAR_10 = FUNC_1(VAR_6, VAR_5, &VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_6->inst_type != VAR_0)
  return 0;


 VAR_8 = FUNC_0(VAR_6->dev, VAR_7->fourcc,
    VAR_5->fmt.pix.pixelformat);
 if (!VAR_8) {
  FUNC_5(&VAR_6->dev->v4l2_dev, "failed to determine codec\n");
  return -VAR_1;
 }
 VAR_6->codec = VAR_8;

 VAR_6->colorspace = VAR_5->fmt.pix.colorspace;
 VAR_6->xfer_func = VAR_5->fmt.pix.xfer_func;
 VAR_6->ycbcr_enc = VAR_5->fmt.pix.ycbcr_enc;
 VAR_6->quantization = VAR_5->fmt.pix.quantization;

 return 0;
}
