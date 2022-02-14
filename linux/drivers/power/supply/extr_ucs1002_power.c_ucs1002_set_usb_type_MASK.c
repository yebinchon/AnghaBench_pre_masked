
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucs1002_info {int regmap; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;




 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int ,unsigned int) ;
 int* VAR_7 ;

__attribute__((used)) static int FUNC_2(struct ucs1002_info *VAR_8, int VAR_9)
{
 unsigned int VAR_10;

 if (VAR_9 < 0 || VAR_9 >= FUNC_0(VAR_7))
  return -VAR_0;

 switch (VAR_7[VAR_9]) {
 case 129:
  VAR_10 = VAR_5;
  break;
 case 128:
  VAR_10 = VAR_4;
  break;
 case 130:
  VAR_10 = VAR_3;
  break;
 case 131:
  VAR_10 = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_1(VAR_8->regmap, VAR_1,
      VAR_6, VAR_10);
}
