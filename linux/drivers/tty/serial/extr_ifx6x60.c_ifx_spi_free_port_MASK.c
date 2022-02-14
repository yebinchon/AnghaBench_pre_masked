
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifx_spi_device {int tx_fifo; int tty_port; int minor; scalar_t__ tty_dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ifx_spi_device *VAR_1)
{
 if (VAR_1->tty_dev)
  FUNC_2(VAR_0, VAR_1->minor);
 FUNC_1(&VAR_1->tty_port);
 FUNC_0(&VAR_1->tx_fifo);
}
