
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enabled; } ;
struct acpi_device {int handle; TYPE_1__ status; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,...) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(struct acpi_device *VAR_6)
{
 int VAR_7 = 0;
 acpi_status VAR_8 = VAR_0;

 if (!VAR_6)
  return -VAR_1;



 FUNC_3("Evaluating _STA\n");
 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7) {
  FUNC_4("Unable to read status\n");
  goto end;
 }

 if (!VAR_6->status.enabled)
  FUNC_3("Device disabled\n");
 else
  FUNC_3("Device enabled\n");




 FUNC_3("Evaluating %s\n", VAR_3);
 VAR_8 = FUNC_2(VAR_6->handle, VAR_3,
   VAR_4, &VAR_5);
 if (FUNC_0(VAR_8)) {
  FUNC_4("Failure evaluating %s\n", VAR_3);
  VAR_7 = -VAR_2;
 }
end:
 return VAR_7;
}
