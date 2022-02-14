
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_rx_buffer {unsigned int page_offset; } ;
struct ixgbe_ring {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct ixgbe_ring*) ;
 scalar_t__ FUNC_2 (struct ixgbe_ring*) ;

__attribute__((used)) static void FUNC_3(struct ixgbe_ring *VAR_1,
     struct ixgbe_rx_buffer *VAR_2,
     unsigned int VAR_3)
{

 unsigned int VAR_4 = FUNC_1(VAR_1) / 2;

 VAR_2->page_offset ^= VAR_4;







}
