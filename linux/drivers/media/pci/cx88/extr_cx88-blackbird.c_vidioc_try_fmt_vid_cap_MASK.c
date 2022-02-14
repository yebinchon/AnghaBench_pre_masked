
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sizeimage; int field; unsigned int height; int width; int colorspace; scalar_t__ bytesperline; int pixelformat; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct cx88_core {int tvnorm; } ;
struct cx8802_dev {int ts_packet_size; int ts_packet_count; struct cx88_core* core; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;


 int VAR_0 ;

 scalar_t__ FUNC_0 (int) ;




 int VAR_1 ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int *,int,unsigned int,int,unsigned int*,int,unsigned int,int ,int ) ;
 struct cx8802_dev* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_2, void *VAR_3,
      struct v4l2_format *VAR_4)
{
 struct cx8802_dev *VAR_5 = FUNC_4(VAR_2);
 struct cx88_core *VAR_6 = VAR_5->core;
 unsigned int VAR_7, VAR_8;
 enum v4l2_field VAR_9;

 VAR_4->fmt.pix.pixelformat = VAR_1;
 VAR_4->fmt.pix.bytesperline = 0;
 VAR_4->fmt.pix.sizeimage = VAR_5->ts_packet_size * VAR_5->ts_packet_count;
 VAR_4->fmt.pix.colorspace = VAR_0;

 VAR_7 = FUNC_2(VAR_6->tvnorm);
 VAR_8 = FUNC_1(VAR_6->tvnorm);

 VAR_9 = VAR_4->fmt.pix.field;

 switch (VAR_9) {
 case 128:
 case 132:
 case 131:
 case 130:
 case 129:
  break;
 default:
  VAR_9 = (VAR_4->fmt.pix.height > VAR_8 / 2)
   ? 131
   : 132;
  break;
 }
 if (FUNC_0(VAR_9))
  VAR_8 /= 2;

 FUNC_3(&VAR_4->fmt.pix.width, 48, VAR_7, 2,
         &VAR_4->fmt.pix.height, 32, VAR_8, 0, 0);
 VAR_4->fmt.pix.field = VAR_9;
 return 0;
}
