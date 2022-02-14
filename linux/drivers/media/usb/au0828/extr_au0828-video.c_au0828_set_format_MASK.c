
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; scalar_t__ pixelformat; int bytesperline; int sizeimage; int field; int colorspace; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct au0828_dev {int width; int height; int frame_size; int field_size; int bytesperline; scalar_t__ stream_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct au0828_dev*) ;
 int FUNC_1 (struct au0828_dev*) ;
 int FUNC_2 (int,char*) ;

__attribute__((used)) static int FUNC_3(struct au0828_dev *VAR_6, unsigned int VAR_7,
        struct v4l2_format *VAR_8)
{
 int VAR_9;
 int VAR_10 = VAR_8->fmt.pix.width;
 int VAR_11 = VAR_8->fmt.pix.height;



 if (VAR_8->fmt.pix.pixelformat != VAR_4)
  return -VAR_0;


 if (VAR_10 != 720)
  VAR_10 = 720;
 if (VAR_11 != 480)
  VAR_11 = 480;

 VAR_8->fmt.pix.width = VAR_10;
 VAR_8->fmt.pix.height = VAR_11;
 VAR_8->fmt.pix.pixelformat = VAR_4;
 VAR_8->fmt.pix.bytesperline = VAR_10 * 2;
 VAR_8->fmt.pix.sizeimage = VAR_10 * VAR_11 * 2;
 VAR_8->fmt.pix.colorspace = VAR_2;
 VAR_8->fmt.pix.field = VAR_3;

 if (VAR_7 == VAR_5)
  return 0;


 VAR_6->width = VAR_10;
 VAR_6->height = VAR_11;
 VAR_6->frame_size = VAR_10 * VAR_11 * 2;
 VAR_6->field_size = VAR_10 * VAR_11;
 VAR_6->bytesperline = VAR_10 * 2;

 if (VAR_6->stream_state == VAR_1) {
  FUNC_2(1, "VIDIOC_SET_FMT: interrupting stream!\n");
  VAR_9 = FUNC_1(VAR_6);
  if (VAR_9 != 0) {
   FUNC_2(1, "error interrupting video stream!\n");
   return VAR_9;
  }
 }

 FUNC_0(VAR_6);

 return 0;
}
