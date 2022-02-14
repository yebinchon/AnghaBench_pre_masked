
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct vfe_device {scalar_t__ base; } ;
struct v4l2_pix_format_mplane {int pixelformat; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct v4l2_pix_format_mplane*,int ,int*,int*,int*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct vfe_device *VAR_0, u32 VAR_1,
         struct v4l2_pix_format_mplane *VAR_2,
         u8 VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 if (VAR_4) {
  u16 VAR_6 = 0, VAR_7 = 0, VAR_8 = 0, VAR_9;

  FUNC_2(VAR_2, VAR_3, &VAR_6, &VAR_7, &VAR_8);

  VAR_9 = FUNC_3(VAR_2->pixelformat, VAR_6);

  VAR_5 = VAR_7 - 1;
  VAR_5 |= ((VAR_9 + 1) / 2 - 1) << 16;

  FUNC_4(VAR_5, VAR_0->base +
          FUNC_1(VAR_1));

  VAR_9 = FUNC_3(VAR_2->pixelformat, VAR_8);

  VAR_5 = 0x3;
  VAR_5 |= (VAR_7 - 1) << 4;
  VAR_5 |= VAR_9 << 16;

  FUNC_4(VAR_5, VAR_0->base +
          FUNC_0(VAR_1));
 } else {
  FUNC_4(0, VAR_0->base +
          FUNC_1(VAR_1));
  FUNC_4(0, VAR_0->base +
          FUNC_0(VAR_1));
 }
}
