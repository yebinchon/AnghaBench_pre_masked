
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct v4l2_pix_format {scalar_t__ pixelformat; scalar_t__ width; scalar_t__ height; scalar_t__ sizeimage; int field; int quantization; int ycbcr_enc; int xfer_func; int colorspace; scalar_t__ bytesperline; } ;
struct TYPE_3__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct hva_enc {int max_height; int max_width; } ;
struct TYPE_4__ {scalar_t__ width; scalar_t__ height; int pixelformat; } ;
struct hva_ctx {int flags; int quantization; int ycbcr_enc; int xfer_func; int colorspace; int name; TYPE_2__ frameinfo; } ;
struct file {int private_data; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct device* FUNC_0 (struct hva_ctx*) ;
 int FUNC_1 (struct device*,char*,int ,scalar_t__,...) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 struct hva_ctx* FUNC_3 (int ) ;
 struct hva_enc* FUNC_4 (struct hva_ctx*,int ,scalar_t__) ;
 int FUNC_5 (scalar_t__*,int ,int ,int ,scalar_t__*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_5, void *VAR_6,
         struct v4l2_format *VAR_7)
{
 struct hva_ctx *VAR_8 = FUNC_3(VAR_5->private_data);
 struct device *VAR_9 = FUNC_0(VAR_8);
 struct v4l2_pix_format *VAR_10 = &VAR_7->fmt.pix;
 u32 VAR_11 = VAR_10->pixelformat;
 const struct hva_enc *VAR_12;
 u32 VAR_13, VAR_14;
 u32 VAR_15;

 VAR_12 = FUNC_4(VAR_8, VAR_8->frameinfo.pixelformat, VAR_11);
 if (!VAR_12) {
  FUNC_1(VAR_9,
   "%s V4L2 TRY_FMT (CAPTURE): unsupported format %.4s\n",
   VAR_8->name, (char *)&VAR_10->pixelformat);
  return -VAR_0;
 }

 VAR_13 = VAR_10->width;
 VAR_14 = VAR_10->height;
 if (VAR_8->flags & VAR_1) {




  VAR_10->width = VAR_8->frameinfo.width;
  VAR_10->height = VAR_8->frameinfo.height;
  if ((VAR_10->width != VAR_13) || (VAR_10->height != VAR_14))
   FUNC_1(VAR_9,
    "%s V4L2 TRY_FMT (CAPTURE): resolution updated %dx%d -> %dx%d to fit frame resolution\n",
    VAR_8->name, VAR_13, VAR_14,
    VAR_10->width, VAR_10->height);
 } else {

  FUNC_5(&VAR_10->width,
          VAR_3, VAR_12->max_width,
          0,
          &VAR_10->height,
          VAR_2, VAR_12->max_height,
          0,
          0);

  if ((VAR_10->width != VAR_13) || (VAR_10->height != VAR_14))
   FUNC_1(VAR_9,
    "%s V4L2 TRY_FMT (CAPTURE): resolution updated %dx%d -> %dx%d to fit min/max/alignment\n",
    VAR_8->name, VAR_13, VAR_14,
    VAR_10->width, VAR_10->height);
 }

 VAR_15 = FUNC_2(VAR_10->width, VAR_10->height);
 if (VAR_10->sizeimage < VAR_15)
  VAR_10->sizeimage = VAR_15;

 VAR_10->bytesperline = 0;
 VAR_10->colorspace = VAR_8->colorspace;
 VAR_10->xfer_func = VAR_8->xfer_func;
 VAR_10->ycbcr_enc = VAR_8->ycbcr_enc;
 VAR_10->quantization = VAR_8->quantization;
 VAR_10->field = VAR_4;

 return 0;
}
