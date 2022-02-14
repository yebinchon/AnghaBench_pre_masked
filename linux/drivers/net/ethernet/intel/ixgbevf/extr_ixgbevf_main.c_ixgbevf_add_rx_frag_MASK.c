
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ixgbevf_rx_buffer {unsigned int page_offset; int page; } ;
struct ixgbevf_ring {int dummy; } ;
struct TYPE_2__ {int nr_frags; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct ixgbevf_ring*) ;
 scalar_t__ FUNC_2 (struct ixgbevf_ring*) ;
 int FUNC_3 (struct sk_buff*,int ,int ,unsigned int,unsigned int,unsigned int) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct ixgbevf_ring *VAR_1,
    struct ixgbevf_rx_buffer *VAR_2,
    struct sk_buff *VAR_3,
    unsigned int VAR_4)
{

 unsigned int VAR_5 = FUNC_1(VAR_1) / 2;





 FUNC_3(VAR_3, FUNC_4(VAR_3)->nr_frags, VAR_2->page,
   VAR_2->page_offset, VAR_4, VAR_5);

 VAR_2->page_offset ^= VAR_5;



}
