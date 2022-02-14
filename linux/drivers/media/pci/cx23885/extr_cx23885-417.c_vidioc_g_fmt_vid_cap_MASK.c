
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sizeimage; int field; int height; int width; scalar_t__ colorspace; scalar_t__ bytesperline; int pixelformat; } ;
struct TYPE_5__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int ts_packet_size; int ts_packet_count; int height; int width; } ;
struct cx23885_dev {TYPE_3__ ts1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ,int ) ;
 struct cx23885_dev* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
    struct v4l2_format *VAR_4)
{
 struct cx23885_dev *VAR_5 = FUNC_1(VAR_2);

 VAR_4->fmt.pix.pixelformat = VAR_1;
 VAR_4->fmt.pix.bytesperline = 0;
 VAR_4->fmt.pix.sizeimage =
  VAR_5->ts1.ts_packet_size * VAR_5->ts1.ts_packet_count;
 VAR_4->fmt.pix.colorspace = 0;
 VAR_4->fmt.pix.width = VAR_5->ts1.width;
 VAR_4->fmt.pix.height = VAR_5->ts1.height;
 VAR_4->fmt.pix.field = VAR_0;
 FUNC_0(1, "VIDIOC_G_FMT: w: %d, h: %d\n",
  VAR_5->ts1.width, VAR_5->ts1.height);
 return 0;
}
