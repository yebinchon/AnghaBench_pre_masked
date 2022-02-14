
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pixelformat; int height; int width; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {scalar_t__ type; TYPE_2__ fmt; } ;
struct pwc_device {int type; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;



 int FUNC_3 (struct pwc_device*,int ,int ) ;
 int ** VAR_2 ;
 int FUNC_4 (struct v4l2_format*,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct pwc_device *VAR_3, struct v4l2_format *VAR_4)
{
 int VAR_5;

 if (VAR_4->type != VAR_1) {
  FUNC_2("Bad video type must be V4L2_BUF_TYPE_VIDEO_CAPTURE\n");
  return -VAR_0;
 }

 switch (VAR_4->fmt.pix.pixelformat) {
  case 128:
   break;
  case 130:
   if (FUNC_1(VAR_3->type)) {
    FUNC_2("codec1 is only supported for old pwc webcam\n");
    VAR_4->fmt.pix.pixelformat = 128;
   }
   break;
  case 129:
   if (FUNC_0(VAR_3->type)) {
    FUNC_2("codec23 is only supported for new pwc webcam\n");
    VAR_4->fmt.pix.pixelformat = 128;
   }
   break;
  default:
   FUNC_2("Unsupported pixel format\n");
   VAR_4->fmt.pix.pixelformat = 128;
 }

 VAR_5 = FUNC_3(VAR_3, VAR_4->fmt.pix.width, VAR_4->fmt.pix.height);
 FUNC_4(VAR_4,
       VAR_2[VAR_5][0],
       VAR_2[VAR_5][1],
       VAR_4->fmt.pix.pixelformat);

 return 0;
}
