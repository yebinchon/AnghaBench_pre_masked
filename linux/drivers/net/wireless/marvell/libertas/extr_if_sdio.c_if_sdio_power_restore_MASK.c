
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbs_private {int fw_ready; struct if_sdio_card* card; } ;
struct if_sdio_card {int pwron_waitq; TYPE_1__* func; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct if_sdio_card*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct lbs_private *VAR_0)
{
 struct if_sdio_card *VAR_1 = VAR_0->card;
 int VAR_2;


 FUNC_1(&VAR_1->func->dev);

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_2(VAR_1->pwron_waitq, VAR_0->fw_ready);
 return 0;
}
