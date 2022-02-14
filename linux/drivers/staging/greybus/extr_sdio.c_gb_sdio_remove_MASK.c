
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int dummy; } ;
struct gbphy_device {int dummy; } ;
struct gb_sdio_host {int removed; int mrq_workqueue; int lock; struct mmc_host* mmc; struct gb_connection* connection; } ;
struct gb_connection {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct gb_connection*) ;
 int FUNC_3 (struct gb_connection*) ;
 int FUNC_4 (struct gb_connection*) ;
 int FUNC_5 (struct gb_connection*,int *) ;
 struct gb_sdio_host* FUNC_6 (struct gbphy_device*) ;
 int FUNC_7 (struct gbphy_device*) ;
 int FUNC_8 (struct gbphy_device*) ;
 int FUNC_9 (struct mmc_host*) ;
 int FUNC_10 (struct mmc_host*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct gbphy_device *VAR_0)
{
 struct gb_sdio_host *VAR_1 = FUNC_6(VAR_0);
 struct gb_connection *VAR_2 = VAR_1->connection;
 struct mmc_host *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_8(VAR_0);
 if (VAR_4)
  FUNC_7(VAR_0);

 FUNC_11(&VAR_1->lock);
 VAR_1->removed = 1;
 VAR_3 = VAR_1->mmc;
 FUNC_5(VAR_2, ((void*)0));
 FUNC_12(&VAR_1->lock);

 FUNC_1(VAR_1->mrq_workqueue);
 FUNC_0(VAR_1->mrq_workqueue);
 FUNC_4(VAR_2);
 FUNC_10(VAR_3);
 FUNC_3(VAR_2);
 FUNC_2(VAR_2);
 FUNC_9(VAR_3);
}
