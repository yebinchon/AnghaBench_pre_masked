
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;



 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_6,
     unsigned VAR_7)
{
 int VAR_8, VAR_9 = 1, VAR_10 = FUNC_1(VAR_6);

 switch (VAR_10) {
 case 130:
 case 129:
  VAR_9 = (VAR_7 / VAR_2) + 1;
  VAR_8 = VAR_1 +
   (VAR_7 % VAR_2) * VAR_3;
  break;
 case 128:
  VAR_8 = VAR_4 + (VAR_7 * VAR_5);
  break;
 default:
  FUNC_0();
  return -VAR_0;
 }

 return VAR_8 * 100 * VAR_9;
}
