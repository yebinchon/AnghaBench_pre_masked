
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int fifosize; } ;
struct qcom_geni_serial_port {int tx_fifo_depth; int tx_fifo_width; int se; int rx_fifo_depth; struct uart_port uport; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct qcom_geni_serial_port *VAR_1)
{
 struct uart_port *VAR_2;

 VAR_2 = &VAR_1->uport;
 VAR_1->tx_fifo_depth = FUNC_1(&VAR_1->se);
 VAR_1->tx_fifo_width = FUNC_2(&VAR_1->se);
 VAR_1->rx_fifo_depth = FUNC_0(&VAR_1->se);
 VAR_2->fifosize =
  (VAR_1->tx_fifo_depth * VAR_1->tx_fifo_width) / VAR_0;
}
