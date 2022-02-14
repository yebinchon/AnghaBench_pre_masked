
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct acpi_device {int dummy; } ;
struct TYPE_6__ {unsigned int* cap; } ;
struct TYPE_4__ {int device_class; } ;
struct TYPE_5__ {int dev; TYPE_1__ pnp; } ;


 unsigned int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,...) ;
 TYPE_3__* VAR_3 ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (unsigned int,int,unsigned int*) ;
 int FUNC_7 (int) ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int,unsigned int) ;
 int FUNC_9 (int ,char*,unsigned int*,unsigned int*) ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(struct acpi_device *VAR_6, u32 VAR_7)
{
 u32 VAR_8 = VAR_7;
 u8 VAR_9 = 0;
 int VAR_10;

 FUNC_4("sony_nc_notify, event: 0x%.2x\n", VAR_7);

 if (VAR_7 >= 0x90) {
  unsigned int VAR_11 = 0;
  unsigned int VAR_12 = 0;
  unsigned int VAR_13 = 0;
  unsigned int VAR_14 = VAR_7 - 0x90;

  if (VAR_14 >= FUNC_0(VAR_3->cap)) {
   FUNC_5("Event 0x%x outside of capabilities list\n",
     VAR_7);
   return;
  }
  VAR_13 = VAR_3->cap[VAR_14];


  switch (VAR_13) {

  case 0x0100:
  case 0x0127:
   VAR_9 = VAR_1;
   VAR_10 = FUNC_8(VAR_7, VAR_13);

   if (VAR_10 > 0) {
    FUNC_7(VAR_10);
    VAR_8 = VAR_10;
   }

   break;


  case 0x0124:
  case 0x0135:






   VAR_9 = VAR_2;
   FUNC_6(VAR_13, 0x0100, &VAR_11);
   VAR_8 = VAR_11 & 0x03;


   if (VAR_8 == 1)
    FUNC_10();

   break;

  case 0x0128:
  case 0x0146:

   FUNC_6(VAR_13, 0x0000, &VAR_11);
   FUNC_4("GFX switch event received (reason: %s)\n",
     (VAR_11 == 0x1) ? "switch change" :
     (VAR_11 == 0x2) ? "output switch" :
     (VAR_11 == 0x3) ? "output switch" :
     "");

   VAR_9 = VAR_0;
   VAR_8 = FUNC_1();
   break;

  case 0x015B:

   VAR_9 = VAR_0;
   VAR_8 = FUNC_1();
   break;
  default:
   FUNC_4("Unknown event 0x%x for handle 0x%x\n",
     VAR_7, VAR_13);
   break;
  }


  VAR_12 = 1 << VAR_14;
  FUNC_9(VAR_5, "SN05", &VAR_12, &VAR_11);

 } else {

  VAR_9 = VAR_1;
  FUNC_7(VAR_8);
 }
 FUNC_2(VAR_4->pnp.device_class,
   FUNC_3(&VAR_4->dev), VAR_9, VAR_8);
}
