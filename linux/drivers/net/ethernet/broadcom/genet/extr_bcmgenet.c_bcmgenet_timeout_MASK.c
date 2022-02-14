
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int tx_errors; } ;
struct net_device {TYPE_2__ stats; } ;
struct bcmgenet_priv {TYPE_1__* hw_params; int * tx_rings; } ;
struct TYPE_3__ {unsigned int tx_queues; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct bcmgenet_priv*,int,int ) ;
 int FUNC_2 (struct bcmgenet_priv*,int,int ) ;
 int FUNC_3 (struct net_device*) ;
 struct bcmgenet_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct bcmgenet_priv*,int ,struct net_device*,char*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_4)
{
 struct bcmgenet_priv *VAR_5 = FUNC_4(VAR_4);
 u32 VAR_6 = 0;
 u32 VAR_7 = 0;
 unsigned int VAR_8;

 FUNC_5(VAR_5, VAR_3, VAR_4, "bcmgenet_timeout\n");

 for (VAR_8 = 0; VAR_8 < VAR_5->hw_params->tx_queues; VAR_8++)
  FUNC_0(&VAR_5->tx_rings[VAR_8]);
 FUNC_0(&VAR_5->tx_rings[VAR_0]);

 FUNC_3(VAR_4);

 for (VAR_8 = 0; VAR_8 < VAR_5->hw_params->tx_queues; VAR_8++)
  VAR_7 |= (1 << VAR_8);

 VAR_6 = VAR_2;


 FUNC_1(VAR_5, VAR_6, VAR_1);
 FUNC_2(VAR_5, VAR_7, VAR_1);

 FUNC_6(VAR_4);

 VAR_4->stats.tx_errors++;

 FUNC_7(VAR_4);
}
