
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_pix_format {unsigned int width; unsigned int height; int pixelformat; } ;
struct cedrus_dev {int dummy; } ;


 int FUNC_0 (unsigned int,int) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct cedrus_dev*,int ,int) ;

void FUNC_4(struct cedrus_dev *VAR_7,
      struct v4l2_pix_format *VAR_8)
{
 unsigned int VAR_9 = VAR_8->width;
 unsigned int VAR_10 = VAR_8->height;
 u32 VAR_11;
 u32 VAR_12;

 switch (VAR_8->pixelformat) {
 case 129:
  VAR_11 = FUNC_0(VAR_9, 16) * FUNC_0(VAR_10, 16) / 2;

  VAR_12 = VAR_4;
  FUNC_3(VAR_7, VAR_3, VAR_12);

  VAR_12 = VAR_11 / 2;
  FUNC_3(VAR_7, VAR_1, VAR_12);

  VAR_12 = FUNC_2(FUNC_0(VAR_9, 16)) |
        FUNC_1(FUNC_0(VAR_9, 16) / 2);
  FUNC_3(VAR_7, VAR_2, VAR_12);

  break;
 case 128:
 default:
  VAR_12 = VAR_5;
  FUNC_3(VAR_7, VAR_3, VAR_12);

  VAR_12 = VAR_6;
  FUNC_3(VAR_7, VAR_0, VAR_12);

  break;
 }
}
