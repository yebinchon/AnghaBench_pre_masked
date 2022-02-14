
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pixelformat; int width; int height; int colorspace; int sizeimage; scalar_t__ bytesperline; int field; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct camera_data {int frame_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,int) ;
 struct camera_data* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_5, void *VAR_6,
       struct v4l2_format *VAR_7)
{
 struct camera_data *VAR_8 = FUNC_1(VAR_5);

 if (VAR_7->fmt.pix.pixelformat != VAR_4 &&
     VAR_7->fmt.pix.pixelformat != VAR_3)
        return -VAR_0;

 VAR_7->fmt.pix.field = VAR_2;
 VAR_7->fmt.pix.bytesperline = 0;
 VAR_7->fmt.pix.sizeimage = VAR_8->frame_size;
 VAR_7->fmt.pix.colorspace = VAR_1;

 switch (FUNC_0(VAR_7->fmt.pix.width, VAR_7->fmt.pix.height)) {
 case 128:
  VAR_7->fmt.pix.width = 640;
  VAR_7->fmt.pix.height = 480;
  break;
 case 131:
  VAR_7->fmt.pix.width = 352;
  VAR_7->fmt.pix.height = 288;
  break;
 case 129:
  VAR_7->fmt.pix.width = 320;
  VAR_7->fmt.pix.height = 240;
  break;
 case 132:
  VAR_7->fmt.pix.width = 288;
  VAR_7->fmt.pix.height = 216;
  break;
 case 133:
  VAR_7->fmt.pix.width = 256;
  VAR_7->fmt.pix.height = 192;
  break;
 case 134:
  VAR_7->fmt.pix.width = 224;
  VAR_7->fmt.pix.height = 168;
  break;
 case 135:
  VAR_7->fmt.pix.width = 192;
  VAR_7->fmt.pix.height = 144;
  break;
 case 130:
 default:
  VAR_7->fmt.pix.width = 176;
  VAR_7->fmt.pix.height = 144;
  break;
 }

 return 0;
}
