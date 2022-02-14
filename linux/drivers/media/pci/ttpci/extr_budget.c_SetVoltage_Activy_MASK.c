
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_dev {int dummy; } ;
struct budget {struct saa7146_dev* dev; } ;
typedef enum fe_sec_voltage { ____Placeholder_fe_sec_voltage } fe_sec_voltage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int,char*,struct budget*) ;
 int FUNC_1 (struct saa7146_dev*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct budget *VAR_3,
        enum fe_sec_voltage VAR_4)
{
 struct saa7146_dev *VAR_5=VAR_3->dev;

 FUNC_0(2, "budget: %p\n", VAR_3);

 switch (VAR_4) {
  case 130:
   FUNC_1(VAR_5, 1, VAR_1);
   FUNC_1(VAR_5, 2, VAR_2);
   break;
  case 129:
   FUNC_1(VAR_5, 1, VAR_1);
   FUNC_1(VAR_5, 2, VAR_1);
   break;
  case 128:
   FUNC_1(VAR_5, 1, VAR_2);
   break;
  default:
   return -VAR_0;
 }

 return 0;
}
