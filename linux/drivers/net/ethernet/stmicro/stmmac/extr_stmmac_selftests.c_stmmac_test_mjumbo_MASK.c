
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stmmac_priv {TYPE_1__* plat; } ;
struct TYPE_2__ {int tx_queues_to_use; } ;


 int VAR_0 ;
 int FUNC_0 (struct stmmac_priv*,int) ;

__attribute__((used)) static int FUNC_1(struct stmmac_priv *VAR_1)
{
 u32 VAR_2, VAR_3 = VAR_1->plat->tx_queues_to_use;
 int VAR_4;

 if (VAR_3 <= 1)
  return -VAR_0;

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  VAR_4 = FUNC_0(VAR_1, VAR_2);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}
