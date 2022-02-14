
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {scalar_t__ type; int dev; } ;
struct sccnxp_port {TYPE_1__* chip; } ;
struct TYPE_2__ {char const* name; } ;


 scalar_t__ VAR_0 ;
 struct sccnxp_port* FUNC_0 (int ) ;

__attribute__((used)) static const char *FUNC_1(struct uart_port *VAR_1)
{
 struct sccnxp_port *VAR_2 = FUNC_0(VAR_1->dev);

 return (VAR_1->type == VAR_0) ? VAR_2->chip->name : ((void*)0);
}
