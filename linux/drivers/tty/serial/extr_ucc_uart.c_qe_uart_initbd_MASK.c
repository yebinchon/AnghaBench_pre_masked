
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_qe_port {int rx_nrfifos; int rx_fifosize; int tx_nrfifos; struct qe_bd* tx_cur; int tx_fifosize; struct qe_bd* tx_bd_base; void* bd_virt; struct qe_bd* rx_bd_base; struct qe_bd* rx_cur; } ;
struct qe_bd {int length; int buf; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,struct uart_qe_port*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct uart_qe_port *VAR_4)
{
 int VAR_5;
 void *VAR_6;
 struct qe_bd *VAR_7;




 VAR_6 = VAR_4->bd_virt;
 VAR_7 = VAR_4->rx_bd_base;
 VAR_4->rx_cur = VAR_4->rx_bd_base;
 for (VAR_5 = 0; VAR_5 < (VAR_4->rx_nrfifos - 1); VAR_5++) {
  FUNC_2(&VAR_7->status, VAR_0 | VAR_1);
  FUNC_3(&VAR_7->buf, FUNC_1(VAR_6, VAR_4));
  FUNC_2(&VAR_7->length, 0);
  VAR_6 += VAR_4->rx_fifosize;
  VAR_7++;
 }


 FUNC_2(&VAR_7->status, VAR_3 | VAR_0 | VAR_1);
 FUNC_3(&VAR_7->buf, FUNC_1(VAR_6, VAR_4));
 FUNC_2(&VAR_7->length, 0);





 VAR_6 = VAR_4->bd_virt +
  FUNC_0(VAR_4->rx_nrfifos * VAR_4->rx_fifosize);
 VAR_4->tx_cur = VAR_4->tx_bd_base;
 VAR_7 = VAR_4->tx_bd_base;
 for (VAR_5 = 0; VAR_5 < (VAR_4->tx_nrfifos - 1); VAR_5++) {
  FUNC_2(&VAR_7->status, VAR_1);
  FUNC_3(&VAR_7->buf, FUNC_1(VAR_6, VAR_4));
  FUNC_2(&VAR_7->length, 0);
  VAR_6 += VAR_4->tx_fifosize;
  VAR_7++;
 }






 FUNC_2(&VAR_7->status, VAR_3 | VAR_1);
 FUNC_3(&VAR_7->buf, FUNC_1(VAR_6, VAR_4));
 FUNC_2(&VAR_7->length, 0);
}
