
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sizeimage; int field; int height; int width; int colorspace; scalar_t__ bytesperline; int pixelformat; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct cx88_core {int field; int height; int width; } ;
struct cx8802_dev {int ts_packet_size; int ts_packet_count; struct cx88_core* core; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cx8802_dev* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
    struct v4l2_format *VAR_4)
{
 struct cx8802_dev *VAR_5 = FUNC_0(VAR_2);
 struct cx88_core *VAR_6 = VAR_5->core;

 VAR_4->fmt.pix.pixelformat = VAR_1;
 VAR_4->fmt.pix.bytesperline = 0;
 VAR_4->fmt.pix.sizeimage = VAR_5->ts_packet_size * VAR_5->ts_packet_count;
 VAR_4->fmt.pix.colorspace = VAR_0;
 VAR_4->fmt.pix.width = VAR_6->width;
 VAR_4->fmt.pix.height = VAR_6->height;
 VAR_4->fmt.pix.field = VAR_6->field;
 return 0;
}
