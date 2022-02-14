
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct mxs_ssp {int dma_dir; int slave_dirn; int dmach; scalar_t__ ssp_pio_words; } ;
struct mxs_mmc_host {int mmc; struct mmc_data* data; struct mxs_ssp ssp; } ;
struct mmc_data {unsigned int sg_len; struct scatterlist* sg; } ;
struct dma_async_tx_descriptor {struct mxs_mmc_host* callback_param; int callback; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,struct scatterlist*,unsigned int,int ) ;
 int FUNC_1 (int ,struct scatterlist*,unsigned int,int ) ;
 struct dma_async_tx_descriptor* FUNC_2 (int ,struct scatterlist*,unsigned int,int ,unsigned long) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;

__attribute__((used)) static struct dma_async_tx_descriptor *FUNC_4(
 struct mxs_mmc_host *VAR_2, unsigned long VAR_3)
{
 struct mxs_ssp *VAR_4 = &VAR_2->ssp;
 struct dma_async_tx_descriptor *VAR_5;
 struct mmc_data *VAR_6 = VAR_2->data;
 struct scatterlist * VAR_7;
 unsigned int VAR_8;

 if (VAR_6) {

  FUNC_0(FUNC_3(VAR_2->mmc), VAR_6->sg,
      VAR_6->sg_len, VAR_4->dma_dir);
  VAR_7 = VAR_6->sg;
  VAR_8 = VAR_6->sg_len;
 } else {

  VAR_7 = (struct scatterlist *) VAR_4->ssp_pio_words;
  VAR_8 = VAR_0;
 }

 VAR_5 = FUNC_2(VAR_4->dmach,
    VAR_7, VAR_8, VAR_4->slave_dirn, VAR_3);
 if (VAR_5) {
  VAR_5->callback = VAR_1;
  VAR_5->callback_param = VAR_2;
 } else {
  if (VAR_6)
   FUNC_1(FUNC_3(VAR_2->mmc), VAR_6->sg,
         VAR_6->sg_len, VAR_4->dma_dir);
 }

 return VAR_5;
}
