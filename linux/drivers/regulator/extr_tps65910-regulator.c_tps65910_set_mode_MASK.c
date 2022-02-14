
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65910_reg {int (* get_ctrl_reg ) (int) ;struct tps65910* mfd; } ;
struct tps65910 {int dummy; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 struct tps65910_reg* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct tps65910*,int,int) ;
 int FUNC_4 (struct tps65910*,int,int) ;
 int FUNC_5 (struct tps65910*,int,int,int) ;

__attribute__((used)) static int FUNC_6(struct regulator_dev *VAR_3, unsigned int VAR_4)
{
 struct tps65910_reg *VAR_5 = FUNC_0(VAR_3);
 struct tps65910 *VAR_6 = VAR_5->mfd;
 int VAR_7, VAR_8, VAR_9 = FUNC_1(VAR_3);

 VAR_7 = VAR_5->get_ctrl_reg(VAR_9);
 if (VAR_7 < 0)
  return VAR_7;

 switch (VAR_4) {
 case 129:
  return FUNC_5(VAR_5->mfd, VAR_7,
      VAR_1 | VAR_2,
      VAR_2);
 case 130:
  VAR_8 = VAR_2 | VAR_1;
  return FUNC_4(VAR_6, VAR_7, VAR_8);
 case 128:
  return FUNC_3(VAR_6, VAR_7, VAR_2);
 }

 return -VAR_0;
}
