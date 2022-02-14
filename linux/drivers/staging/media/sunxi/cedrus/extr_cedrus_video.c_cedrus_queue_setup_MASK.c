
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vb2_queue {int type; } ;
struct v4l2_pix_format {unsigned int sizeimage; int pixelformat; } ;
struct device {int dummy; } ;
struct cedrus_dev {int capabilities; } ;
struct cedrus_ctx {struct v4l2_pix_format dst_fmt; struct v4l2_pix_format src_fmt; struct cedrus_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 struct cedrus_ctx* FUNC_2 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_3(struct vb2_queue *VAR_3, unsigned int *VAR_4,
         unsigned int *VAR_5, unsigned int VAR_6[],
         struct device *VAR_7[])
{
 struct cedrus_ctx *VAR_8 = FUNC_2(VAR_3);
 struct cedrus_dev *VAR_9 = VAR_8->dev;
 struct v4l2_pix_format *VAR_10;
 u32 VAR_11;

 if (FUNC_0(VAR_3->type)) {
  VAR_11 = VAR_1;
  VAR_10 = &VAR_8->src_fmt;
 } else {
  VAR_11 = VAR_0;
  VAR_10 = &VAR_8->dst_fmt;
 }

 if (!FUNC_1(VAR_10->pixelformat, VAR_11,
     VAR_9->capabilities))
  return -VAR_2;

 if (*VAR_5) {
  if (VAR_6[0] < VAR_10->sizeimage)
   return -VAR_2;
 } else {
  VAR_6[0] = VAR_10->sizeimage;
  *VAR_5 = 1;
 }

 return 0;
}
