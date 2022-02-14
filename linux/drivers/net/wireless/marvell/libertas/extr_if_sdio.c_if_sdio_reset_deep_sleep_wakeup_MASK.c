
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {int dev; struct if_sdio_card* card; } ;
struct if_sdio_card {int func; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct lbs_private *VAR_1)
{
 struct if_sdio_card *VAR_2 = VAR_1->card;
 int VAR_3 = -1;

 FUNC_1(VAR_2->func);

 FUNC_3(VAR_2->func, 0, VAR_0, &VAR_3);
 if (VAR_3)
  FUNC_0(VAR_1->dev, "sdio_writeb failed!\n");

 FUNC_2(VAR_2->func);

 return VAR_3;

}
