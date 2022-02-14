
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int regmap; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (int ,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_7,
      unsigned int VAR_8)
{
 unsigned int VAR_9;
 int VAR_10 = FUNC_2(VAR_7);
 unsigned int VAR_11, VAR_12, VAR_13;

 if (VAR_10 >= VAR_2 && VAR_10 <= VAR_3)
  VAR_11 = VAR_10;
 else if (VAR_10 >= VAR_4 && VAR_10 <= VAR_5)
  VAR_11 = 8 + (VAR_10 - VAR_4);
 else if (VAR_10 >= VAR_6 && VAR_10 <= VAR_1)
  VAR_11 = 4 + (VAR_10 - VAR_6);
 else
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_11 / 8);

 VAR_12 = FUNC_0(VAR_11 % 8);
 if (VAR_8)
  VAR_13 = VAR_12;
 else
  VAR_13 = 0;

 return FUNC_3(VAR_7->regmap, VAR_9, VAR_12, VAR_13);
}
