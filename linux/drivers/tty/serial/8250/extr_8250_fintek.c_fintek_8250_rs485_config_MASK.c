
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct serial_rs485 {int flags; int delay_rts_before_send; int delay_rts_after_send; struct serial_rs485* padding; } ;
struct uart_port {struct serial_rs485 rs485; struct fintek_8250* private_data; } ;
struct fintek_8250 {int base_port; scalar_t__ index; int key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct serial_rs485*,int ,int) ;
 int FUNC_3 (struct fintek_8250*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct uart_port *VAR_11,
         struct serial_rs485 *VAR_12)
{
 uint8_t VAR_13 = 0;
 struct fintek_8250 *VAR_14 = VAR_11->private_data;

 if (!VAR_14)
  return -VAR_1;


 if (!(VAR_12->flags & VAR_9) ==
   !(VAR_12->flags & VAR_8))
  return -VAR_1;

 if (VAR_12->flags & VAR_7) {
  FUNC_2(VAR_12->padding, 0, sizeof(VAR_12->padding));
  VAR_13 |= VAR_4;
 } else {
  FUNC_2(VAR_12, 0, sizeof(*VAR_12));
 }

 VAR_12->flags &= VAR_7 | VAR_9 |
   VAR_8;


 if (VAR_14->index) {
  VAR_12->delay_rts_before_send = 0;
  VAR_12->delay_rts_after_send = 0;
 }

 if (VAR_12->delay_rts_before_send) {
  VAR_12->delay_rts_before_send = 1;
  VAR_13 |= VAR_10;
 }

 if (VAR_12->delay_rts_after_send) {
  VAR_12->delay_rts_after_send = 1;
  VAR_13 |= VAR_6;
 }

 if (VAR_12->flags & VAR_9)
  VAR_13 |= VAR_5;

 if (FUNC_0(VAR_14->base_port, VAR_14->key))
  return -VAR_0;

 FUNC_3(VAR_14, VAR_2, VAR_14->index);
 FUNC_3(VAR_14, VAR_3, VAR_13);
 FUNC_1(VAR_14->base_port);

 VAR_11->rs485 = *VAR_12;

 return 0;
}
