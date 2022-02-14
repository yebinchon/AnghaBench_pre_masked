
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_pix_format {int width; int height; int bytesperline; int sizeimage; scalar_t__ field; int xfer_func; int quantization; int ycbcr_enc; int colorspace; int pixelformat; } ;
struct TYPE_2__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct sun6i_video {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_9 ;
 int FUNC_2 (int*,int ,int ,int,int*,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct sun6i_video *VAR_10,
          struct v4l2_format *VAR_11)
{
 struct v4l2_pix_format *VAR_12 = &VAR_11->fmt.pix;
 int VAR_13;

 if (!FUNC_0(VAR_12->pixelformat))
  VAR_12->pixelformat = VAR_9[0];

 FUNC_2(&VAR_12->width, VAR_2, VAR_0, 1,
         &VAR_12->height, VAR_1, VAR_0, 1, 1);

 VAR_13 = FUNC_1(VAR_12->pixelformat);
 VAR_12->bytesperline = (VAR_12->width * VAR_13) >> 3;
 VAR_12->sizeimage = VAR_12->bytesperline * VAR_12->height;

 if (VAR_12->field == VAR_4)
  VAR_12->field = VAR_5;

 VAR_12->colorspace = VAR_3;
 VAR_12->ycbcr_enc = VAR_8;
 VAR_12->quantization = VAR_6;
 VAR_12->xfer_func = VAR_7;

 return 0;
}
