
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct atl1c_rrd_ring {scalar_t__ next_to_clean; scalar_t__ count; } ;
struct atl1c_recv_ret_status {int word3; } ;


 struct atl1c_recv_ret_status* FUNC_0 (struct atl1c_rrd_ring*,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct atl1c_rrd_ring *VAR_1,
   struct atl1c_recv_ret_status *VAR_2, u16 VAR_3)
{
 u16 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++, VAR_2 = FUNC_0(VAR_1,
     VAR_1->next_to_clean)) {
  VAR_2->word3 &= ~VAR_0;
  if (++VAR_1->next_to_clean == VAR_1->count)
   VAR_1->next_to_clean = 0;
 }
}
