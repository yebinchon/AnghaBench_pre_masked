
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int line; } ;
struct sbd_port {struct uart_port port; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (struct sbd_port*,int ) ;
 int FUNC_3 (struct sbd_port*) ;
 int FUNC_4 (struct sbd_port*) ;
 int FUNC_5 (struct sbd_port*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_6, void *VAR_7)
{
 struct sbd_port *VAR_8 = VAR_7;
 struct uart_port *VAR_9 = &VAR_8->port;
 irqreturn_t VAR_10 = VAR_1;
 unsigned int VAR_11;
 int VAR_12;

 for (VAR_12 = 16; VAR_12; VAR_12--) {
  VAR_11 = FUNC_2(VAR_8,
          FUNC_1((VAR_9->line) % 2));
  VAR_11 &= FUNC_2(VAR_8,
           FUNC_0((VAR_9->line) % 2));
  VAR_11 &= VAR_2;
  if (!VAR_11)
   break;

  if (VAR_11 & VAR_4)
   FUNC_3(VAR_8);
  if (VAR_11 & VAR_3)
   FUNC_4(VAR_8);
  if (VAR_11 & VAR_5)
   FUNC_5(VAR_8);

  VAR_10 = VAR_0;
 }

 return VAR_10;
}
