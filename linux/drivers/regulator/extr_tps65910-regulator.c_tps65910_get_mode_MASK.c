
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65910_reg {int (* get_ctrl_reg ) (int) ;int mfd; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 struct tps65910_reg* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int,int*) ;

__attribute__((used)) static unsigned int FUNC_4(struct regulator_dev *VAR_5)
{
 struct tps65910_reg *VAR_6 = FUNC_0(VAR_5);
 int VAR_7, VAR_8, VAR_9, VAR_10 = FUNC_1(VAR_5);

 VAR_8 = VAR_6->get_ctrl_reg(VAR_10);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = FUNC_3(VAR_6->mfd, VAR_8, &VAR_9);
 if (VAR_7 < 0)
  return VAR_7;

 if (!(VAR_9 & VAR_1))
  return VAR_4;
 else if (VAR_9 & VAR_0)
  return VAR_2;
 else
  return VAR_3;
}
