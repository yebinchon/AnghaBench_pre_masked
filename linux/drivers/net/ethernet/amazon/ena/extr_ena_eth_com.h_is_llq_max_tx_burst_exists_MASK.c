
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ max_entries_in_tx_burst; } ;
struct ena_com_io_sq {scalar_t__ mem_queue_type; TYPE_1__ llq_info; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct ena_com_io_sq *VAR_1)
{
 return (VAR_1->mem_queue_type == VAR_0) &&
        VAR_1->llq_info.max_entries_in_tx_burst > 0;
}
