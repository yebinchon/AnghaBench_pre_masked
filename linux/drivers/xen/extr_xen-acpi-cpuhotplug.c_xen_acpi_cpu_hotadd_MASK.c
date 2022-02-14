
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_processor {int id; int handle; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct acpi_processor*) ;
 int FUNC_3 () ;

__attribute__((used)) static acpi_status FUNC_4(struct acpi_processor *VAR_2)
{
 if (!FUNC_1(VAR_2->handle))
  return VAR_0;

 VAR_2->id = FUNC_2(VAR_2);
 if (FUNC_0(VAR_2->id))
  return VAR_0;





 FUNC_3();

 return VAR_1;
}
