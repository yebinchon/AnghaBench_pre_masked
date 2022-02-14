
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct acpi_device {int dummy; } ;
struct TYPE_2__ {unsigned int* cap; } ;


 unsigned int FUNC_0 (unsigned int*) ;
 int FUNC_1 (char*,unsigned int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (char*,unsigned int) ;
 int FUNC_3 (unsigned int,int,unsigned int*) ;
 int VAR_1 ;
 unsigned int FUNC_4 (struct platform_device*,unsigned int) ;
 unsigned int FUNC_5 (struct platform_device*) ;
 unsigned int FUNC_6 (struct platform_device*,unsigned int) ;
 unsigned int FUNC_7 (struct platform_device*) ;
 int FUNC_8 (int ,char*,unsigned int*,unsigned int*) ;
 unsigned int FUNC_9 (struct platform_device*,unsigned int) ;
 unsigned int FUNC_10 (struct platform_device*,unsigned int) ;
 unsigned int FUNC_11 (struct platform_device*) ;
 unsigned int FUNC_12 (struct platform_device*) ;
 unsigned int FUNC_13 (struct acpi_device*,unsigned int) ;
 unsigned int FUNC_14 (struct platform_device*) ;
 unsigned int FUNC_15 (struct platform_device*) ;
 unsigned int FUNC_16 (struct platform_device*,unsigned int) ;
 unsigned int FUNC_17 (struct platform_device*) ;

__attribute__((used)) static void FUNC_18(struct acpi_device *VAR_2,
  struct platform_device *VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6, VAR_7;

 if (!VAR_0)
  return;


 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0->cap); VAR_4++) {
  unsigned int VAR_8 = VAR_0->cap[VAR_4];

  if (!VAR_8)
   continue;

  FUNC_1("setting up handle 0x%.4x\n", VAR_8);

  switch (VAR_8) {
  case 0x0100:
  case 0x0101:
  case 0x0127:

   FUNC_3(VAR_8, 0, &VAR_5);
   break;
  case 0x0102:

   FUNC_3(VAR_8, 0x100, &VAR_5);
   break;
  case 0x0105:
  case 0x0148:

   VAR_5 = FUNC_16(VAR_3, VAR_8);
   if (VAR_5)
    FUNC_2("couldn't set up touchpad control function (%d)\n",
      VAR_5);
   break;
  case 0x0115:
  case 0x0136:
  case 0x013f:
   VAR_5 = FUNC_4(VAR_3, VAR_8);
   if (VAR_5)
    FUNC_2("couldn't set up battery care function (%d)\n",
      VAR_5);
   break;
  case 0x0119:
  case 0x015D:
   VAR_5 = FUNC_10(VAR_3, VAR_8);
   if (VAR_5)
    FUNC_2("couldn't set up lid resume function (%d)\n",
      VAR_5);
   break;
  case 0x0122:
   VAR_5 = FUNC_15(VAR_3);
   if (VAR_5)
    FUNC_2("couldn't set up thermal profile function (%d)\n",
      VAR_5);
   break;
  case 0x0128:
  case 0x0146:
  case 0x015B:
   VAR_5 = FUNC_6(VAR_3, VAR_8);
   if (VAR_5)
    FUNC_2("couldn't set up GFX Switch status (%d)\n",
      VAR_5);
   break;
  case 0x0131:
   VAR_5 = FUNC_7(VAR_3);
   if (VAR_5)
    FUNC_2("couldn't set up high speed charging function (%d)\n",
           VAR_5);
   break;
  case 0x0124:
  case 0x0135:
   VAR_5 = FUNC_13(VAR_2, VAR_8);
   if (VAR_5)
    FUNC_2("couldn't set up rfkill support (%d)\n",
      VAR_5);
   break;
  case 0x0137:
  case 0x0143:
  case 0x014b:
  case 0x014c:
  case 0x0153:
  case 0x0163:
   VAR_5 = FUNC_9(VAR_3, VAR_8);
   if (VAR_5)
    FUNC_2("couldn't set up keyboard backlight function (%d)\n",
      VAR_5);
   break;
  case 0x0121:
   VAR_5 = FUNC_11(VAR_3);
   if (VAR_5)
    FUNC_2("couldn't set up low battery function (%d)\n",
           VAR_5);
   break;
  case 0x0149:
   VAR_5 = FUNC_5(VAR_3);
   if (VAR_5)
    FUNC_2("couldn't set up fan speed function (%d)\n",
           VAR_5);
   break;
  case 0x0155:
   VAR_5 = FUNC_17(VAR_3);
   if (VAR_5)
    FUNC_2("couldn't set up USB charge support (%d)\n",
      VAR_5);
   break;
  case 0x011D:
   VAR_5 = FUNC_12(VAR_3);
   if (VAR_5)
    FUNC_2("couldn't set up panel ID function (%d)\n",
           VAR_5);
   break;
  case 0x0168:
   VAR_5 = FUNC_14(VAR_3);
   if (VAR_5)
    FUNC_2("couldn't set up smart connect support (%d)\n",
      VAR_5);
   break;
  default:
   continue;
  }
 }


 VAR_7 = 0x10;
 if (!FUNC_8(VAR_1, "SN00", &VAR_7, &VAR_6))
  FUNC_8(VAR_1, "SN02", &VAR_6,
    &VAR_5);
}
