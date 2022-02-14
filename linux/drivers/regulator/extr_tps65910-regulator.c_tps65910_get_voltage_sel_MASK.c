
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65910_reg {int (* get_ctrl_reg ) (int) ;int mfd; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct tps65910_reg* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int,int*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_5)
{
 struct tps65910_reg *VAR_6 = FUNC_0(VAR_5);
 int VAR_7, VAR_8, VAR_9, VAR_10 = FUNC_1(VAR_5);

 VAR_8 = VAR_6->get_ctrl_reg(VAR_10);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = FUNC_3(VAR_6->mfd, VAR_8, &VAR_9);
 if (VAR_7 < 0)
  return VAR_7;

 switch (VAR_10) {
 case 130:
 case 132:
 case 131:
 case 128:
 case 133:
 case 137:
 case 136:
 case 135:
 case 129:
  VAR_9 &= VAR_3;
  VAR_9 >>= VAR_4;
  break;
 case 134:
  VAR_9 &= VAR_0;
  VAR_9 >>= VAR_1;
  break;
 default:
  return -VAR_2;
 }

 return VAR_9;
}
