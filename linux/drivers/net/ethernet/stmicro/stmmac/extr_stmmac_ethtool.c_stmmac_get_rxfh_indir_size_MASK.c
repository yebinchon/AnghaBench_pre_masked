
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int table; } ;
struct stmmac_priv {TYPE_1__ rss; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct stmmac_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_2(struct net_device *VAR_0)
{
 struct stmmac_priv *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1->rss.table);
}
