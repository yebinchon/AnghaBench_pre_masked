
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int dummy; } ;
struct lbs_private {scalar_t__ fw_ready; } ;
struct if_sdio_card {struct lbs_private* priv; struct sdio_func* func; } ;


 int FUNC_0 (struct sdio_func*) ;
 int FUNC_1 (struct sdio_func*) ;
 int FUNC_2 (struct sdio_func*) ;
 int FUNC_3 (struct sdio_func*) ;

__attribute__((used)) static int FUNC_4(struct if_sdio_card *VAR_0)
{
 struct sdio_func *VAR_1 = VAR_0->func;
 struct lbs_private *VAR_2 = VAR_0->priv;

 VAR_2->fw_ready = 0;

 FUNC_0(VAR_1);
 FUNC_3(VAR_1);
 FUNC_1(VAR_1);
 FUNC_2(VAR_1);
 return 0;
}
