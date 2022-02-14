
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int quantization; int ycbcr_enc; int xfer_func; int colorspace; int pixelformat; } ;
struct TYPE_7__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct pxp_fmt {int types; int fourcc; } ;
struct pxp_ctx {int xfer_func; int colorspace; TYPE_1__* dev; } ;
struct file {int dummy; } ;
struct TYPE_8__ {int fourcc; } ;
struct TYPE_5__ {int v4l2_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pxp_ctx* FUNC_0 (struct file*) ;
 struct pxp_fmt* FUNC_1 (struct v4l2_format*) ;
 TYPE_4__* VAR_2 ;
 int FUNC_2 (struct pxp_ctx*,int ,int *,int *) ;
 int FUNC_3 (struct v4l2_format*,struct pxp_fmt*) ;
 int FUNC_4 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_3, void *VAR_4,
          struct v4l2_format *VAR_5)
{
 struct pxp_fmt *VAR_6;
 struct pxp_ctx *VAR_7 = FUNC_0(VAR_3);

 VAR_6 = FUNC_1(VAR_5);
 if (!VAR_6) {
  VAR_5->fmt.pix.pixelformat = VAR_2[0].fourcc;
  VAR_6 = FUNC_1(VAR_5);
 }
 if (!(VAR_6->types & VAR_1)) {
  FUNC_4(&VAR_7->dev->v4l2_dev,
    "Fourcc format (0x%08x) invalid.\n",
    VAR_5->fmt.pix.pixelformat);
  return -VAR_0;
 }

 VAR_5->fmt.pix.colorspace = VAR_7->colorspace;
 VAR_5->fmt.pix.xfer_func = VAR_7->xfer_func;

 FUNC_2(VAR_7, VAR_6->fourcc,
      &VAR_5->fmt.pix.ycbcr_enc,
      &VAR_5->fmt.pix.quantization);

 return FUNC_3(VAR_5, VAR_6);
}
