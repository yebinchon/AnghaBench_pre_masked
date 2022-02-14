
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct TYPE_2__ {int * dma_phys; } ;
struct hisi_femac_priv {int dev; TYPE_1__ txq; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct hisi_femac_priv *VAR_1,
        struct sk_buff *VAR_2, unsigned int VAR_3)
{
 dma_addr_t VAR_4;

 VAR_4 = VAR_1->txq.dma_phys[VAR_3];
 FUNC_0(VAR_1->dev, VAR_4, VAR_2->len, VAR_0);
}
