
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct atl1c_rfd_ring {scalar_t__ count; scalar_t__ next_to_clean; struct atl1c_buffer* buffer_info; } ;
struct atl1c_recv_ret_status {scalar_t__ word0; } ;
struct atl1c_buffer {int * skb; } ;


 int VAR_0 ;
 int FUNC_0 (struct atl1c_buffer*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_1(struct atl1c_rfd_ring *VAR_3,
 struct atl1c_recv_ret_status *VAR_4, u16 VAR_5)
{
 u16 VAR_6;
 u16 VAR_7;
 struct atl1c_buffer *VAR_8 = VAR_3->buffer_info;

 VAR_7 = (VAR_4->word0 >> VAR_2) &
   VAR_1;
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_8[VAR_7].skb = ((void*)0);
  FUNC_0(&VAR_8[VAR_7],
     VAR_0);
  if (++VAR_7 == VAR_3->count)
   VAR_7 = 0;
 }
 VAR_3->next_to_clean = VAR_7;
}
