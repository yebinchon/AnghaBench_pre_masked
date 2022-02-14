
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ionic_rx_filter {int by_hash; int by_id; } ;
struct ionic_lif {TYPE_1__* ionic; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int FUNC_0 (struct device*,struct ionic_rx_filter*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ionic_lif *VAR_0, struct ionic_rx_filter *VAR_1)
{
 struct device *VAR_2 = VAR_0->ionic->dev;

 FUNC_1(&VAR_1->by_id);
 FUNC_1(&VAR_1->by_hash);
 FUNC_0(VAR_2, VAR_1);
}
