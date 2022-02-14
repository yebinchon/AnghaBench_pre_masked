
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_data {scalar_t__ error; } ;
struct bcm2835_host {int use_busy; TYPE_1__* mrq; int use_sbc; struct mmc_data* data; int data_complete; } ;
struct TYPE_2__ {scalar_t__ stop; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bcm2835_host*) ;
 int FUNC_2 (struct bcm2835_host*) ;
 scalar_t__ FUNC_3 (struct bcm2835_host*,scalar_t__) ;
 int FUNC_4 (struct bcm2835_host*) ;

__attribute__((used)) static void FUNC_5(struct bcm2835_host *VAR_0)
{
 struct mmc_data *VAR_1;

 FUNC_0(!VAR_0->data_complete);

 VAR_1 = VAR_0->data;
 VAR_0->data = ((void*)0);





 if (VAR_0->mrq->stop && (VAR_1->error || !VAR_0->use_sbc)) {
  if (FUNC_3(VAR_0, VAR_0->mrq->stop)) {

   if (!VAR_0->use_busy)
    FUNC_1(VAR_0);
  }
 } else {
  FUNC_4(VAR_0);
  FUNC_2(VAR_0);
 }
}
