
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct int_ch_state {scalar_t__ service_counter; scalar_t__ request_counter; scalar_t__ level; } ;
struct dim_channel {int done_sw_buffers_number; struct int_ch_state state; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u8 FUNC_0(struct dim_channel *VAR_2)
{
 struct int_ch_state *const VAR_3 = &VAR_2->state;

 if (VAR_3->service_counter != VAR_3->request_counter) {
  VAR_3->service_counter++;
  if (VAR_3->level == 0)
   return VAR_0;

  --VAR_3->level;
  VAR_2->done_sw_buffers_number++;
 }

 return VAR_1;
}
