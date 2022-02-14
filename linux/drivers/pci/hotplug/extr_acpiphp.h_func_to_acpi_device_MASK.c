
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct acpiphp_func {int dummy; } ;
struct acpi_device {int dummy; } ;
struct TYPE_3__ {struct acpi_device* self; } ;
struct TYPE_4__ {TYPE_1__ hp; } ;


 TYPE_2__* FUNC_0 (struct acpiphp_func*) ;

__attribute__((used)) static inline struct acpi_device *FUNC_1(struct acpiphp_func *VAR_0)
{
 return FUNC_0(VAR_0)->hp.self;
}
