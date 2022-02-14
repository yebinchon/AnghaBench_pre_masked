
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct sci_port {scalar_t__ autorts; struct mctrl_gpios* gpios; } ;
struct mctrl_gpios {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mctrl_gpios*,unsigned int*) ;
 int FUNC_1 (struct mctrl_gpios*,int ) ;
 scalar_t__ FUNC_2 (struct uart_port*) ;
 struct sci_port* FUNC_3 (struct uart_port*) ;

__attribute__((used)) static unsigned int FUNC_4(struct uart_port *VAR_6)
{
 struct sci_port *VAR_7 = FUNC_3(VAR_6);
 struct mctrl_gpios *VAR_8 = VAR_7->gpios;
 unsigned int VAR_9 = 0;

 FUNC_0(VAR_8, &VAR_9);





 if (VAR_7->autorts) {
  if (FUNC_2(VAR_6))
   VAR_9 |= VAR_1;
 } else if (!FUNC_1(VAR_8, VAR_3)) {
  VAR_9 |= VAR_1;
 }
 if (!FUNC_1(VAR_8, VAR_5))
  VAR_9 |= VAR_2;
 if (!FUNC_1(VAR_8, VAR_4))
  VAR_9 |= VAR_0;

 return VAR_9;
}
