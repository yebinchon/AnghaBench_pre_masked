
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct mps2_uart_port {int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mps2_uart_port* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct platform_device*,struct mps2_uart_port*) ;
 int FUNC_2 (struct platform_device*,struct mps2_uart_port*) ;
 int VAR_2 ;
 int FUNC_3 (struct platform_device*,struct mps2_uart_port*) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 struct mps2_uart_port *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(&VAR_3->dev, sizeof(struct mps2_uart_port), VAR_1);

        if (!VAR_4)
                return -VAR_0;

 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_4(&VAR_2, &VAR_4->port);
 if (VAR_5)
  return VAR_5;

 FUNC_3(VAR_3, VAR_4);

 return 0;
}
