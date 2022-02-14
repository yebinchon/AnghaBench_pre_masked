
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_usart_info {int dummy; } ;
struct stm32_port {scalar_t__ wakeirq; int clk; int port; struct stm32_usart_info* info; } ;
struct platform_device {int dev; } ;
struct of_device_id {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 struct of_device_id* FUNC_6 (int ,int *) ;
 int FUNC_7 (struct platform_device*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct stm32_port*,struct platform_device*) ;
 int VAR_2 ;
 int FUNC_13 (struct stm32_port*,struct platform_device*) ;
 int FUNC_14 (struct stm32_port*,struct platform_device*) ;
 struct stm32_port* FUNC_15 (struct platform_device*) ;
 int VAR_3 ;
 int FUNC_16 (int *,int *) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_4)
{
 const struct of_device_id *VAR_5;
 struct stm32_port *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_15(VAR_4);
 if (!VAR_6)
  return -VAR_1;

 VAR_5 = FUNC_6(VAR_2, &VAR_4->dev);
 if (VAR_5 && VAR_5->data)
  VAR_6->info = (struct stm32_usart_info *)VAR_5->data;
 else
  return -VAR_0;

 VAR_7 = FUNC_12(VAR_6, VAR_4);
 if (VAR_7)
  return VAR_7;

 if (VAR_6->wakeirq > 0) {
  VAR_7 = FUNC_4(&VAR_4->dev, 1);
  if (VAR_7)
   goto err_uninit;

  VAR_7 = FUNC_3(&VAR_4->dev,
          VAR_6->wakeirq);
  if (VAR_7)
   goto err_nowup;

  FUNC_5(&VAR_4->dev, 0);
 }

 VAR_7 = FUNC_16(&VAR_3, &VAR_6->port);
 if (VAR_7)
  goto err_wirq;

 VAR_7 = FUNC_13(VAR_6, VAR_4);
 if (VAR_7)
  FUNC_1(&VAR_4->dev, "interrupt mode used for rx (no dma)\n");

 VAR_7 = FUNC_14(VAR_6, VAR_4);
 if (VAR_7)
  FUNC_1(&VAR_4->dev, "interrupt mode used for tx (no dma)\n");

 FUNC_7(VAR_4, &VAR_6->port);

 FUNC_9(&VAR_4->dev);
 FUNC_11(&VAR_4->dev);
 FUNC_8(&VAR_4->dev);
 FUNC_10(&VAR_4->dev);

 return 0;

err_wirq:
 if (VAR_6->wakeirq > 0)
  FUNC_2(&VAR_4->dev);

err_nowup:
 if (VAR_6->wakeirq > 0)
  FUNC_4(&VAR_4->dev, 0);

err_uninit:
 FUNC_0(VAR_6->clk);

 return VAR_7;
}
