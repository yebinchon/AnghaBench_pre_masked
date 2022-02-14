
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmmac_priv {TYPE_1__* dev; } ;
struct stmmac_packet_attrs {int dst; } ;
struct TYPE_2__ {int phydev; int dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct stmmac_priv*,struct stmmac_packet_attrs*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct stmmac_priv *VAR_1)
{
 struct stmmac_packet_attrs VAR_2 = { };
 int VAR_3;

 if (!VAR_1->dev->phydev)
  return -VAR_0;

 VAR_3 = FUNC_1(VAR_1->dev->phydev, 1);
 if (VAR_3)
  return VAR_3;

 VAR_2.dst = VAR_1->dev->dev_addr;
 VAR_3 = FUNC_0(VAR_1, &VAR_2);

 FUNC_1(VAR_1->dev->phydev, 0);
 return VAR_3;
}
