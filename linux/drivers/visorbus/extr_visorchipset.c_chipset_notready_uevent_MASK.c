
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ response_expected; } ;
struct controlvm_message_header {TYPE_3__ flags; } ;
struct TYPE_8__ {TYPE_2__* acpi_device; } ;
struct TYPE_5__ {int kobj; } ;
struct TYPE_6__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_0 (struct controlvm_message_header*,int,int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct controlvm_message_header *VAR_2)
{
 int VAR_3 = FUNC_1(&VAR_1->acpi_device->dev.kobj,
     VAR_0);

 if (VAR_2->flags.response_expected)
  FUNC_0(VAR_2, VAR_3, ((void*)0));
 return VAR_3;
}
