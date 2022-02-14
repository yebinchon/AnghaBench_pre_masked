
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct mvpp2_port {int* rss_ctx; int dev; TYPE_1__** rfs_rules; struct mvpp2* priv; } ;
struct mvpp2 {int ** rss_tables; } ;
struct TYPE_4__ {int flow_type; int location; } ;
struct ethtool_rxnfc {size_t rss_context; TYPE_2__ fs; } ;
struct TYPE_3__ {struct ethtool_rxnfc rxnfc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mvpp2_port*,size_t) ;
 int FUNC_2 (struct mvpp2_port*,struct ethtool_rxnfc*) ;
 int FUNC_3 (int ,char*,int ) ;

int FUNC_4(struct mvpp2_port *VAR_4, u32 VAR_5)
{
 struct mvpp2 *VAR_6 = VAR_4->priv;
 struct ethtool_rxnfc *VAR_7;
 int VAR_8, VAR_9, VAR_10;

 VAR_9 = FUNC_1(VAR_4, VAR_5);

 if (VAR_9 < 0 || VAR_9 >= VAR_2)
  return -VAR_0;


 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  if (!VAR_4->rfs_rules[VAR_8])
   continue;

  VAR_7 = &VAR_4->rfs_rules[VAR_8]->rxnfc;
  if (!(VAR_7->fs.flow_type & VAR_1) ||
      VAR_7->rss_context != VAR_5)
   continue;

  VAR_10 = FUNC_2(VAR_4, VAR_7);
  if (VAR_10) {
   FUNC_3(VAR_4->dev,
        "couldn't remove classification rule %d associated to this context",
        VAR_7->fs.location);
  }
 }

 FUNC_0(VAR_6->rss_tables[VAR_9]);

 VAR_6->rss_tables[VAR_9] = ((void*)0);
 VAR_4->rss_ctx[VAR_5] = -1;

 return 0;
}
