
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {unsigned int uartclk; int flags; int custom_divisor; } ;
struct omap8250_priv {int quot; void* mdr1; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_1 (unsigned int) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_5, unsigned int VAR_6,
      struct omap8250_priv *VAR_7)
{
 unsigned int VAR_8 = VAR_5->uartclk;
 unsigned int VAR_9, VAR_10;
 unsigned int VAR_11, VAR_12;




 if (VAR_6 == 38400 && (VAR_5->flags & VAR_4) == VAR_3) {
  VAR_7->quot = VAR_5->custom_divisor & VAR_0;





  if (VAR_5->custom_divisor & (1 << 16))
   VAR_7->mdr1 = VAR_1;
  else
   VAR_7->mdr1 = VAR_2;
  return;
 }
 VAR_9 = FUNC_0(VAR_8, 13 * VAR_6);
 VAR_10 = FUNC_0(VAR_8, 16 * VAR_6);

 if (!VAR_9)
  VAR_9 = 1;
 if (!VAR_10)
  VAR_10 = 1;

 VAR_11 = FUNC_1(VAR_6 - VAR_8 / 13 / VAR_9);
 VAR_12 = FUNC_1(VAR_6 - VAR_8 / 16 / VAR_10);

 if (VAR_11 >= VAR_12) {
  VAR_7->mdr1 = VAR_2;
  VAR_7->quot = VAR_10;
 } else {
  VAR_7->mdr1 = VAR_1;
  VAR_7->quot = VAR_9;
 }
}
