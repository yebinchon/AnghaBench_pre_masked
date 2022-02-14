
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int low; } ;
union MEGASAS_REQUEST_DESCRIPTOR_UNION {TYPE_1__ u; } ;
struct megasas_instance {TYPE_2__* reg_set; scalar_t__ atomic_desc_support; } ;
struct TYPE_4__ {int inbound_single_queue_port; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct megasas_instance*,union MEGASAS_REQUEST_DESCRIPTOR_UNION*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct megasas_instance *VAR_0,
  union MEGASAS_REQUEST_DESCRIPTOR_UNION *VAR_1)
{
 if (VAR_0->atomic_desc_support)
  FUNC_2(FUNC_0(VAR_1->u.low),
   &VAR_0->reg_set->inbound_single_queue_port);
 else
  FUNC_1(VAR_0, VAR_1);
}
