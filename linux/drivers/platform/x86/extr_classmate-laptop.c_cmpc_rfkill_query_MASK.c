
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfkill {int dummy; } ;
typedef int acpi_status ;
typedef void* acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (void*,unsigned long long*) ;
 int FUNC_2 (struct rfkill*,int) ;

__attribute__((used)) static void FUNC_3(struct rfkill *VAR_0, void *VAR_1)
{
 acpi_status VAR_2;
 acpi_handle VAR_3;
 unsigned long long VAR_4;
 bool VAR_5;

 VAR_3 = VAR_1;
 VAR_2 = FUNC_1(VAR_3, &VAR_4);
 if (FUNC_0(VAR_2)) {
  VAR_5 = VAR_4 & 1 ? 0 : 1;
  FUNC_2(VAR_0, VAR_5);
 }
}
