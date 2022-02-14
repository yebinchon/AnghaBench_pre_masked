
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77620_chip {int chip_id; } ;


 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;


__attribute__((used)) static int FUNC_0(struct max77620_chip *VAR_3,
          int VAR_4)
{
 int VAR_5;
 int VAR_6;

 switch (VAR_3->chip_id) {
 case 130:
  VAR_5 = VAR_1;
  break;
 case 129:
  VAR_5 = VAR_2;
  break;
 case 128:
  VAR_5 = VAR_1;
  break;
 default:
  return -VAR_0;
 }

 for (VAR_6 = 0; VAR_6 < 7; VAR_6++) {
  if (VAR_5 >= VAR_4)
   return VAR_6;
  VAR_5 *= 2;
 }

 return VAR_6;
}
