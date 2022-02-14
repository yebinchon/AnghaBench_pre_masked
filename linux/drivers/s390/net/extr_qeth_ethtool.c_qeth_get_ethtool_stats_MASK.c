
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {unsigned int no_out_queues; TYPE_1__** out_qs; } ;
struct qeth_card {TYPE_2__ qdio; int stats; } ;
struct net_device {struct qeth_card* ml_priv; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_3__ {int stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int **,int *,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_4,
       struct ethtool_stats *VAR_5, u64 *VAR_6)
{
 struct qeth_card *VAR_7 = VAR_4->ml_priv;
 unsigned int VAR_8;

 FUNC_0(&VAR_6, &VAR_7->stats, VAR_2, VAR_0);
 for (VAR_8 = 0; VAR_8 < VAR_7->qdio.no_out_queues; VAR_8++)
  FUNC_0(&VAR_6, &VAR_7->qdio.out_qs[VAR_8]->stats,
       VAR_3, VAR_1);
}
