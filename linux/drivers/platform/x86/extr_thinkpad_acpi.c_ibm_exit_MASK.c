
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ init_called; scalar_t__ acpi_driver_registered; scalar_t__ proc_created; scalar_t__ acpi_notify_installed; } ;
struct ibm_struct {int name; TYPE_2__ flags; int (* exit ) () ;TYPE_1__* acpi; int all_drivers; } ;
struct TYPE_3__ {int * driver; int type; int * handle; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct ibm_struct *VAR_4)
{
 FUNC_3(VAR_0, "removing %s\n", VAR_4->name);

 FUNC_5(&VAR_4->all_drivers);

 if (VAR_4->flags.acpi_notify_installed) {
  FUNC_3(VAR_0,
   "%s: acpi_remove_notify_handler\n", VAR_4->name);
  FUNC_0(!VAR_4->acpi);
  FUNC_2(*VAR_4->acpi->handle,
        VAR_4->acpi->type,
        VAR_2);
  VAR_4->flags.acpi_notify_installed = 0;
 }

 if (VAR_4->flags.proc_created) {
  FUNC_3(VAR_0,
   "%s: remove_proc_entry\n", VAR_4->name);
  FUNC_6(VAR_4->name, VAR_3);
  VAR_4->flags.proc_created = 0;
 }

 if (VAR_4->flags.acpi_driver_registered) {
  FUNC_3(VAR_0,
   "%s: acpi_bus_unregister_driver\n", VAR_4->name);
  FUNC_0(!VAR_4->acpi);
  FUNC_1(VAR_4->acpi->driver);
  FUNC_4(VAR_4->acpi->driver);
  VAR_4->acpi->driver = ((void*)0);
  VAR_4->flags.acpi_driver_registered = 0;
 }

 if (VAR_4->flags.init_called && VAR_4->exit) {
  VAR_4->exit();
  VAR_4->flags.init_called = 0;
 }

 FUNC_3(VAR_1, "finished removing %s\n", VAR_4->name);
}
