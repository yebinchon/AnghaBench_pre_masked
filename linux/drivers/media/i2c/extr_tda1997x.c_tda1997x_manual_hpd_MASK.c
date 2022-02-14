
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
typedef enum hpd_mode { ____Placeholder_hpd_mode } hpd_mode ;


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
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_10, enum hpd_mode VAR_11)
{
 u8 VAR_12, VAR_13, VAR_14;

 VAR_12 = FUNC_0(VAR_10, VAR_7);
 VAR_13 = FUNC_0(VAR_10, VAR_9);
 VAR_14 = FUNC_0(VAR_10, VAR_8);


 VAR_14 &= (VAR_4 |
      VAR_1 |
      VAR_3 |
      VAR_2);

 switch (VAR_11) {

 case 130:

  VAR_13 &= ~VAR_5;

  VAR_14 &= ~(VAR_2 | VAR_3);
  FUNC_1(VAR_10, VAR_9, VAR_13);
  FUNC_1(VAR_10, VAR_8, VAR_14);
  break;

 case 132:

  VAR_13 &= ~VAR_5;
  VAR_13 |= 1 << VAR_6;
  FUNC_1(VAR_10, VAR_9, VAR_13);
  break;

 case 129:

  VAR_14 &= ~(VAR_2 | VAR_3);

  VAR_12 &= ~VAR_0;
  FUNC_1(VAR_10, VAR_7, VAR_12);
  FUNC_1(VAR_10, VAR_8, VAR_14);
  break;

 case 131:
  VAR_12 |= VAR_0;
  FUNC_1(VAR_10, VAR_7, VAR_12);
  break;

 case 128:

  VAR_14 &= ~(VAR_2 | VAR_3);
  FUNC_1(VAR_10, VAR_8, VAR_14);
  break;
 }

 return 0;
}
