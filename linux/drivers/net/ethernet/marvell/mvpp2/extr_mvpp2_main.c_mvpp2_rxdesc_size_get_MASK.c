
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int data_size; } ;
struct TYPE_5__ {int data_size; } ;
struct mvpp2_rx_desc {TYPE_3__ pp22; TYPE_2__ pp21; } ;
struct mvpp2_port {TYPE_1__* priv; } ;
struct TYPE_4__ {scalar_t__ hw_version; } ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (int ) ;

__attribute__((used)) static size_t FUNC_1(struct mvpp2_port *VAR_1,
        struct mvpp2_rx_desc *VAR_2)
{
 if (VAR_1->priv->hw_version == VAR_0)
  return FUNC_0(VAR_2->pp21.data_size);
 else
  return FUNC_0(VAR_2->pp22.data_size);
}
