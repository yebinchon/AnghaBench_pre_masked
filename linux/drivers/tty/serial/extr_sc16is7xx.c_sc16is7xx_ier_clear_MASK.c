
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct uart_port {int dev; } ;
struct sc16is7xx_port {int kworker; } ;
struct TYPE_2__ {int ier_clear; int flags; } ;
struct sc16is7xx_one {int reg_work; TYPE_1__ config; } ;


 int VAR_0 ;
 struct sc16is7xx_port* FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 struct sc16is7xx_one* FUNC_2 (struct uart_port*,struct uart_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_1, u8 VAR_2)
{
 struct sc16is7xx_port *VAR_3 = FUNC_0(VAR_1->dev);
 struct sc16is7xx_one *VAR_4 = FUNC_2(VAR_1, VAR_1);

 VAR_4->config.flags |= VAR_0;
 VAR_4->config.ier_clear |= VAR_2;
 FUNC_1(&VAR_3->kworker, &VAR_4->reg_work);
}
