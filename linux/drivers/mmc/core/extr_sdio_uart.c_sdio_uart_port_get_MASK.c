
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_uart_port {int port; } ;


 unsigned int VAR_0 ;
 struct sdio_uart_port** VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct sdio_uart_port *FUNC_3(unsigned VAR_3)
{
 struct sdio_uart_port *VAR_4;

 if (VAR_3 >= VAR_0)
  return ((void*)0);

 FUNC_0(&VAR_2);
 VAR_4 = VAR_1[VAR_3];
 if (VAR_4)
  FUNC_2(&VAR_4->port);
 FUNC_1(&VAR_2);

 return VAR_4;
}
