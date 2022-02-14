
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int height; int width; int colorspace; int field; int sizeimage; scalar_t__ bytesperline; int pixelformat; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct saa7164_port {int height; int width; } ;
struct saa7164_encoder_fh {struct saa7164_port* port; } ;
struct file {struct saa7164_encoder_fh* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_4, void *VAR_5,
    struct v4l2_format *VAR_6)
{
 struct saa7164_encoder_fh *VAR_7 = VAR_4->private_data;
 struct saa7164_port *VAR_8 = VAR_7->port;

 VAR_6->fmt.pix.pixelformat = VAR_3;
 VAR_6->fmt.pix.bytesperline = 0;
 VAR_6->fmt.pix.sizeimage = VAR_0;
 VAR_6->fmt.pix.field = VAR_2;
 VAR_6->fmt.pix.colorspace = VAR_1;
 VAR_6->fmt.pix.width = VAR_8->width;
 VAR_6->fmt.pix.height = VAR_8->height;
 return 0;
}
