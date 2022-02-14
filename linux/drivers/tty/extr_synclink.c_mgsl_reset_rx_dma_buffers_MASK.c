
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mgsl_struct {unsigned int rx_buffer_count; scalar_t__ current_rx_buffer; TYPE_1__* rx_buffer_list; } ;
struct TYPE_2__ {int count; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static void FUNC_0( struct mgsl_struct *VAR_1 )
{
 unsigned int VAR_2;

 for ( VAR_2 = 0; VAR_2 < VAR_1->rx_buffer_count; VAR_2++ ) {
  *((unsigned long *)&(VAR_1->rx_buffer_list[VAR_2].count)) = VAR_0;


 }

 VAR_1->current_rx_buffer = 0;

}
