
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct uart_port {size_t line; int dev; } ;
struct TYPE_2__ {int* mctrl_cfg; } ;
struct sccnxp_port {TYPE_1__ pdata; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct sccnxp_port* FUNC_2 (int ) ;
 int FUNC_3 (struct uart_port*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_2, int VAR_3, int VAR_4)
{
 u8 VAR_5;
 struct sccnxp_port *VAR_6 = FUNC_2(VAR_2->dev);

 if (VAR_6->pdata.mctrl_cfg[VAR_2->line] & FUNC_0(VAR_3)) {
  VAR_5 = 1 << FUNC_1(VAR_6->pdata.mctrl_cfg[VAR_2->line], VAR_3);
  if (VAR_4)
   FUNC_3(VAR_2, VAR_1, VAR_5);
  else
   FUNC_3(VAR_2, VAR_0, VAR_5);
 }
}
