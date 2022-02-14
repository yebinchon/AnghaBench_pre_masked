
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_device {int dev; int handle; } ;
typedef int acpi_status ;
struct TYPE_2__ {int io_length; int io_base; int irq; int phys; } ;


 scalar_t__ FUNC_0 (int ) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct acpi_device*) ;
 char* FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (struct acpi_device*) ;
 int FUNC_4 (int ,int ,int ,int *) ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int FUNC_5 () ;
 int VAR_9 ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int,char*,char*) ;
 int FUNC_12 (int ,char*,char*) ;

__attribute__((used)) static int FUNC_13(struct acpi_device *VAR_10)
{
 acpi_status VAR_11;
 int VAR_12;

 if (!VAR_10)
  return -VAR_2;

 VAR_11 = FUNC_4(VAR_10->handle, VAR_5,
   VAR_9, ((void*)0));
 if (FUNC_0(VAR_11) || !VAR_7.irq || !VAR_7.io_base)
  return -VAR_3;

 FUNC_12(FUNC_3(VAR_10), "Fujitsu %s", FUNC_2(VAR_10));
 FUNC_12(FUNC_1(VAR_10), "%s", VAR_0);

 FUNC_11(VAR_7.phys, sizeof(VAR_7.phys),
   "%s/input0", FUNC_2(VAR_10));

 VAR_12 = FUNC_7(&VAR_10->dev,
  FUNC_3(VAR_10), VAR_7.phys);
 if (VAR_12)
  return VAR_12;

 if (!FUNC_10(VAR_7.io_base, VAR_7.io_length, VAR_6)) {
  FUNC_6();
  return -VAR_1;
 }

 FUNC_5();

 VAR_12 = FUNC_9(VAR_7.irq, VAR_8,
   VAR_4, VAR_6, VAR_8);
 if (VAR_12) {
  FUNC_8(VAR_7.io_base, VAR_7.io_length);
  FUNC_6();
  return VAR_12;
 }

 return 0;
}
