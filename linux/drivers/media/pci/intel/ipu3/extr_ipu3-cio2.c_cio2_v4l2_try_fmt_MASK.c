
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_pix_format_mplane {scalar_t__ width; int height; int num_planes; int xfer_func; int quantization; int ycbcr_enc; TYPE_2__* plane_fmt; int reserved; int field; int colorspace; int pixelformat; } ;
struct TYPE_3__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct ipu3_cio2_fmt {int fourcc; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int bytesperline; int sizeimage; int reserved; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 struct ipu3_cio2_fmt* FUNC_1 (int *,int *) ;
 struct ipu3_cio2_fmt* VAR_7 ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_8, void *VAR_9, struct v4l2_format *VAR_10)
{
 const struct ipu3_cio2_fmt *VAR_11;
 struct v4l2_pix_format_mplane *VAR_12 = &VAR_10->fmt.pix_mp;

 VAR_11 = FUNC_1(&VAR_12->pixelformat, ((void*)0));
 if (!VAR_11)
  VAR_11 = &VAR_7[0];


 if (VAR_12->width > VAR_1)
  VAR_12->width = VAR_1;
 if (VAR_12->height > VAR_0)
  VAR_12->height = VAR_0;

 VAR_12->num_planes = 1;
 VAR_12->pixelformat = VAR_11->fourcc;
 VAR_12->colorspace = VAR_2;
 VAR_12->field = VAR_3;
 FUNC_2(VAR_12->reserved, 0, sizeof(VAR_12->reserved));
 VAR_12->plane_fmt[0].bytesperline = FUNC_0(VAR_12->width);
 VAR_12->plane_fmt[0].sizeimage = VAR_12->plane_fmt[0].bytesperline *
       VAR_12->height;
 FUNC_2(VAR_12->plane_fmt[0].reserved, 0,
        sizeof(VAR_12->plane_fmt[0].reserved));


 VAR_12->ycbcr_enc = VAR_6;
 VAR_12->quantization = VAR_4;
 VAR_12->xfer_func = VAR_5;

 return 0;
}
