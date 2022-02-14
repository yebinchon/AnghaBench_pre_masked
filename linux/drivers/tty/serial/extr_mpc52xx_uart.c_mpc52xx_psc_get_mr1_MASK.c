
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct uart_port {int dummy; } ;
struct TYPE_2__ {int mode; int command; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct uart_port*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static u8 FUNC_3(struct uart_port *VAR_1)
{
 FUNC_2(&FUNC_0(VAR_1)->command, VAR_0);
 return FUNC_1(&FUNC_0(VAR_1)->mode);
}
