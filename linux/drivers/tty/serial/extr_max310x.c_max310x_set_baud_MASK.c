
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int uartclk; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct uart_port*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct uart_port *VAR_5, int VAR_6)
{
 unsigned int VAR_7 = 0, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;






 VAR_8 = VAR_5->uartclk / VAR_6;
 if (VAR_8 < 8) {

  VAR_10 = 4;
  VAR_7 = VAR_1;
 } else if (VAR_8 < 16) {

  VAR_10 = 8;
  VAR_7 = VAR_0;
 } else {
  VAR_10 = 16;
 }


 VAR_8 /= VAR_10;
 VAR_11 = VAR_10*VAR_6;


 if (VAR_8 > 0)
  VAR_9 = (16*(VAR_5->uartclk % VAR_11)) / VAR_11;
 else
  VAR_8 = 1;

 FUNC_0(VAR_5, VAR_4, VAR_8 >> 8);
 FUNC_0(VAR_5, VAR_3, VAR_8);
 FUNC_0(VAR_5, VAR_2, VAR_9 | VAR_7);


 return (16*VAR_5->uartclk) / (VAR_10*(16*VAR_8 + VAR_9));
}
