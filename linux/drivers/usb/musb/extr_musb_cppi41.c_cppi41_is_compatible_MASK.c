
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct musb {int dummy; } ;
struct dma_channel {struct cppi41_dma_channel* private_data; } ;
struct TYPE_4__ {struct musb* musb; } ;
struct cppi41_dma_controller {TYPE_1__ controller; } ;
struct cppi41_dma_channel {scalar_t__ is_tx; TYPE_3__* hw_ep; struct cppi41_dma_controller* controller; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_6__ {TYPE_2__ ep_in; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct musb*) ;

__attribute__((used)) static int FUNC_2(struct dma_channel *VAR_1, u16 VAR_2,
  void *VAR_3, u32 VAR_4)
{
 struct cppi41_dma_channel *VAR_5 = VAR_1->private_data;
 struct cppi41_dma_controller *VAR_6 = VAR_5->controller;
 struct musb *VAR_7 = VAR_6->controller.musb;

 if (FUNC_1(VAR_7)) {
  FUNC_0(1);
  return 1;
 }
 if (VAR_5->hw_ep->ep_in.type != VAR_0)
  return 0;
 if (VAR_5->is_tx)
  return 1;

 return 0;
}
