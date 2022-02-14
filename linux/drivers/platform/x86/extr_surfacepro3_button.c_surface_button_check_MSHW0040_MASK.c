
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ value; } ;
union acpi_object {TYPE_1__ integer; } ;
typedef scalar_t__ u64 ;
struct acpi_device {int dev; int handle; } ;
typedef int acpi_handle ;


 int FUNC_0 (union acpi_object*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 union acpi_object* FUNC_1 (int ,int *,int ,int ,int *,int ) ;
 int FUNC_2 (int *,char*,scalar_t__) ;

__attribute__((used)) static bool FUNC_3(struct acpi_device *VAR_4)
{
 acpi_handle VAR_5 = VAR_4->handle;
 union acpi_object *VAR_6;
 u64 VAR_7 = 0;


 VAR_6 = FUNC_1(VAR_5, &VAR_3,
      VAR_2,
      VAR_1,
      ((void*)0), VAR_0);
 if (VAR_6) {
  VAR_7 = VAR_6->integer.value;
  FUNC_0(VAR_6);
 }

 FUNC_2(&VAR_4->dev, "OEM Platform Revision %llu\n", VAR_7);

 return VAR_7 == 0;
}
