
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65910_reg {int mfd; } ;
struct regulator_dev {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct tps65910_reg* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_9,
      unsigned VAR_10)
{
 struct tps65910_reg *VAR_11 = FUNC_0(VAR_9);
 int VAR_12 = FUNC_1(VAR_9), VAR_13;
 int VAR_14 = 0;

 switch (VAR_12) {
 case 130:
  VAR_14 = (VAR_10 / VAR_5) + 1;
  if (VAR_14 == 1)
   VAR_14--;
  VAR_13 = (VAR_10 % VAR_5) + 3;

  FUNC_2(VAR_11->mfd, VAR_0,
      VAR_6,
      VAR_14 << VAR_7);
  FUNC_3(VAR_11->mfd, VAR_1, VAR_13);
  break;
 case 129:
  VAR_14 = (VAR_10 / VAR_5) + 1;
  if (VAR_14 == 1)
   VAR_14--;
  VAR_13 = (VAR_10 % VAR_5) + 3;

  FUNC_2(VAR_11->mfd, VAR_2,
      VAR_6,
      VAR_14 << VAR_8);
  FUNC_3(VAR_11->mfd, VAR_3, VAR_13);
  break;
 case 128:
  VAR_13 = VAR_10 + 3;
  FUNC_3(VAR_11->mfd, VAR_4, VAR_13);
 }

 return 0;
}
