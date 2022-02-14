
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65910_reg {unsigned int (* get_ctrl_reg ) (int) ;int mfd; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 struct tps65910_reg* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 unsigned int FUNC_2 (int) ;
 int FUNC_3 (int ,unsigned int,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_5)
{
 struct tps65910_reg *VAR_6 = FUNC_0(VAR_5);
 int VAR_7, VAR_8 = FUNC_1(VAR_5);
 unsigned int VAR_9, VAR_10;

 VAR_10 = VAR_6->get_ctrl_reg(VAR_8);

 VAR_7 = FUNC_3(VAR_6->mfd, VAR_10, &VAR_9);
 if (VAR_7 < 0)
  return VAR_7;

 switch (VAR_8) {
 case 135:
 case 134:
 case 132:
  VAR_9 &= VAR_1;
  VAR_9 >>= VAR_4;
  break;
 case 133:
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_9 &= VAR_2;
  VAR_9 >>= VAR_4;
  break;
 case 136:
  VAR_9 &= VAR_3;
  VAR_9 >>= VAR_4;
  break;
 default:
  return -VAR_0;
 }

 return VAR_9;
}
