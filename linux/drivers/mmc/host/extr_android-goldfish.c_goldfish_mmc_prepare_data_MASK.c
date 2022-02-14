
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mmc_request {struct mmc_data* data; } ;
struct mmc_data {int blksz; int blocks; int sg_len; TYPE_1__* sg; } ;
struct goldfish_mmc_host {int dma_in_use; int virt_base; scalar_t__ dma_done; int sg_len; struct mmc_data* data; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_3__ {int length; } ;


 int VAR_0 ;
 int FUNC_0 (struct goldfish_mmc_host*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,TYPE_1__*,unsigned int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct goldfish_mmc_host*) ;
 int FUNC_4 (struct mmc_data*) ;
 int FUNC_5 (TYPE_1__*,int,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct goldfish_mmc_host *VAR_3,
          struct mmc_request *VAR_4)
{
 struct mmc_data *VAR_5 = VAR_4->data;
 int VAR_6;
 unsigned VAR_7;
 enum dma_data_direction VAR_8;

 VAR_3->data = VAR_5;
 if (VAR_5 == ((void*)0)) {
  FUNC_0(VAR_3, VAR_2, 0);
  FUNC_0(VAR_3, VAR_1, 0);
  VAR_3->dma_in_use = 0;
  return;
 }

 VAR_6 = VAR_5->blksz;

 FUNC_0(VAR_3, VAR_1, VAR_5->blocks - 1);
 FUNC_0(VAR_3, VAR_2, VAR_6 - 1);





 VAR_7 = (VAR_5->blocks == 1) ? 1 : VAR_5->sg_len;

 VAR_8 = FUNC_4(VAR_5);

 VAR_3->sg_len = FUNC_1(FUNC_2(FUNC_3(VAR_3)), VAR_5->sg,
      VAR_7, VAR_8);
 VAR_3->dma_done = 0;
 VAR_3->dma_in_use = 1;

 if (VAR_8 == VAR_0) {




  FUNC_5(VAR_5->sg, 1, VAR_3->virt_base,
    VAR_5->sg->length);
 }
}
