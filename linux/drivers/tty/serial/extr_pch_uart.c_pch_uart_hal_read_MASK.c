
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int brk; } ;
struct uart_port {scalar_t__ sysrq; TYPE_1__ icount; } ;
struct eg20t_port {scalar_t__ membase; struct uart_port port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct uart_port*) ;
 scalar_t__ FUNC_2 (struct uart_port*,int) ;

__attribute__((used)) static int FUNC_3(struct eg20t_port *VAR_4, unsigned char *VAR_5,
        int VAR_6)
{
 int VAR_7;
 u8 VAR_8, VAR_9;
 struct uart_port *VAR_10 = &VAR_4->port;

 VAR_9 = FUNC_0(VAR_4->membase + VAR_1);
 for (VAR_7 = 0, VAR_9 = FUNC_0(VAR_4->membase + VAR_1);
      VAR_7 < VAR_6 && VAR_9 & (VAR_3 | VAR_2);
      VAR_9 = FUNC_0(VAR_4->membase + VAR_1)) {
  VAR_8 = FUNC_0(VAR_4->membase + VAR_0);

  if (VAR_9 & VAR_2) {
   VAR_10->icount.brk++;
   if (FUNC_1(VAR_10))
    continue;
  }







  VAR_5[VAR_7++] = VAR_8;
 }
 return VAR_7;
}
