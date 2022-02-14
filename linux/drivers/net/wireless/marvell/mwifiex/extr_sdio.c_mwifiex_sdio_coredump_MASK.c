
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_mmc_card {int work; int work_flags; } ;
struct sdio_func {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct sdio_func* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 struct sdio_mmc_card* FUNC_2 (struct sdio_func*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_1)
{
 struct sdio_func *VAR_2 = FUNC_0(VAR_1);
 struct sdio_mmc_card *VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 if (!FUNC_3(VAR_0,
         &VAR_3->work_flags))
  FUNC_1(&VAR_3->work);
}
