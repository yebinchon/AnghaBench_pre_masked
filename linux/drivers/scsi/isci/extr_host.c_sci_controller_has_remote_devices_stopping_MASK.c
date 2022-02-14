
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct isci_host {size_t remote_node_entries; TYPE_2__** device_table; } ;
struct TYPE_3__ {scalar_t__ current_state_id; } ;
struct TYPE_4__ {TYPE_1__ sm; } ;


 scalar_t__ VAR_0 ;

bool FUNC_0(struct isci_host *VAR_1)
{
 u32 VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->remote_node_entries; VAR_2++) {
  if ((VAR_1->device_table[VAR_2] != ((void*)0)) &&
     (VAR_1->device_table[VAR_2]->sm.current_state_id == VAR_0))
   return 1;
 }

 return 0;
}
