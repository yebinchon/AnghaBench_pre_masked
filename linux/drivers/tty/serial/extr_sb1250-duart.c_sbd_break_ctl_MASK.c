
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct sbd_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sbd_port* FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct sbd_port*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_3, int VAR_4)
{
 struct sbd_port *VAR_5 = FUNC_0(VAR_3);

 if (VAR_4 == -1)
  FUNC_1(VAR_5, VAR_0, VAR_1);
 else
  FUNC_1(VAR_5, VAR_0, VAR_2);
}
