
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ iotype; } ;
struct lpuart_port {TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct lpuart_port *VAR_2)
{
 return VAR_2->port.iotype == VAR_0 ||
        VAR_2->port.iotype == VAR_1;
}
