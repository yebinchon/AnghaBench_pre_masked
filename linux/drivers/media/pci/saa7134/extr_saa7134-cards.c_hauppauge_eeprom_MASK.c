
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tveeprom {int model; } ;
struct saa7134_dev {int name; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (struct tveeprom*,int *) ;

__attribute__((used)) static void FUNC_3(struct saa7134_dev *VAR_0, u8 *VAR_1)
{
 struct tveeprom VAR_2;

 FUNC_2(&VAR_2, VAR_1);


 switch (VAR_2.model) {
 case 67019:
 case 67109:
 case 67201:
 case 67301:
 case 67209:
 case 67559:
 case 67569:
 case 67579:
 case 67589:
 case 67599:
 case 67651:
 case 67659:
  break;
 default:
  FUNC_1("%s: warning: unknown hauppauge model #%d\n",
   VAR_0->name, VAR_2.model);
  break;
 }

 FUNC_0("%s: hauppauge eeprom: model=%d\n",
        VAR_0->name, VAR_2.model);
}
