
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct saa7706h_state {scalar_t__ muted; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int,int*) ;
 int FUNC_2 (struct v4l2_subdev*,int ,int,int*) ;
 struct saa7706h_state* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_28)
{
 struct saa7706h_state *VAR_29 = FUNC_3(VAR_28);
 int VAR_30 = 0;

 VAR_30 = FUNC_1(VAR_28, VAR_19,
  VAR_3 | VAR_1 |
  VAR_2, &VAR_30);


 FUNC_0(1);

 VAR_30 = FUNC_1(VAR_28, VAR_19,
  VAR_3, &VAR_30);

 VAR_30 = FUNC_2(VAR_28, VAR_20, 0, &VAR_30);

 VAR_30 = FUNC_2(VAR_28, VAR_16, 0x040022, &VAR_30);

 VAR_30 = FUNC_2(VAR_28, VAR_17,
  VAR_0, &VAR_30);

 VAR_30 = FUNC_2(VAR_28, VAR_18, 0x024080, &VAR_30);

 VAR_30 = FUNC_2(VAR_28, VAR_26, 0x200080, &VAR_30);

 VAR_30 = FUNC_2(VAR_28, VAR_21, 0xf4caed, &VAR_30);

 VAR_30 = FUNC_2(VAR_28, VAR_15, 0x124334, &VAR_30);

 VAR_30 = FUNC_2(VAR_28, VAR_14, 0x004a1a,
  &VAR_30);

 VAR_30 = FUNC_2(VAR_28, VAR_22, 0x0071c7,
  &VAR_30);

 VAR_30 = FUNC_2(VAR_28, VAR_25,
  0x0e22ff, &VAR_30);

 VAR_30 = FUNC_2(VAR_28, VAR_23, 0x001ff8,
  &VAR_30);

 VAR_30 = FUNC_2(VAR_28, VAR_27, 0x080003,
  &VAR_30);

 VAR_30 = FUNC_2(VAR_28, VAR_24, 0x000004, &VAR_30);

 VAR_30 = FUNC_1(VAR_28, VAR_4, 0x0c6c, &VAR_30);

 VAR_30 = FUNC_2(VAR_28, VAR_6, 0x000b4b, &VAR_30);

 VAR_30 = FUNC_2(VAR_28, VAR_5, 0x000600, &VAR_30);

 VAR_30 = FUNC_2(VAR_28, VAR_5, 0x0000c0, &VAR_30);

 VAR_30 = FUNC_2(VAR_28, VAR_8, 0x000819,
  &VAR_30);

 VAR_30 = FUNC_2(VAR_28, VAR_8, 0x00085a,
  &VAR_30);

 VAR_30 = FUNC_2(VAR_28, VAR_7, 0x7fffff,
  &VAR_30);

 VAR_30 = FUNC_2(VAR_28, VAR_9, 0x2000cb,
  &VAR_30);

 VAR_30 = FUNC_2(VAR_28, VAR_10, 0x2000cb,
  &VAR_30);

 VAR_30 = FUNC_1(VAR_28, VAR_13, 0x0f80, &VAR_30);

 VAR_30 = FUNC_1(VAR_28, VAR_12, 0x0800,
  &VAR_30);

 VAR_30 = FUNC_1(VAR_28, VAR_11, 0x0800, &VAR_30);

 VAR_30 = FUNC_2(VAR_28, VAR_8, 0x000905,
  &VAR_30);
 if (!VAR_30)
  VAR_29->muted = 0;
 return VAR_30;
}
