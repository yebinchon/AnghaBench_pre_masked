
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t type; } ;
struct uart_8250_port {int fcr; TYPE_1__ port; } ;
struct serial8250_config {unsigned char* rxtrig_bytes; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 struct serial8250_config* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct uart_8250_port *VAR_2)
{
 const struct serial8250_config *VAR_3 = &VAR_1[VAR_2->port.type];
 unsigned char VAR_4;

 VAR_4 = VAR_3->rxtrig_bytes[FUNC_0(VAR_2->fcr)];

 return VAR_4 ? VAR_4 : -VAR_0;
}
