
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t type; } ;
struct uart_8250_port {TYPE_1__ port; } ;
struct serial8250_config {unsigned char* rxtrig_bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct serial8250_config* VAR_5 ;

__attribute__((used)) static int FUNC_1(struct uart_8250_port *VAR_6, unsigned char VAR_7)
{
 const struct serial8250_config *VAR_8 = &VAR_5[VAR_6->port.type];
 int VAR_9;

 if (!VAR_8->rxtrig_bytes[FUNC_0(VAR_1)])
  return -VAR_0;

 for (VAR_9 = 1; VAR_9 < VAR_3; VAR_9++) {
  if (VAR_7 < VAR_8->rxtrig_bytes[VAR_9])

   return (--VAR_9) << VAR_4;
 }

 return VAR_2;
}
