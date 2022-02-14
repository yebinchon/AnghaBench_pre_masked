
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_pix_format {scalar_t__ sizeimage; int pixelformat; } ;
struct TYPE_2__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct cedrus_dev {int capabilities; } ;
struct cedrus_ctx {struct cedrus_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 struct cedrus_ctx* FUNC_1 (struct file*) ;
 int FUNC_2 (struct v4l2_pix_format*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
      struct v4l2_format *VAR_4)
{
 struct cedrus_ctx *VAR_5 = FUNC_1(VAR_2);
 struct cedrus_dev *VAR_6 = VAR_5->dev;
 struct v4l2_pix_format *VAR_7 = &VAR_4->fmt.pix;

 if (!FUNC_0(VAR_7->pixelformat, VAR_0,
     VAR_6->capabilities))
  return -VAR_1;


 if (VAR_7->sizeimage == 0)
  return -VAR_1;

 FUNC_2(VAR_7);

 return 0;
}
