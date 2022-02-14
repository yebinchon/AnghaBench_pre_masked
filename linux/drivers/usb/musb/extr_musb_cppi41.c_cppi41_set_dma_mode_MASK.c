
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct musb {int ctrl_base; } ;
struct TYPE_2__ {struct musb* musb; } ;
struct cppi41_dma_controller {scalar_t__ tx_mode; scalar_t__ rx_mode; TYPE_1__ controller; } ;
struct cppi41_dma_channel {scalar_t__ port_num; scalar_t__ is_tx; struct cppi41_dma_controller* controller; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct cppi41_dma_channel *VAR_2,
  unsigned VAR_3)
{
 struct cppi41_dma_controller *VAR_4 = VAR_2->controller;
 struct musb *VAR_5 = VAR_4->controller.musb;
 u32 VAR_6;
 u32 VAR_7;
 u32 VAR_8;

 if (VAR_2->is_tx)
  VAR_8 = VAR_4->tx_mode;
 else
  VAR_8 = VAR_4->rx_mode;
 VAR_6 = VAR_2->port_num;
 VAR_7 = FUNC_1(VAR_6, VAR_3, VAR_8);

 if (VAR_7 == VAR_8)
  return;
 if (VAR_2->is_tx) {
  VAR_4->tx_mode = VAR_7;
  FUNC_0(VAR_5->ctrl_base, VAR_1, VAR_7);
 } else {
  VAR_4->rx_mode = VAR_7;
  FUNC_0(VAR_5->ctrl_base, VAR_0, VAR_7);
 }
}
