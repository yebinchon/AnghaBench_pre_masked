
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_4__ {int key; int * table; } ;
struct stmmac_priv {TYPE_1__* plat; TYPE_2__ rss; int hw; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int rx_queues_to_use; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 int FUNC_1 (int ,scalar_t__ const*,int) ;
 struct stmmac_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct stmmac_priv*,int ,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3, const u32 *VAR_4,
      const u8 *VAR_5, const u8 VAR_6)
{
 struct stmmac_priv *VAR_7 = FUNC_2(VAR_3);
 int VAR_8;

 if ((VAR_6 != VAR_1) && (VAR_6 != VAR_2))
  return -VAR_0;

 if (VAR_4) {
  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_7->rss.table); VAR_8++)
   VAR_7->rss.table[VAR_8] = VAR_4[VAR_8];
 }

 if (VAR_5)
  FUNC_1(VAR_7->rss.key, VAR_5, sizeof(VAR_7->rss.key));

 return FUNC_3(VAR_7, VAR_7->hw, &VAR_7->rss,
        VAR_7->plat->rx_queues_to_use);
}
