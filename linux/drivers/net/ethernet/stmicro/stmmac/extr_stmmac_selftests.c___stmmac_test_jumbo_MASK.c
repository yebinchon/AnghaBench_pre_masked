
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct stmmac_priv {int dma_buf_sz; TYPE_1__* dev; } ;
struct stmmac_packet_attrs {int queue_mapping; scalar_t__ max_size; int dst; } ;
struct TYPE_2__ {int dev_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct stmmac_priv*,struct stmmac_packet_attrs*) ;

__attribute__((used)) static int FUNC_1(struct stmmac_priv *VAR_1, u16 VAR_2)
{
 struct stmmac_packet_attrs VAR_3 = { };
 int VAR_4 = VAR_1->dma_buf_sz;

 VAR_3.dst = VAR_1->dev->dev_addr;
 VAR_3.max_size = VAR_4 - VAR_0;
 VAR_3.queue_mapping = VAR_2;

 return FUNC_0(VAR_1, &VAR_3);
}
