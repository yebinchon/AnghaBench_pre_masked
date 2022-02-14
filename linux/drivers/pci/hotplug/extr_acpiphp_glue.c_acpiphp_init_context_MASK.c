
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fixup; int notify; } ;
struct acpiphp_context {int refcount; TYPE_1__ hp; } ;
struct acpi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_device*,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct acpiphp_context* FUNC_1 (int,int ) ;

__attribute__((used)) static struct acpiphp_context *FUNC_2(struct acpi_device *VAR_3)
{
 struct acpiphp_context *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->refcount = 1;
 VAR_4->hp.notify = VAR_1;
 VAR_4->hp.fixup = VAR_2;
 FUNC_0(VAR_3, &VAR_4->hp);
 return VAR_4;
}
