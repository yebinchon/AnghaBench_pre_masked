
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_6__ {int vector_count; int cpu_mask; int delivery_mode; int vector; } ;
struct TYPE_5__ {int slot; } ;
struct TYPE_4__ {int type; } ;
struct pci_create_interrupt {TYPE_3__ int_desc; TYPE_2__ wslot; TYPE_1__ message_type; } ;
struct cpumask {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u32 FUNC_0(
 struct pci_create_interrupt *VAR_3, struct cpumask *VAR_4,
 u32 VAR_5, u8 VAR_6)
{
 VAR_3->message_type.type = VAR_1;
 VAR_3->wslot.slot = VAR_5;
 VAR_3->int_desc.vector = VAR_6;
 VAR_3->int_desc.vector_count = 1;
 VAR_3->int_desc.delivery_mode = VAR_2;





 VAR_3->int_desc.cpu_mask = VAR_0;

 return sizeof(*VAR_3);
}
