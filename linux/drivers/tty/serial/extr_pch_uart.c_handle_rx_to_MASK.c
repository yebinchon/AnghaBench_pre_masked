
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pch_uart_buffer {int size; int buf; } ;
struct eg20t_port {struct pch_uart_buffer rxbuf; int start_rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct eg20t_port*,int) ;
 int FUNC_1 (struct eg20t_port*,int ,int) ;
 int FUNC_2 (struct eg20t_port*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct eg20t_port *VAR_3)
{
 struct pch_uart_buffer *VAR_4;
 int VAR_5;
 int VAR_6;
 if (!VAR_3->start_rx) {
  FUNC_0(VAR_3, VAR_1 |
           VAR_0);
  return 0;
 }
 VAR_4 = &VAR_3->rxbuf;
 do {
  VAR_5 = FUNC_1(VAR_3, VAR_4->buf, VAR_4->size);
  VAR_6 = FUNC_2(VAR_3, VAR_4->buf, VAR_5);
  if (VAR_6)
   return 0;
 } while (VAR_5 == VAR_4->size);

 return VAR_2;
}
