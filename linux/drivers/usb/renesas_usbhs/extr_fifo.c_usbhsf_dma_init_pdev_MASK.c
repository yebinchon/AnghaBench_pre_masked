
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_fifo {int rx_slave; void* rx_chan; int tx_slave; void* tx_chan; } ;
typedef int dma_cap_mask_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ,int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct usbhs_fifo *VAR_2)
{
 dma_cap_mask_t VAR_3;

 FUNC_1(VAR_3);
 FUNC_0(VAR_0, VAR_3);
 VAR_2->tx_chan = FUNC_2(VAR_3, VAR_1,
         &VAR_2->tx_slave);

 FUNC_1(VAR_3);
 FUNC_0(VAR_0, VAR_3);
 VAR_2->rx_chan = FUNC_2(VAR_3, VAR_1,
         &VAR_2->rx_slave);
}
