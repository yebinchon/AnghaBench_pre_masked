
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ebook_switch {int input; } ;
struct acpi_device {int handle; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ebook_switch* FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (int ,char*,int *,unsigned long long*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct acpi_device *VAR_2)
{
 struct ebook_switch *VAR_3 = FUNC_1(VAR_2);
 unsigned long long VAR_4;
 acpi_status VAR_5;

 VAR_5 = FUNC_2(VAR_2->handle, "EBK", ((void*)0), &VAR_4);
 if (FUNC_0(VAR_5))
  return -VAR_0;


 FUNC_3(VAR_3->input, VAR_1, !VAR_4);
 FUNC_4(VAR_3->input);
 return 0;
}
