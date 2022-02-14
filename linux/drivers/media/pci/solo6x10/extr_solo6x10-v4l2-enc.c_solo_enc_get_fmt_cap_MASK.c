
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_pix_format {int colorspace; int sizeimage; int field; int pixelformat; int height; int width; } ;
struct TYPE_2__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct solo_enc_dev {scalar_t__ interlaced; int fmt; int height; int width; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct solo_enc_dev* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5,
    struct v4l2_format *VAR_6)
{
 struct solo_enc_dev *VAR_7 = FUNC_0(VAR_4);
 struct v4l2_pix_format *VAR_8 = &VAR_6->fmt.pix;

 VAR_8->width = VAR_7->width;
 VAR_8->height = VAR_7->height;
 VAR_8->pixelformat = VAR_7->fmt;
 VAR_8->field = VAR_7->interlaced ? VAR_2 :
       VAR_3;
 VAR_8->sizeimage = VAR_0;
 VAR_8->colorspace = VAR_1;

 return 0;
}
