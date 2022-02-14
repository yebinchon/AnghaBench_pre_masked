
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65910_reg {int (* get_ctrl_reg ) (int) ;int mfd; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 struct tps65910_reg* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_5,
        unsigned VAR_6)
{
 struct tps65910_reg *VAR_7 = FUNC_0(VAR_5);
 int VAR_8, VAR_9 = FUNC_1(VAR_5);

 VAR_8 = VAR_7->get_ctrl_reg(VAR_9);
 if (VAR_8 < 0)
  return VAR_8;

 switch (VAR_9) {
 case 130:
 case 132:
 case 131:
 case 128:
 case 133:
 case 137:
 case 136:
 case 135:
 case 129:
  return FUNC_3(VAR_7->mfd, VAR_8, VAR_3,
      VAR_6 << VAR_4);
 case 134:
  return FUNC_3(VAR_7->mfd, VAR_8, VAR_0,
      VAR_6 << VAR_1);
 }

 return -VAR_2;
}
