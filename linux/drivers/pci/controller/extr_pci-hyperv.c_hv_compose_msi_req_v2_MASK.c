
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int vector_count; int processor_count; int * processor_array; int delivery_mode; int vector; } ;
struct TYPE_6__ {int slot; } ;
struct TYPE_5__ {int type; } ;
struct pci_create_interrupt2 {TYPE_1__ int_desc; TYPE_3__ wslot; TYPE_2__ message_type; } ;
struct cpumask {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpumask*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;

__attribute__((used)) static u32 FUNC_2(
 struct pci_create_interrupt2 *VAR_3, struct cpumask *VAR_4,
 u32 VAR_5, u8 VAR_6)
{
 int VAR_7;

 VAR_3->message_type.type = VAR_0;
 VAR_3->wslot.slot = VAR_5;
 VAR_3->int_desc.vector = VAR_6;
 VAR_3->int_desc.vector_count = 1;
 VAR_3->int_desc.delivery_mode = VAR_2;





 VAR_7 = FUNC_0(VAR_4, VAR_1);
 VAR_3->int_desc.processor_array[0] =
  FUNC_1(VAR_7);
 VAR_3->int_desc.processor_count = 1;

 return sizeof(*VAR_3);
}
