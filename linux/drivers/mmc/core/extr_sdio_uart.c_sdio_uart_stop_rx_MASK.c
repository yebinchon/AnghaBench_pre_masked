
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_uart_port {int ier; int read_status_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sdio_uart_port*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct sdio_uart_port *VAR_3)
{
 VAR_3->ier &= ~VAR_1;
 VAR_3->read_status_mask &= ~VAR_2;
 FUNC_0(VAR_3, VAR_0, VAR_3->ier);
}
