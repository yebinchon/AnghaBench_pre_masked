
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct ibm_struct {TYPE_3__* acpi; } ;
struct TYPE_8__ {int hotkey_wlsw; } ;
struct TYPE_7__ {TYPE_2__* device; } ;
struct TYPE_5__ {int device_class; } ;
struct TYPE_6__ {int dev; TYPE_1__ pnp; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int ,int*,char*,char*) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,int*,int*) ;
 int FUNC_4 (int,int*,int*) ;
 int FUNC_5 (int,int*,int*) ;
 int FUNC_6 (int,int*,int*) ;
 int FUNC_7 (int,int*,int*) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int) ;
 TYPE_4__ VAR_4 ;
 int FUNC_12 () ;

__attribute__((used)) static void FUNC_13(struct ibm_struct *VAR_5, u32 VAR_6)
{
 u32 VAR_7;
 bool VAR_8;
 bool VAR_9;
 bool VAR_10;

 if (VAR_6 != 0x80) {
  FUNC_9("unknown HKEY notification event %d\n", VAR_6);

  FUNC_0(
     VAR_5->acpi->device->pnp.device_class,
     FUNC_2(&VAR_5->acpi->device->dev),
     VAR_6, 0);
  return;
 }

 while (1) {
  if (!FUNC_1(VAR_2, &VAR_7, "MHKP", "d")) {
   FUNC_9("failed to retrieve HKEY event\n");
   return;
  }

  if (VAR_7 == 0) {

   return;
  }

  VAR_8 = 1;
  VAR_9 = 0;

  switch (VAR_7 >> 12) {
  case 1:

   VAR_10 = FUNC_5(VAR_7, &VAR_8,
       &VAR_9);
   break;
  case 2:

   VAR_10 = FUNC_7(VAR_7, &VAR_8,
       &VAR_9);
   break;
  case 3:

   switch (VAR_7) {
   case 129:
    VAR_3 = 1;
    FUNC_10("bay ejected\n");
    FUNC_8();
    VAR_10 = 1;
    break;
   case 128:

    VAR_10 = 1;
    break;
   default:
    VAR_10 = 0;
   }
   break;
  case 4:

   VAR_10 = FUNC_4(VAR_7, &VAR_8,
      &VAR_9);
   break;
  case 5:

   VAR_10 = FUNC_6(VAR_7, &VAR_8,
       &VAR_9);
   break;
  case 6:


   VAR_10 = FUNC_3(VAR_7, &VAR_8,
       &VAR_9);
   break;
  case 7:

   if (VAR_4.hotkey_wlsw &&
     VAR_7 == VAR_1) {
    FUNC_12();
    VAR_8 = 0;
    VAR_10 = 1;
    break;
   }

  default:
   VAR_10 = 0;
  }
  if (!VAR_10) {
   FUNC_11("unhandled HKEY event 0x%04x\n", VAR_7);
   FUNC_11("please report the conditions when this event happened to %s\n",
      VAR_0);
  }


  if (!VAR_9 && VAR_8) {
   FUNC_0(
     VAR_5->acpi->device->pnp.device_class,
     FUNC_2(&VAR_5->acpi->device->dev),
     VAR_6, VAR_7);
  }
 }
}
