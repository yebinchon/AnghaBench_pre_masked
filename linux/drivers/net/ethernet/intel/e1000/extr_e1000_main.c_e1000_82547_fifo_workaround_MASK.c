
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ len; } ;
struct e1000_adapter {scalar_t__ tx_fifo_size; scalar_t__ tx_fifo_head; scalar_t__ link_duplex; int tx_fifo_stall; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(struct e1000_adapter *VAR_3,
           struct sk_buff *VAR_4)
{
 u32 VAR_5 = VAR_3->tx_fifo_size - VAR_3->tx_fifo_head;
 u32 VAR_6 = VAR_4->len + VAR_1;

 VAR_6 = FUNC_0(VAR_6, VAR_1);

 if (VAR_3->link_duplex != VAR_2)
  goto no_fifo_stall_required;

 if (FUNC_1(&VAR_3->tx_fifo_stall))
  return 1;

 if (VAR_6 >= (VAR_0 + VAR_5)) {
  FUNC_2(&VAR_3->tx_fifo_stall, 1);
  return 1;
 }

no_fifo_stall_required:
 VAR_3->tx_fifo_head += VAR_6;
 if (VAR_3->tx_fifo_head >= VAR_3->tx_fifo_size)
  VAR_3->tx_fifo_head -= VAR_3->tx_fifo_size;
 return 0;
}
