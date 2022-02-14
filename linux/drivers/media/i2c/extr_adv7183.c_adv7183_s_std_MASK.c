
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;
struct adv7183 {int std; } ;


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
 struct adv7183* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_10, v4l2_std_id VAR_11)
{
 struct adv7183 *VAR_12 = FUNC_2(VAR_10);
 int VAR_13;

 VAR_13 = FUNC_0(VAR_10, VAR_0) & 0xF;
 if (VAR_11 == VAR_5)
  VAR_13 |= 0x60;
 else if (VAR_11 == VAR_3)
  VAR_13 |= 0x70;
 else if (VAR_11 == VAR_7)
  VAR_13 |= 0x90;
 else if (VAR_11 == VAR_6)
  VAR_13 |= 0xA0;
 else if (VAR_11 == VAR_8)
  VAR_13 |= 0xC0;
 else if (VAR_11 & VAR_4)
  VAR_13 |= 0x80;
 else if (VAR_11 & VAR_2)
  VAR_13 |= 0x50;
 else if (VAR_11 & VAR_9)
  VAR_13 |= 0xE0;
 else
  return -VAR_1;
 FUNC_1(VAR_10, VAR_0, VAR_13);

 VAR_12->std = VAR_11;

 return 0;
}
