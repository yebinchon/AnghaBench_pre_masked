
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int buf_dma_addr_ptp; } ;
struct TYPE_5__ {int buf_dma_addr; } ;
struct mvpp2_tx_desc {TYPE_3__ pp22; TYPE_2__ pp21; } ;
struct mvpp2_port {TYPE_1__* priv; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {scalar_t__ hw_version; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static dma_addr_t FUNC_2(struct mvpp2_port *VAR_2,
         struct mvpp2_tx_desc *VAR_3)
{
 if (VAR_2->priv->hw_version == VAR_0)
  return FUNC_0(VAR_3->pp21.buf_dma_addr);
 else
  return FUNC_1(VAR_3->pp22.buf_dma_addr_ptp) &
         VAR_1;
}
