
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mtk_mac {size_t id; struct mtk_eth* hw; } ;
struct mtk_eth {int pending_work; TYPE_2__** netdev; } ;
struct TYPE_3__ {int tx_errors; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 struct mtk_mac* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct mtk_eth*,int ,struct net_device*,char*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 struct mtk_mac *VAR_2 = FUNC_0(VAR_1);
 struct mtk_eth *VAR_3 = VAR_2->hw;

 VAR_3->netdev[VAR_2->id]->stats.tx_errors++;
 FUNC_1(VAR_3, VAR_0, VAR_1,
    "transmit timed out\n");
 FUNC_2(&VAR_3->pending_work);
}
