
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phys_addr_t ;
typedef int acpi_status ;
typedef scalar_t__ acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int ,int *,unsigned long long*) ;

phys_addr_t FUNC_2(acpi_handle VAR_2)
{
 acpi_status VAR_3 = VAR_0;
 unsigned long long VAR_4;

 if (VAR_2)
  VAR_3 = FUNC_1(VAR_2, VAR_1,
            ((void*)0), &VAR_4);
 if (FUNC_0(VAR_3))
  return 0;

 return (phys_addr_t)VAR_4;
}
