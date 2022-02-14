
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int field; int height; int pixelformat; int bytesperline; int sizeimage; int width; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct coda_dev {int dummy; } ;
struct coda_ctx {struct coda_dev* dev; } ;
struct coda_codec {int dummy; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct coda_ctx*,int,int ,int) ;
 int FUNC_2 (struct coda_dev*,struct coda_codec const*,unsigned int*,unsigned int*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *,int ,unsigned int,int ,int*,int ,unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct coda_ctx *VAR_8, const struct coda_codec *VAR_9,
   struct v4l2_format *VAR_10)
{
 struct coda_dev *VAR_11 = VAR_8->dev;
 unsigned int VAR_12, VAR_13;
 enum v4l2_field VAR_14;

 VAR_14 = VAR_10->fmt.pix.field;
 if (VAR_14 == VAR_5)
  VAR_14 = VAR_6;
 else if (VAR_6 != VAR_14)
  return -VAR_0;



 VAR_10->fmt.pix.field = VAR_14;

 FUNC_2(VAR_11, VAR_9, &VAR_12, &VAR_13);
 FUNC_4(&VAR_10->fmt.pix.width, VAR_3, VAR_12, VAR_7,
         &VAR_10->fmt.pix.height, VAR_2, VAR_13, VAR_1,
         VAR_4);

 switch (VAR_10->fmt.pix.pixelformat) {
 case 132:
 case 131:
 case 128:




  VAR_10->fmt.pix.bytesperline = FUNC_3(VAR_10->fmt.pix.width, 16);
  VAR_10->fmt.pix.sizeimage = VAR_10->fmt.pix.bytesperline *
     VAR_10->fmt.pix.height * 3 / 2;
  break;
 case 129:
  VAR_10->fmt.pix.bytesperline = FUNC_3(VAR_10->fmt.pix.width, 16) * 2;
  VAR_10->fmt.pix.sizeimage = VAR_10->fmt.pix.bytesperline *
     VAR_10->fmt.pix.height;
  break;
 case 130:
  VAR_10->fmt.pix.bytesperline = FUNC_3(VAR_10->fmt.pix.width, 16);
  VAR_10->fmt.pix.sizeimage = VAR_10->fmt.pix.bytesperline *
     VAR_10->fmt.pix.height * 2;
  break;
 case 135:
 case 136:
 case 133:
 case 134:
  VAR_10->fmt.pix.bytesperline = 0;
  VAR_10->fmt.pix.sizeimage = FUNC_1(VAR_8,
       VAR_10->fmt.pix.sizeimage,
       VAR_10->fmt.pix.width,
       VAR_10->fmt.pix.height);
  break;
 default:
  FUNC_0();
 }

 return 0;
}
