
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zs_scc {int zlock; } ;
struct zs_port {int * regs; struct zs_scc* scc; } ;
struct uart_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct zs_port* FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct zs_port*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_2, int VAR_3)
{
 struct zs_port *VAR_4 = FUNC_2(VAR_2);
 struct zs_scc *VAR_5 = VAR_4->scc;
 unsigned long VAR_6;

 FUNC_0(&VAR_5->zlock, VAR_6);
 if (VAR_3 == -1)
  VAR_4->regs[5] |= VAR_1;
 else
  VAR_4->regs[5] &= ~VAR_1;
 FUNC_3(VAR_4, VAR_0, VAR_4->regs[5]);
 FUNC_1(&VAR_5->zlock, VAR_6);
}
