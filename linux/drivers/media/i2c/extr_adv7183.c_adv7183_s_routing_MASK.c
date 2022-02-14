
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct v4l2_subdev {int dummy; } ;
struct adv7183 {scalar_t__ input; scalar_t__ output; } ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int) ;
 struct adv7183* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_3,
    u32 VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct adv7183 *VAR_7 = FUNC_2(VAR_3);
 int VAR_8;

 if ((VAR_4 > 141) || (VAR_5 > 143))
  return -VAR_2;

 if (VAR_4 != VAR_7->input) {
  VAR_7->input = VAR_4;
  VAR_8 = FUNC_0(VAR_3, VAR_0) & 0xF0;
  switch (VAR_4) {
  case 140:
   VAR_8 |= 0x1;
   break;
  case 138:
   VAR_8 |= 0x2;
   break;
  case 137:
   VAR_8 |= 0x3;
   break;
  case 136:
   VAR_8 |= 0x4;
   break;
  case 135:
   VAR_8 |= 0x5;
   break;
  case 134:
   VAR_8 |= 0xB;
   break;
  case 133:
   VAR_8 |= 0xC;
   break;
  case 132:
   VAR_8 |= 0xD;
   break;
  case 131:
   VAR_8 |= 0xE;
   break;
  case 139:
   VAR_8 |= 0xF;
   break;
  case 130:
   VAR_8 |= 0x6;
   break;
  case 129:
   VAR_8 |= 0x7;
   break;
  case 128:
   VAR_8 |= 0x8;
   break;
  case 142:
   VAR_8 |= 0x9;
   break;
  case 141:
   VAR_8 |= 0xA;
   break;
  default:
   break;
  }
  FUNC_1(VAR_3, VAR_0, VAR_8);
 }

 if (VAR_5 != VAR_7->output) {
  VAR_7->output = VAR_5;
  VAR_8 = FUNC_0(VAR_3, VAR_1) & 0xC0;
  switch (VAR_5) {
  case 143:
   VAR_8 |= 0x9;
   break;
  default:
   VAR_8 |= 0xC;
   break;
  }
  FUNC_1(VAR_3, VAR_1, VAR_8);
 }

 return 0;
}
