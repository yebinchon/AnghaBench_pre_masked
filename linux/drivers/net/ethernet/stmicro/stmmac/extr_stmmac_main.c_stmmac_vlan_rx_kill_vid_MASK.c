
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int vlhash; } ;
struct stmmac_priv {int active_vlans; TYPE_1__ dma_cap; } ;
struct net_device {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct stmmac_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct stmmac_priv*,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, __be16 VAR_3, u16 VAR_4)
{
 struct stmmac_priv *VAR_5 = FUNC_2(VAR_2);
 bool VAR_6 = 0;

 if (!VAR_5->dma_cap.vlhash)
  return -VAR_0;
 if (FUNC_0(VAR_3) == VAR_1)
  VAR_6 = 1;

 FUNC_1(VAR_4, VAR_5->active_vlans);
 return FUNC_3(VAR_5, VAR_6);
}
