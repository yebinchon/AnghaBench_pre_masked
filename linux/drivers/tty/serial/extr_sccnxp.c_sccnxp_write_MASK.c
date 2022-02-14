
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct uart_port {int regshift; scalar_t__ membase; int dev; } ;
struct sccnxp_port {TYPE_1__* chip; } ;
struct TYPE_2__ {int trwd; } ;


 struct sccnxp_port* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct sccnxp_port *VAR_3 = FUNC_0(VAR_0->dev);

 FUNC_2(VAR_2, VAR_0->membase + (VAR_1 << VAR_0->regshift));

 FUNC_1(VAR_3->chip->trwd);
}
