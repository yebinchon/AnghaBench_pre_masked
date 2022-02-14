
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial_rs485 {int delay_rts_before_send; int delay_rts_after_send; int flags; int padding; } ;
struct uart_port {struct serial_rs485 rs485; } ;
struct max310x_one {int rs_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *) ;
 struct max310x_one* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static int FUNC_3(struct uart_port *VAR_4,
    struct serial_rs485 *VAR_5)
{
 struct max310x_one *VAR_6 = FUNC_2(VAR_4);

 if ((VAR_5->delay_rts_before_send > 0x0f) ||
     (VAR_5->delay_rts_after_send > 0x0f))
  return -VAR_0;

 VAR_5->flags &= VAR_2 | VAR_3 |
   VAR_1;
 FUNC_0(VAR_5->padding, 0, sizeof(VAR_5->padding));
 VAR_4->rs485 = *VAR_5;

 FUNC_1(&VAR_6->rs_work);

 return 0;
}
