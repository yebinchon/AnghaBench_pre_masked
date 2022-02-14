
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tmio_mmc_host {int (* init_tuning ) (struct tmio_mmc_host*) ;int (* select_tuning ) (struct tmio_mmc_host*) ;int tap_num; TYPE_1__* pdev; int taps; int (* prepare_tuning ) (struct tmio_mmc_host*,int) ;} ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 struct tmio_mmc_host* FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*,int ,int *) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct tmio_mmc_host*) ;
 int FUNC_7 (struct tmio_mmc_host*,int) ;
 int FUNC_8 (struct tmio_mmc_host*) ;
 int FUNC_9 (struct mmc_host*) ;

__attribute__((used)) static int FUNC_10(struct mmc_host *VAR_1, u32 VAR_2)
{
 struct tmio_mmc_host *VAR_3 = FUNC_3(VAR_1);
 int VAR_4, VAR_5 = 0;

 if (!VAR_3->init_tuning || !VAR_3->select_tuning)

  goto out;

 VAR_3->tap_num = VAR_3->init_tuning(VAR_3);
 if (!VAR_3->tap_num)

  goto out;

 if (VAR_3->tap_num * 2 >= sizeof(VAR_3->taps) * VAR_0) {
  FUNC_2(&VAR_3->pdev->dev,
   "Too many taps, skipping tuning. Please consider updating size of taps field of tmio_mmc_host\n");
  goto out;
 }

 FUNC_0(VAR_3->taps, VAR_3->tap_num * 2);


 for (VAR_4 = 0; VAR_4 < 2 * VAR_3->tap_num; VAR_4++) {
  if (VAR_3->prepare_tuning)
   VAR_3->prepare_tuning(VAR_3, VAR_4 % VAR_3->tap_num);

  VAR_5 = FUNC_4(VAR_1, VAR_2, ((void*)0));
  if (VAR_5 == 0)
   FUNC_5(VAR_4, VAR_3->taps);
 }

 VAR_5 = VAR_3->select_tuning(VAR_3);

out:
 if (VAR_5 < 0) {
  FUNC_1(&VAR_3->pdev->dev, "Tuning procedure failed\n");
  FUNC_9(VAR_1);
 }

 return VAR_5;
}
