
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct rx_return_desc {size_t buf_indx; } ;
struct atl1_rfd_ring {size_t next_to_clean; size_t count; TYPE_1__* buffer_info; } ;
struct atl1_adapter {struct atl1_rfd_ring rfd_ring; } ;
struct TYPE_2__ {scalar_t__ alloced; } ;



__attribute__((used)) static void FUNC_0(struct atl1_adapter *VAR_0,
 struct rx_return_desc *VAR_1, u16 VAR_2)
{
 struct atl1_rfd_ring *VAR_3 = &VAR_0->rfd_ring;

 while (VAR_3->next_to_clean != (VAR_1->buf_indx + VAR_2)) {
  VAR_3->buffer_info[VAR_3->next_to_clean].alloced = 0;
  if (++VAR_3->next_to_clean == VAR_3->count) {
   VAR_3->next_to_clean = 0;
  }
 }
}
