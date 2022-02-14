
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* state; } ;
struct tegra_uart_port {TYPE_2__ uport; scalar_t__ tx_in_progress; int tx_bytes; } ;
struct circ_buf {int dummy; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct tegra_uart_port*,int ) ;
 int FUNC_1 (struct tegra_uart_port*) ;
 scalar_t__ FUNC_2 (struct circ_buf*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(struct tegra_uart_port *VAR_1)
{
 struct circ_buf *VAR_2 = &VAR_1->uport.state->xmit;

 FUNC_0(VAR_1, VAR_1->tx_bytes);
 VAR_1->tx_in_progress = 0;
 if (FUNC_2(VAR_2) < VAR_0)
  FUNC_3(&VAR_1->uport);
 FUNC_1(VAR_1);
}
