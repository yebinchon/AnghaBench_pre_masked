
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_mmc_host {int mmc; int lock; struct mmc_request* manual_stop_mrq; } ;
struct mmc_request {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct mmc_request*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct sunxi_mmc_host*,struct mmc_request*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_1, void *VAR_2)
{
 struct sunxi_mmc_host *VAR_3 = VAR_2;
 struct mmc_request *VAR_4;
 unsigned long VAR_5;

 FUNC_3(&VAR_3->lock, VAR_5);
 VAR_4 = VAR_3->manual_stop_mrq;
 FUNC_4(&VAR_3->lock, VAR_5);

 if (!VAR_4) {
  FUNC_0(FUNC_1(VAR_3->mmc), "no request for manual stop\n");
  return VAR_0;
 }

 FUNC_0(FUNC_1(VAR_3->mmc), "data error, sending stop command\n");
 FUNC_5(VAR_3, VAR_4);

 FUNC_3(&VAR_3->lock, VAR_5);
 VAR_3->manual_stop_mrq = ((void*)0);
 FUNC_4(&VAR_3->lock, VAR_5);

 FUNC_2(VAR_3->mmc, VAR_4);

 return VAR_0;
}
