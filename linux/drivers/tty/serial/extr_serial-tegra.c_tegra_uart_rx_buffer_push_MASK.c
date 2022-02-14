
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct tty_port {int dummy; } ;
struct TYPE_4__ {TYPE_1__* state; } ;
struct tegra_uart_port {unsigned int rx_bytes_requested; int rx_dma_desc; TYPE_2__ uport; } ;
struct TYPE_3__ {struct tty_port port; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct tegra_uart_port*,struct tty_port*,unsigned int) ;
 int FUNC_2 (struct tegra_uart_port*,struct tty_port*) ;
 int FUNC_3 (struct tty_port*) ;
 int FUNC_4 (struct tty_struct*) ;
 struct tty_struct* FUNC_5 (struct tty_port*) ;

__attribute__((used)) static void FUNC_6(struct tegra_uart_port *VAR_0,
          unsigned int VAR_1)
{
 struct tty_port *VAR_2 = &VAR_0->uport.state->port;
 struct tty_struct *VAR_3 = FUNC_5(VAR_2);
 unsigned int VAR_4;

 FUNC_0(VAR_0->rx_dma_desc);
 VAR_4 = VAR_0->rx_bytes_requested - VAR_1;


 FUNC_1(VAR_0, VAR_2, VAR_4);

 FUNC_2(VAR_0, VAR_2);
 if (VAR_3) {
  FUNC_3(VAR_2);
  FUNC_4(VAR_3);
 }
}
