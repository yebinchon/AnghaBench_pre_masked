
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {unsigned int length; scalar_t__ next; } ;
struct TYPE_10__ {unsigned int rx_buf_count; unsigned int tx_buf_count; TYPE_5__* tx_buf_list; scalar_t__ buffer_list_phys; TYPE_3__* tx_buf_list_ex; TYPE_5__* rx_buf_list; TYPE_2__* rx_buf_list_ex; scalar_t__ buffer_list; TYPE_1__** port_array; scalar_t__ memory_base; } ;
struct TYPE_9__ {scalar_t__ phys_entry; } ;
struct TYPE_8__ {scalar_t__ phys_entry; } ;
struct TYPE_7__ {scalar_t__ last_mem_alloc; } ;
typedef TYPE_4__ SLMP_INFO ;
typedef TYPE_5__ SCADESC ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(SLMP_INFO *VAR_2)
{
 unsigned int VAR_3;


 VAR_2->buffer_list = VAR_2->memory_base + VAR_2->port_array[0]->last_mem_alloc;
 VAR_2->buffer_list_phys = VAR_2->port_array[0]->last_mem_alloc;
 VAR_2->port_array[0]->last_mem_alloc += VAR_0;

 FUNC_0(VAR_2->buffer_list, 0, VAR_0);




 VAR_2->rx_buf_list = (SCADESC *)VAR_2->buffer_list;

 VAR_2->tx_buf_list = (SCADESC *)VAR_2->buffer_list;
 VAR_2->tx_buf_list += VAR_2->rx_buf_count;







 for ( VAR_3 = 0; VAR_3 < VAR_2->rx_buf_count; VAR_3++ ) {

  VAR_2->rx_buf_list_ex[VAR_3].phys_entry =
   VAR_2->buffer_list_phys + (VAR_3 * VAR_1);



  VAR_2->rx_buf_list[VAR_3].next = VAR_2->buffer_list_phys;
  if ( VAR_3 < VAR_2->rx_buf_count - 1 )
   VAR_2->rx_buf_list[VAR_3].next += (VAR_3 + 1) * sizeof(SCADESC);

  VAR_2->rx_buf_list[VAR_3].length = VAR_1;
 }

 for ( VAR_3 = 0; VAR_3 < VAR_2->tx_buf_count; VAR_3++ ) {

  VAR_2->tx_buf_list_ex[VAR_3].phys_entry = VAR_2->buffer_list_phys +
   ((VAR_2->rx_buf_count + VAR_3) * sizeof(SCADESC));




  VAR_2->tx_buf_list[VAR_3].next = VAR_2->buffer_list_phys +
   VAR_2->rx_buf_count * sizeof(SCADESC);

  if ( VAR_3 < VAR_2->tx_buf_count - 1 )
   VAR_2->tx_buf_list[VAR_3].next += (VAR_3 + 1) * sizeof(SCADESC);
 }

 return 0;
}
