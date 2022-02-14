
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uniphier_sd_priv {int dma_dir; } ;
struct tmio_mmc_host {int lock; TYPE_1__* data; int sg_len; int sg_ptr; int mmc; } ;
struct dmaengine_result {scalar_t__ result; } ;
struct TYPE_2__ {int error; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct tmio_mmc_host*) ;
 int FUNC_5 (struct tmio_mmc_host*,int ) ;
 struct uniphier_sd_priv* FUNC_6 (struct tmio_mmc_host*) ;

__attribute__((used)) static void FUNC_7(void *VAR_3,
     const struct dmaengine_result *VAR_4)
{
 struct tmio_mmc_host *VAR_5 = VAR_3;
 struct uniphier_sd_priv *VAR_6 = FUNC_6(VAR_5);
 unsigned long VAR_7;

 FUNC_0(FUNC_1(VAR_5->mmc), VAR_5->sg_ptr, VAR_5->sg_len,
       VAR_6->dma_dir);

 FUNC_2(&VAR_5->lock, VAR_7);

 if (VAR_4->result == VAR_0) {







  FUNC_5(VAR_5, VAR_2);
 } else {
  VAR_5->data->error = -VAR_1;
  FUNC_4(VAR_5);
 }

 FUNC_3(&VAR_5->lock, VAR_7);
}
