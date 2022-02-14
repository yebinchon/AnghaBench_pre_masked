
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int enable; } ;
struct TYPE_4__ {int rssen; } ;
struct stmmac_priv {TYPE_3__* dev; TYPE_2__ rss; TYPE_1__ dma_cap; } ;
struct stmmac_packet_attrs {int exp_hash; int sport; int dport; int dst; } ;
struct TYPE_6__ {int dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct stmmac_priv*,struct stmmac_packet_attrs*) ;

__attribute__((used)) static int FUNC_1(struct stmmac_priv *VAR_1)
{
 struct stmmac_packet_attrs VAR_2 = { };

 if (!VAR_1->dma_cap.rssen || !VAR_1->rss.enable)
  return -VAR_0;

 VAR_2.dst = VAR_1->dev->dev_addr;
 VAR_2.exp_hash = 1;
 VAR_2.sport = 0x321;
 VAR_2.dport = 0x123;

 return FUNC_0(VAR_1, &VAR_2);
}
