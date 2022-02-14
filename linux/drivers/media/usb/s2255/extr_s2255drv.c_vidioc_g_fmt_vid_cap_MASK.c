
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int width; int height; int bytesperline; int sizeimage; int colorspace; int pixelformat; int field; } ;
struct TYPE_6__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct s2255_vc {int std; int width; int height; TYPE_1__* fmt; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int depth; int fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct s2255_vc* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_6, void *VAR_7,
       struct v4l2_format *VAR_8)
{
 struct s2255_vc *VAR_9 = FUNC_0(VAR_6);
 int VAR_10 = VAR_9->std & VAR_5;

 VAR_8->fmt.pix.width = VAR_9->width;
 VAR_8->fmt.pix.height = VAR_9->height;
 if (VAR_8->fmt.pix.height >=
     (VAR_10 ? VAR_0 : VAR_1) * 2)
  VAR_8->fmt.pix.field = VAR_3;
 else
  VAR_8->fmt.pix.field = VAR_4;
 VAR_8->fmt.pix.pixelformat = VAR_9->fmt->fourcc;
 VAR_8->fmt.pix.bytesperline = VAR_8->fmt.pix.width * (VAR_9->fmt->depth >> 3);
 VAR_8->fmt.pix.sizeimage = VAR_8->fmt.pix.height * VAR_8->fmt.pix.bytesperline;
 VAR_8->fmt.pix.colorspace = VAR_2;
 return 0;
}
