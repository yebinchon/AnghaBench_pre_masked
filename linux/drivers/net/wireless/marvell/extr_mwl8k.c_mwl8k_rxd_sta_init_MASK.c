
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwl8k_rxd_sta {int rx_ctrl; int next_rxd_phys_addr; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, dma_addr_t VAR_2)
{
 struct mwl8k_rxd_sta *VAR_3 = VAR_1;

 VAR_3->next_rxd_phys_addr = FUNC_0(VAR_2);
 VAR_3->rx_ctrl = VAR_0;
}
