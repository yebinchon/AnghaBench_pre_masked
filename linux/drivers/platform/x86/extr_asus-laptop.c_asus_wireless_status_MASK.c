
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asus_laptop {int wireless_status; int handle; int have_rsts; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int *,unsigned long long*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct asus_laptop *VAR_3, int VAR_4)
{
 unsigned long long VAR_5;
 acpi_status VAR_6 = VAR_0;

 if (!VAR_3->have_rsts)
  return (VAR_3->wireless_status & VAR_4) ? 1 : 0;

 VAR_6 = FUNC_1(VAR_3->handle, VAR_2,
       ((void*)0), &VAR_5);
 if (FUNC_0(VAR_6)) {
  FUNC_2("Error reading Wireless status\n");
  return -VAR_1;
 }
 return !!(VAR_5 & VAR_4);
}
