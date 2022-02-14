
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmmac_priv {TYPE_1__* dev; } ;
struct stmmac_packet_attrs {int dst; } ;
struct TYPE_2__ {int dev_addr; } ;


 int FUNC_0 (struct stmmac_priv*,struct stmmac_packet_attrs*) ;

__attribute__((used)) static int FUNC_1(struct stmmac_priv *VAR_0)
{
 struct stmmac_packet_attrs VAR_1 = { };

 VAR_1.dst = VAR_0->dev->dev_addr;
 return FUNC_0(VAR_0, &VAR_1);
}
