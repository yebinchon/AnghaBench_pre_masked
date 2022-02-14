
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct i40e_rx_buffer {unsigned int page_offset; int page; } ;
struct i40e_ring {int dummy; } ;
struct TYPE_2__ {int nr_frags; } ;


 unsigned int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct i40e_ring*) ;
 int FUNC_2 (struct i40e_ring*) ;
 int FUNC_3 (struct sk_buff*,int ,int ,unsigned int,unsigned int,unsigned int) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct i40e_ring *VAR_0,
        struct i40e_rx_buffer *VAR_1,
        struct sk_buff *VAR_2,
        unsigned int VAR_3)
{

 unsigned int VAR_4 = FUNC_2(VAR_0) / 2;




 FUNC_3(VAR_2, FUNC_4(VAR_2)->nr_frags, VAR_1->page,
   VAR_1->page_offset, VAR_3, VAR_4);



 VAR_1->page_offset ^= VAR_4;



}
