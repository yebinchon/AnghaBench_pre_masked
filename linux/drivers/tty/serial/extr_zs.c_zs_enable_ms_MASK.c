
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zs_scc {int zlock; struct zs_port* zport; } ;
struct zs_port {int* regs; struct zs_scc* scc; } ;
struct uart_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct zs_port* FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct zs_port*,int ,int) ;
 int FUNC_4 (struct zs_port*) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_9)
{
 struct zs_port *VAR_10 = FUNC_2(VAR_9);
 struct zs_scc *VAR_11 = VAR_10->scc;
 struct zs_port *VAR_12 = &VAR_11->zport[VAR_8];

 if (VAR_10 == VAR_12)
  return;

 FUNC_0(&VAR_11->zlock);


 if (!(VAR_12->regs[1] & VAR_2))
  FUNC_3(VAR_12, VAR_3, VAR_6);


 VAR_12->regs[1] |= VAR_2;
 VAR_12->regs[15] |= VAR_1 | VAR_7;


 VAR_10->regs[15] |= VAR_1 | VAR_0;

 FUNC_4(VAR_10);

 FUNC_3(VAR_12, VAR_4, VAR_12->regs[1]);
 FUNC_3(VAR_12, VAR_5, VAR_12->regs[15]);
 FUNC_3(VAR_10, VAR_5, VAR_10->regs[15]);
 FUNC_1(&VAR_11->zlock);
}
