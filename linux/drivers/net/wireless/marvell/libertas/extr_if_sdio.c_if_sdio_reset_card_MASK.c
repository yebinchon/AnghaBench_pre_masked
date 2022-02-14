
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lbs_private {struct if_sdio_card* card; } ;
struct if_sdio_card {TYPE_2__* func; } ;
struct TYPE_4__ {TYPE_1__* card; } ;
struct TYPE_3__ {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct lbs_private *VAR_2)
{
 struct if_sdio_card *VAR_3 = VAR_2->card;

 if (FUNC_1(&VAR_0))
  return;

 VAR_1 = VAR_3->func->card->host;
 FUNC_0(&VAR_0);
}
