
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {scalar_t__ channel_irq_mode; } ;
struct xgbe_channel {int napi; int dma_irq; struct xgbe_prv_data* pdata; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct xgbe_channel*,int ,unsigned int) ;
 int FUNC_1 (unsigned int,int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct xgbe_prv_data*,struct xgbe_channel*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_4, void *VAR_5)
{
 struct xgbe_channel *VAR_6 = VAR_5;
 struct xgbe_prv_data *VAR_7 = VAR_6->pdata;
 unsigned int VAR_8;




 if (FUNC_4(&VAR_6->napi)) {

  if (VAR_7->channel_irq_mode)
   FUNC_5(VAR_7, VAR_6);
  else
   FUNC_3(VAR_6->dma_irq);


  FUNC_2(&VAR_6->napi);
 }


 VAR_8 = 0;
 FUNC_1(VAR_8, VAR_0, VAR_3, 1);
 FUNC_1(VAR_8, VAR_0, VAR_2, 1);
 FUNC_0(VAR_6, VAR_0, VAR_8);

 return VAR_1;
}
