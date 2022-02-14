
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ebook_switch {int input; } ;
struct acpi_device {int dummy; } ;


 struct ebook_switch* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ebook_switch*) ;

__attribute__((used)) static int FUNC_3(struct acpi_device *VAR_0)
{
 struct ebook_switch *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->input);
 FUNC_2(VAR_1);
 return 0;
}
