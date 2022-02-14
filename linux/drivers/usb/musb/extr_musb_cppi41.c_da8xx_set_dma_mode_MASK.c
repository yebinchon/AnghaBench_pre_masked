
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct musb {int ctrl_base; } ;
struct TYPE_2__ {struct musb* musb; } ;
struct cppi41_dma_controller {int tx_mode; TYPE_1__ controller; } ;
struct cppi41_dma_channel {int port_num; int is_tx; struct cppi41_dma_controller* controller; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct cppi41_dma_channel *VAR_1,
  unsigned int VAR_2)
{
 struct cppi41_dma_controller *VAR_3 = VAR_1->controller;
 struct musb *VAR_4 = VAR_3->controller.musb;
 unsigned int VAR_5;
 u32 VAR_6;
 u32 VAR_7;
 u32 VAR_8;

 VAR_8 = VAR_3->tx_mode;
 VAR_6 = VAR_1->port_num;

 VAR_5 = (VAR_6 - 1) * 4;
 if (!VAR_1->is_tx)
  VAR_5 += 16;
 VAR_7 = VAR_8 & ~(3 << VAR_5);
 VAR_7 |= VAR_2 << VAR_5;

 if (VAR_7 == VAR_8)
  return;
 VAR_3->tx_mode = VAR_7;
 FUNC_0(VAR_4->ctrl_base, VAR_0, VAR_7);
}
