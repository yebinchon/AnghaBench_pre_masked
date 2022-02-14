
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mmc_data {int stop; int mrq; TYPE_2__* sg; } ;
struct goldfish_mmc_host {int * mrq; scalar_t__ sg_len; TYPE_1__* data; int virt_base; scalar_t__ dma_in_use; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_5__ {scalar_t__ length; } ;
struct TYPE_4__ {int bytes_xfered; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,scalar_t__,int) ;
 int FUNC_1 (struct goldfish_mmc_host*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct goldfish_mmc_host*) ;
 int FUNC_4 (struct mmc_data*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_2__*,int,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct goldfish_mmc_host *VAR_1,
       struct mmc_data *VAR_2)
{
 if (VAR_1->dma_in_use) {
  enum dma_data_direction VAR_3;

  VAR_3 = FUNC_4(VAR_2);

  if (VAR_3 == VAR_0) {




   FUNC_6(VAR_2->sg, 1, VAR_1->virt_base,
     VAR_2->sg->length);
  }
  VAR_1->data->bytes_xfered += VAR_2->sg->length;
  FUNC_0(FUNC_2(FUNC_3(VAR_1)), VAR_2->sg,
        VAR_1->sg_len, VAR_3);
 }

 VAR_1->data = ((void*)0);
 VAR_1->sg_len = 0;







 if (!VAR_2->stop) {
  VAR_1->mrq = ((void*)0);
  FUNC_5(FUNC_3(VAR_1), VAR_2->mrq);
  return;
 }

 FUNC_1(VAR_1, VAR_2->stop);
}
