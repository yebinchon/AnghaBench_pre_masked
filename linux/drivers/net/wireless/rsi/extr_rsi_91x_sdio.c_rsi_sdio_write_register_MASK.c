
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
 int FUNC_2 (int ,scalar_t__,int ,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__,int ,int*) ;

int FUNC_5(struct rsi_hw *VAR_1,
       u8 VAR_2,
       u32 VAR_3,
       u8 *VAR_4)
{
 struct rsi_91x_sdiodev *VAR_5 =
  (struct rsi_91x_sdiodev *)VAR_1->rsi_dev;
 int VAR_6 = 0;

 if (FUNC_0(VAR_5->sdio_irq_task != VAR_0))
  FUNC_1(VAR_5->pfunction);

 if (VAR_2 == 0)
  FUNC_2(VAR_5->pfunction, *VAR_4, VAR_3, &VAR_6);
 else
  FUNC_4(VAR_5->pfunction, *VAR_4, VAR_3, &VAR_6);

 if (FUNC_0(VAR_5->sdio_irq_task != VAR_0))
  FUNC_3(VAR_5->pfunction);

 return VAR_6;
}
