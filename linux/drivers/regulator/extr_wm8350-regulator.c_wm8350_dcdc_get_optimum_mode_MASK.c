
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static unsigned int FUNC_2(struct regulator_dev *VAR_3,
       int VAR_4, int VAR_5,
       int VAR_6)
{
 int VAR_7 = FUNC_1(VAR_3), VAR_8;

 switch (VAR_7) {
 case 131:
 case 128:
  VAR_8 = FUNC_0(VAR_6, VAR_1);
  break;
 case 130:
 case 129:
  VAR_8 = FUNC_0(VAR_6, VAR_2);
  break;
 default:
  VAR_8 = VAR_0;
  break;
 }
 return VAR_8;
}
