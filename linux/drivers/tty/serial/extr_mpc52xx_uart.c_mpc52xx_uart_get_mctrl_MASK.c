
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct uart_port {int dummy; } ;
struct TYPE_2__ {int (* get_ipcr ) (struct uart_port*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (struct uart_port*) ;

__attribute__((used)) static unsigned int
FUNC_1(struct uart_port *VAR_6)
{
 unsigned int VAR_7 = VAR_4;
 u8 VAR_8 = VAR_5->get_ipcr(VAR_6);

 if (!(VAR_8 & VAR_0))
  VAR_7 |= VAR_3;
 if (!(VAR_8 & VAR_1))
  VAR_7 |= VAR_2;

 return VAR_7;
}
