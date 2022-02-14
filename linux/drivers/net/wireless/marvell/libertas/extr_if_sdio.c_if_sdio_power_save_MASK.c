
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbs_private {struct if_sdio_card* card; } ;
struct if_sdio_card {TYPE_1__* func; int workqueue; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct if_sdio_card*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct lbs_private *VAR_0)
{
 struct if_sdio_card *VAR_1 = VAR_0->card;
 int VAR_2;

 FUNC_0(VAR_1->workqueue);

 VAR_2 = FUNC_1(VAR_1);


 FUNC_2(&VAR_1->func->dev);

 return VAR_2;
}
