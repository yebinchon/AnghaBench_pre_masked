
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ycbcr_enc; int xfer_func; int quantization; int colorspace; int pixelformat; int height; int width; } ;
struct TYPE_4__ {int name; } ;
struct vimc_cap_device {TYPE_2__ format; TYPE_1__ vdev; int dev; int queue; } ;
struct TYPE_6__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 struct vimc_cap_device* FUNC_2 (struct file*) ;
 int FUNC_3 (struct file*,void*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, void *VAR_2,
      struct v4l2_format *VAR_3)
{
 struct vimc_cap_device *VAR_4 = FUNC_2(VAR_1);
 int VAR_5;


 if (FUNC_1(&VAR_4->queue))
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 FUNC_0(VAR_4->dev, "%s: format update: "
  "old:%dx%d (0x%x, %d, %d, %d, %d) "
  "new:%dx%d (0x%x, %d, %d, %d, %d)\n", VAR_4->vdev.name,

  VAR_4->format.width, VAR_4->format.height,
  VAR_4->format.pixelformat, VAR_4->format.colorspace,
  VAR_4->format.quantization, VAR_4->format.xfer_func,
  VAR_4->format.ycbcr_enc,

  VAR_3->fmt.pix.width, VAR_3->fmt.pix.height,
  VAR_3->fmt.pix.pixelformat, VAR_3->fmt.pix.colorspace,
  VAR_3->fmt.pix.quantization, VAR_3->fmt.pix.xfer_func,
  VAR_3->fmt.pix.ycbcr_enc);

 VAR_4->format = VAR_3->fmt.pix;

 return 0;
}
