
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_buffer {int pointer; int member_0; } ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,struct acpi_buffer*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(acpi_handle VAR_3, char *VAR_4)
{
 struct acpi_buffer VAR_5 = {VAR_0};

 if (FUNC_0(FUNC_1(VAR_3, VAR_2, &VAR_5)))
  FUNC_4("Failed to get device name from acpi handle\n");
 else {
  FUNC_3(VAR_4, VAR_5.pointer, VAR_1);
  FUNC_2(VAR_5.pointer);
 }
}
