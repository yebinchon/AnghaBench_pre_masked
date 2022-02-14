
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_pix_format {scalar_t__ pixelformat; int width; } ;
struct rvin_video_format {int bpp; } ;
struct rvin_dev {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 struct rvin_video_format* FUNC_2 (struct rvin_dev*,scalar_t__) ;

__attribute__((used)) static u32 FUNC_3(struct rvin_dev *VAR_2,
        struct v4l2_pix_format *VAR_3)
{
 const struct rvin_video_format *VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_2(VAR_2, VAR_3->pixelformat);

 if (FUNC_1(!VAR_4))
  return -VAR_0;

 VAR_5 = VAR_3->pixelformat == VAR_1 ? 0x20 : 0x10;

 return FUNC_0(VAR_3->width, VAR_5) * VAR_4->bpp;
}
