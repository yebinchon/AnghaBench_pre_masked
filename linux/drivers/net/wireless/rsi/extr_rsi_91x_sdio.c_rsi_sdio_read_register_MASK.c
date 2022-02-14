
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct rsi_hw {scalar_t__ rsi_dev; } ;
struct rsi_91x_sdiodev {scalar_t__ sdio_irq_task; int pfunction; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int*) ;
 scalar_t__ FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct rsi_hw *VAR_1,
      u32 VAR_2,
      u8 *VAR_3)
{
 struct rsi_91x_sdiodev *VAR_4 =
  (struct rsi_91x_sdiodev *)VAR_1->rsi_dev;
 u8 VAR_5 = 0;
 int VAR_6;

 if (FUNC_0(VAR_4->sdio_irq_task != VAR_0))
  FUNC_1(VAR_4->pfunction);

 if (VAR_5 == 0)
  *VAR_3 = FUNC_2(VAR_4->pfunction, VAR_2, &VAR_6);
 else
  *VAR_3 = FUNC_3(VAR_4->pfunction, VAR_2, &VAR_6);

 if (FUNC_0(VAR_4->sdio_irq_task != VAR_0))
  FUNC_4(VAR_4->pfunction);

 return VAR_6;
}
