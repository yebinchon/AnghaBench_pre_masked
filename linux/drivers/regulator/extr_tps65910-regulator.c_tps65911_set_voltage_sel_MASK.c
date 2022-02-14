
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
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 struct tps65910_reg* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_7,
        unsigned VAR_8)
{
 struct tps65910_reg *VAR_9 = FUNC_0(VAR_7);
 int VAR_10, VAR_11 = FUNC_1(VAR_7);

 VAR_10 = VAR_9->get_ctrl_reg(VAR_11);
 if (VAR_10 < 0)
  return VAR_10;

 switch (VAR_11) {
 case 135:
 case 134:
 case 132:
  return FUNC_3(VAR_9->mfd, VAR_10, VAR_3,
      VAR_8 << VAR_6);
 case 133:
 case 131:
 case 130:
 case 129:
 case 128:
  return FUNC_3(VAR_9->mfd, VAR_10, VAR_4,
      VAR_8 << VAR_6);
 case 136:
  return FUNC_3(VAR_9->mfd, VAR_10, VAR_5,
      VAR_8 << VAR_6);
 case 137:
  return FUNC_3(VAR_9->mfd, VAR_10, VAR_0,
      VAR_8 << VAR_1);
 }

 return -VAR_2;
}
