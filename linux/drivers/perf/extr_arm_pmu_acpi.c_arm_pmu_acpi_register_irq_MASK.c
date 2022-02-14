
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_madt_generic_interrupt {int performance_interrupt; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 struct acpi_madt_generic_interrupt* FUNC_1 (int) ;
 int FUNC_2 (int *,int,int,int ) ;

__attribute__((used)) static int FUNC_3(int VAR_5)
{
 struct acpi_madt_generic_interrupt *VAR_6;
 int VAR_7, VAR_8;

 VAR_6 = FUNC_1(VAR_5);
 if (FUNC_0(!VAR_6))
  return -VAR_4;

 VAR_7 = VAR_6->performance_interrupt;
 if (!VAR_7)
  return 0;

 if (VAR_6->flags & VAR_3)
  VAR_8 = VAR_1;
 else
  VAR_8 = VAR_2;
 return FUNC_2(((void*)0), VAR_7, VAR_8, VAR_0);
}
