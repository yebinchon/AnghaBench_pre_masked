
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int acpi_status ;
struct TYPE_7__ {int bustype; } ;
struct TYPE_8__ {char* name; char* phys; TYPE_1__ id; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ,int *) ;
 TYPE_2__* VAR_7 ;
 int FUNC_6 (int ,int ,void*) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_7(void)
{
 acpi_status VAR_10;

 VAR_7 = FUNC_1();
 if (VAR_7) {
  VAR_7->name = "LG WMI hotkeys";
  VAR_7->phys = "wmi/input0";
  VAR_7->id.bustype = VAR_0;

  if (FUNC_5(VAR_7, VAR_8, ((void*)0)) ||
      FUNC_3(VAR_7)) {
   FUNC_4("Cannot initialize input device");
   FUNC_2(VAR_7);
   return;
  }

  VAR_6 |= VAR_3;
  VAR_10 = FUNC_6(VAR_4, VAR_9,
          (void *)0);
  if (FUNC_0(VAR_10))
   VAR_6 |= VAR_1;

  VAR_10 = FUNC_6(VAR_5, VAR_9,
          (void *)2);
  if (FUNC_0(VAR_10))
   VAR_6 |= VAR_2;
 } else {
  FUNC_4("Cannot allocate input device");
 }
}
