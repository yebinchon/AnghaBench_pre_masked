
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int read_status_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct uart_port*,int ,int) ;
 scalar_t__ FUNC_1 (struct uart_port*) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_8)
{
 FUNC_0(VAR_8, VAR_2, VAR_5);

 if (FUNC_1(VAR_8)) {

  FUNC_0(VAR_8, VAR_0, VAR_1);
  FUNC_0(VAR_8, VAR_4,
      VAR_3 | VAR_7 |
      VAR_8->read_status_mask);
 } else {
  FUNC_0(VAR_8, VAR_4, VAR_6);
 }
}
