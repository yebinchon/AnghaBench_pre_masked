
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct net_device {int dummy; } ;
struct ionic_lif {int dummy; } ;
struct ethtool_stats {int n_stats; } ;
struct TYPE_2__ {int (* get_values ) (struct ionic_lif*,int **) ;} ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 struct ionic_lif* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ionic_lif*,int **) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2,
       struct ethtool_stats *VAR_3, u64 *VAR_4)
{
 struct ionic_lif *VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_1(VAR_2);

 FUNC_0(VAR_4, 0, VAR_3->n_stats * sizeof(*VAR_4));
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  VAR_1[VAR_6].get_values(VAR_5, &VAR_4);
}
