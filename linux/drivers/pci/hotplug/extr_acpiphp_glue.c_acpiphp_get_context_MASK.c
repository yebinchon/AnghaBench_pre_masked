
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpiphp_context {int refcount; } ;
struct acpi_device {int hp; } ;


 struct acpiphp_context* FUNC_0 (int ) ;

__attribute__((used)) static struct acpiphp_context *FUNC_1(struct acpi_device *VAR_0)
{
 struct acpiphp_context *VAR_1;

 if (!VAR_0->hp)
  return ((void*)0);

 VAR_1 = FUNC_0(VAR_0->hp);
 VAR_1->refcount++;
 return VAR_1;
}
