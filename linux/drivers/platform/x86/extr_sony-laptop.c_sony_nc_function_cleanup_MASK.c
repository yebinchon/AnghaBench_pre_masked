
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {unsigned int* cap; } ;


 unsigned int FUNC_0 (unsigned int*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int ,char*,unsigned int*,unsigned int*) ;
 int FUNC_7 (struct platform_device*,unsigned int) ;
 int FUNC_8 (struct platform_device*) ;
 int FUNC_9 (struct platform_device*) ;
 int FUNC_10 (struct platform_device*) ;
 int FUNC_11 () ;
 int FUNC_12 (struct platform_device*) ;
 int FUNC_13 (struct platform_device*) ;
 int FUNC_14 (struct platform_device*) ;
 int FUNC_15 (struct platform_device*) ;

__attribute__((used)) static void FUNC_16(struct platform_device *VAR_2)
{
 unsigned int VAR_3, VAR_4, VAR_5, VAR_6;

 if (!VAR_0)
  return;


 FUNC_6(VAR_1, "SN01", ((void*)0), &VAR_5);
 FUNC_6(VAR_1, "SN03", &VAR_5, &VAR_4);


 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0->cap); VAR_3++) {

  VAR_6 = VAR_0->cap[VAR_3];

  if (!VAR_6)
   continue;

  switch (VAR_6) {
  case 0x0105:
  case 0x0148:
   FUNC_14(VAR_2);
   break;
  case 0x0115:
  case 0x0136:
  case 0x013f:
   FUNC_1(VAR_2);
   break;
  case 0x0119:
  case 0x015D:
   FUNC_8(VAR_2);
   break;
  case 0x0122:
   FUNC_13(VAR_2);
   break;
  case 0x0128:
  case 0x0146:
  case 0x015B:
   FUNC_3(VAR_2);
   break;
  case 0x0131:
   FUNC_5(VAR_2);
   break;
  case 0x0124:
  case 0x0135:
   FUNC_11();
   break;
  case 0x0137:
  case 0x0143:
  case 0x014b:
  case 0x014c:
  case 0x0153:
  case 0x0163:
   FUNC_7(VAR_2, VAR_6);
   break;
  case 0x0121:
   FUNC_9(VAR_2);
   break;
  case 0x0149:
   FUNC_2(VAR_2);
   break;
  case 0x0155:
   FUNC_15(VAR_2);
   break;
  case 0x011D:
   FUNC_10(VAR_2);
   break;
  case 0x0168:
   FUNC_12(VAR_2);
   break;
  default:
   continue;
  }
 }


 FUNC_4(VAR_2);
}
