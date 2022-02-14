
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_data {int flags; int blocks; int blksz; int sg_len; int sg; scalar_t__ bytes_xfered; } ;
struct mmc_command {struct mmc_data* data; } ;
struct bcm2835_host {int data_complete; scalar_t__ ioaddr; int blocks; int sg_miter; int dma_desc; struct mmc_data* data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mmc_data*) ;
 int FUNC_1 (struct bcm2835_host*) ;
 int FUNC_2 (int *,int ,int ,int) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static
void FUNC_4(struct bcm2835_host *VAR_6, struct mmc_command *VAR_7)
{
 struct mmc_data *VAR_8 = VAR_7->data;

 FUNC_0(VAR_6->data);

 VAR_6->data = VAR_8;
 if (!VAR_8)
  return;

 VAR_6->data_complete = 0;
 VAR_6->data->bytes_xfered = 0;

 if (!VAR_6->dma_desc) {

  int VAR_9 = VAR_3;

  if (VAR_8->flags & VAR_0)
   VAR_9 |= VAR_5;
  else
   VAR_9 |= VAR_4;
  FUNC_2(&VAR_6->sg_miter, VAR_8->sg, VAR_8->sg_len, VAR_9);
  VAR_6->blocks = VAR_8->blocks;
 }

 FUNC_1(VAR_6);

 FUNC_3(VAR_8->blksz, VAR_6->ioaddr + VAR_1);
 FUNC_3(VAR_8->blocks, VAR_6->ioaddr + VAR_2);
}
