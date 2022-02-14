
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ena_eth_io_rx_cdesc_base {int status; } ;
struct TYPE_2__ {scalar_t__ virt_addr; } ;
struct ena_com_io_cq {int head; int q_depth; int phase; int cdesc_entry_size_in_bytes; TYPE_1__ cdesc_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static struct ena_eth_io_rx_cdesc_base *FUNC_2(
 struct ena_com_io_cq *VAR_2)
{
 struct ena_eth_io_rx_cdesc_base *VAR_3;
 u16 VAR_4, VAR_5;
 u16 VAR_6;

 VAR_5 = VAR_2->head & (VAR_2->q_depth - 1);
 VAR_4 = VAR_2->phase;

 VAR_3 = (struct ena_eth_io_rx_cdesc_base *)(VAR_2->cdesc_addr.virt_addr
   + (VAR_5 * VAR_2->cdesc_entry_size_in_bytes));

 VAR_6 = (FUNC_0(VAR_3->status) & VAR_0) >>
   VAR_1;

 if (VAR_6 != VAR_4)
  return ((void*)0);




 FUNC_1();

 return VAR_3;
}
