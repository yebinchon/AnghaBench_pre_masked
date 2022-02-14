
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ type; } ;
struct sci_port {scalar_t__ autorts; int has_rtscts; int gpios; } ;
struct plat_sci_reg {scalar_t__ size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (int ,unsigned int) ;
 struct plat_sci_reg* FUNC_1 (struct uart_port*,int ) ;
 int FUNC_2 (struct uart_port*,int) ;
 int FUNC_3 (struct uart_port*,int ) ;
 int FUNC_4 (struct uart_port*,int ,int) ;
 struct sci_port* FUNC_5 (struct uart_port*) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_9, unsigned int VAR_10)
{
 struct sci_port *VAR_11 = FUNC_5(VAR_9);

 if (VAR_10 & VAR_7) {
  const struct plat_sci_reg *VAR_12;




  VAR_12 = FUNC_1(VAR_9, VAR_2);
  if (VAR_12->size)
   FUNC_4(VAR_9, VAR_2,
     FUNC_3(VAR_9, VAR_2) |
     VAR_3);
 }

 FUNC_0(VAR_11->gpios, VAR_10);

 if (!VAR_11->has_rtscts)
  return;

 if (!(VAR_10 & VAR_8)) {

  FUNC_4(VAR_9, VAR_2,
    FUNC_3(VAR_9, VAR_2) & ~VAR_4);


  FUNC_2(VAR_9, 0);
 } else if (VAR_11->autorts) {
  if (VAR_9->type == VAR_0 || VAR_9->type == VAR_1) {

   FUNC_4(VAR_9, VAR_5,
    FUNC_3(VAR_9, VAR_5) & ~VAR_6);
  }


  FUNC_4(VAR_9, VAR_2,
    FUNC_3(VAR_9, VAR_2) | VAR_4);
 } else {

  FUNC_2(VAR_9, 1);
 }
}
