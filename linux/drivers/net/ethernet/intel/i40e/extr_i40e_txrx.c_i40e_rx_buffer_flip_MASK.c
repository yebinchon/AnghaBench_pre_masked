
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_rx_buffer {unsigned int page_offset; } ;
struct i40e_ring {int dummy; } ;


 unsigned int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct i40e_ring*) ;
 int FUNC_2 (struct i40e_ring*) ;

__attribute__((used)) static void FUNC_3(struct i40e_ring *VAR_0,
    struct i40e_rx_buffer *VAR_1,
    unsigned int VAR_2)
{

 unsigned int VAR_3 = FUNC_2(VAR_0) / 2;

 VAR_1->page_offset ^= VAR_3;





}
