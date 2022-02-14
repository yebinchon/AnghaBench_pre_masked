
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tveeprom {int model; } ;
struct cx23885_dev {int name; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (struct tveeprom*,int *) ;

__attribute__((used)) static void FUNC_3(struct cx23885_dev *VAR_0, u8 *VAR_1)
{
 struct tveeprom VAR_2;

 FUNC_2(&VAR_2, VAR_1);


 switch (VAR_2.model) {
 case 22001:


 case 22009:


 case 22011:


 case 22019:


 case 22021:


 case 22029:


 case 22101:


 case 22109:


 case 22111:


 case 22119:


 case 22121:


 case 22129:


 case 71009:


 case 71100:


 case 71359:


 case 71439:


 case 71449:


 case 71939:


 case 71949:


 case 71959:


 case 71979:


 case 71999:


 case 76601:


 case 77001:


 case 77011:


 case 77041:


 case 77051:


 case 78011:


 case 78501:


 case 78521:


 case 78531:


 case 78631:


 case 79001:


 case 79101:


 case 79501:


 case 79561:


 case 79571:


 case 79671:


 case 80019:


 case 81509:


 case 81519:


  break;
 case 85021:


  break;
 case 85721:


 case 121019:

  break;
 case 121029:

  break;
 case 150329:

  break;
 case 161111:

  break;
 case 166100:
 case 166200:


  break;
 case 166101:
 case 166201:


  break;
 case 165100:
 case 165200:


  break;
 case 165101:
 case 165201:


  break;
 default:
  FUNC_1("%s: warning: unknown hauppauge model #%d\n",
   VAR_0->name, VAR_2.model);
  break;
 }

 FUNC_0("%s: hauppauge eeprom: model=%d\n",
  VAR_0->name, VAR_2.model);
}
