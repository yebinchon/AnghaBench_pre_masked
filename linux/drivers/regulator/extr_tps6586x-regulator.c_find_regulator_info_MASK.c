
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct tps6586x_regulator {TYPE_1__ desc; } ;


 int FUNC_0 (struct tps6586x_regulator*) ;





 struct tps6586x_regulator* VAR_0 ;
 struct tps6586x_regulator* VAR_1 ;
 struct tps6586x_regulator* VAR_2 ;
 struct tps6586x_regulator* VAR_3 ;

__attribute__((used)) static struct tps6586x_regulator *FUNC_1(int VAR_4, int VAR_5)
{
 struct tps6586x_regulator *VAR_6;
 struct tps6586x_regulator *VAR_7 = ((void*)0);
 int VAR_8;
 int VAR_9;

 switch (VAR_5) {
 case 132:
 case 131:
  VAR_7 = VAR_0;
  VAR_8 = FUNC_0(VAR_0);
  break;
 case 130:
 case 129:
  VAR_7 = VAR_1;
  VAR_8 = FUNC_0(VAR_1);
  break;
 case 128:
  VAR_7 = VAR_2;
  VAR_8 = FUNC_0(VAR_2);
  break;
 }


 if (VAR_7) {
  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
   VAR_6 = &VAR_7[VAR_9];
   if (VAR_6->desc.id == VAR_4)
    return VAR_6;
  }
 }

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_3); VAR_9++) {
  VAR_6 = &VAR_3[VAR_9];
  if (VAR_6->desc.id == VAR_4)
   return VAR_6;
 }
 return ((void*)0);
}
