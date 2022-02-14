
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* parent; } ;
struct acpiphp_context {TYPE_1__ func; } ;
struct acpi_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ is_going_away; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 struct acpiphp_context* FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (struct acpiphp_context*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static struct acpiphp_context *FUNC_5(struct acpi_device *VAR_0)
{
 struct acpiphp_context *VAR_1;

 FUNC_0();
 VAR_1 = FUNC_2(VAR_0);
 if (!VAR_1 || VAR_1->func.parent->is_going_away) {
  FUNC_1();
  return ((void*)0);
 }
 FUNC_4(VAR_1->func.parent);
 FUNC_3(VAR_1);
 FUNC_1();
 return VAR_1;
}
