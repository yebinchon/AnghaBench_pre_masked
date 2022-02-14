
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int id; int val; } ;
struct tda7432 {TYPE_4__* treble; TYPE_3__* bass; TYPE_2__* mute; TYPE_1__* balance; } ;
struct TYPE_8__ {int val; } ;
struct TYPE_7__ {int val; } ;
struct TYPE_6__ {int val; } ;
struct TYPE_5__ {int val; } ;


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
 int FUNC_0 (struct v4l2_subdev*,int ,int) ;
 struct v4l2_subdev* FUNC_1 (struct v4l2_ctrl*) ;
 struct tda7432* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_ctrl *VAR_11)
{
 struct v4l2_subdev *VAR_12 = FUNC_1(VAR_11);
 struct tda7432 *VAR_13 = FUNC_2(VAR_12);
 u8 VAR_14, VAR_15, VAR_16;
 u8 VAR_17, VAR_18, VAR_19, VAR_20;

 switch (VAR_11->id) {
 case 129:
  if (VAR_13->balance->val < 0) {

   VAR_20 = VAR_19 = -VAR_13->balance->val;
   VAR_18 = VAR_17 = VAR_1;
  } else if (VAR_13->balance->val > 0) {

   VAR_20 = VAR_19 = VAR_1;
   VAR_18 = VAR_17 = VAR_13->balance->val;
  } else {

   VAR_20 = VAR_19 = VAR_1;
   VAR_18 = VAR_17 = VAR_1;
  }
  if (VAR_13->mute->val) {
   VAR_17 |= VAR_5;
   VAR_18 |= VAR_5;
   VAR_19 |= VAR_5;
   VAR_20 |= VAR_5;
  }

  FUNC_0(VAR_12, VAR_3, VAR_17);
  FUNC_0(VAR_12, VAR_4, VAR_18);
  FUNC_0(VAR_12, VAR_6, VAR_19);
  FUNC_0(VAR_12, VAR_7, VAR_20);
  return 0;
 case 128:
  VAR_16 = 0x6f - VAR_11->val;
  if (VAR_10)
   VAR_16 |= VAR_2;

  FUNC_0(VAR_12, VAR_9, VAR_16);
  return 0;
 case 130:
  VAR_14 = VAR_13->bass->val;
  VAR_15 = VAR_13->treble->val;
  if (VAR_14 >= 0x8)
   VAR_14 = 14 - (VAR_14 - 8);
  if (VAR_15 >= 0x8)
   VAR_15 = 14 - (VAR_15 - 8);

  FUNC_0(VAR_12, VAR_8, 0x10 | (VAR_14 << 4) | VAR_15);
  return 0;
 }
 return -VAR_0;
}
