
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acpi_status ;
typedef void* acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (void*,unsigned long long*) ;
 int FUNC_2 (void*,unsigned long long) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, bool VAR_2)
{
 acpi_status VAR_3;
 acpi_handle VAR_4;
 unsigned long long VAR_5;
 bool VAR_6;

 VAR_4 = VAR_1;
 VAR_3 = FUNC_1(VAR_4, &VAR_5);
 if (FUNC_0(VAR_3))
  return -VAR_0;

 VAR_6 = VAR_5 & 1 ? 0 : 1;
 if (VAR_6 != VAR_2) {
  VAR_5 = VAR_2 ? 0 : 1;
  VAR_3 = FUNC_2(VAR_4, VAR_5);
  if (FUNC_0(VAR_3))
   return -VAR_0;
 }
 return 0;
}
