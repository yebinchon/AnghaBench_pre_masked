
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dev; } ;
struct tvp5150 {int dev_id; int rom_ver; int input; int regmap; int output; int enable; } ;




 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,int ,char*,int,int ,int,int) ;
 int FUNC_1 (int ,int ,unsigned int,unsigned int) ;
 int FUNC_2 (int ,int ,int) ;
 struct tvp5150* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static void FUNC_4(struct v4l2_subdev *VAR_6)
{
 int VAR_7 = 0;
 struct tvp5150 *VAR_8 = FUNC_3(VAR_6);
 unsigned int VAR_9, VAR_10;
 int VAR_11 = 0;


 if ((VAR_8->dev_id == 0x5150 && VAR_8->rom_ver == 0x0400) ||
     (VAR_8->dev_id == 0x5151 && VAR_8->rom_ver == 0x0100)) {
  if (!VAR_8->enable)
   VAR_11 = 8;
 }

 switch (VAR_8->input) {
 case 129:
  VAR_11 |= 2;

 case 130:
  break;
 case 128:
 default:
  VAR_11 |= 1;
  break;
 }

 FUNC_0(VAR_6->dev, 1, VAR_5, "Selecting video route: route input=%i, output=%i => tvp5150 input=%i, opmode=%i\n",
   VAR_8->input, VAR_8->output,
   VAR_11, VAR_7);

 FUNC_2(VAR_8->regmap, VAR_3, VAR_7);
 FUNC_2(VAR_8->regmap, VAR_4, VAR_11);
 VAR_9 = VAR_1 | VAR_2;
 if (VAR_8->input == 128)
  VAR_10 = VAR_2;
 else
  VAR_10 = VAR_1;
 FUNC_1(VAR_8->regmap, VAR_0, VAR_9, VAR_10);
}
