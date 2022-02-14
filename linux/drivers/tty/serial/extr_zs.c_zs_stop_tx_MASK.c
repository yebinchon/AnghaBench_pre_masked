
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zs_scc {int zlock; } ;
struct zs_port {struct zs_scc* scc; } ;
struct uart_port {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct zs_port* FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct zs_port*) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_0)
{
 struct zs_port *VAR_1 = FUNC_2(VAR_0);
 struct zs_scc *VAR_2 = VAR_1->scc;

 FUNC_0(&VAR_2->zlock);
 FUNC_3(VAR_1);
 FUNC_1(&VAR_2->zlock);
}
