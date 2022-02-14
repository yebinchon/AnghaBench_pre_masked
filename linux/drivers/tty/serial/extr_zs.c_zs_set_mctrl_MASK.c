
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zs_scc {int zlock; struct zs_port* zport; } ;
struct zs_port {int * regs; struct zs_scc* scc; } ;
struct uart_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct zs_port* FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct zs_port*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_9, unsigned int VAR_10)
{
 struct zs_port *VAR_11 = FUNC_2(VAR_9);
 struct zs_scc *VAR_12 = VAR_11->scc;
 struct zs_port *VAR_13 = &VAR_12->zport[VAR_8];
 u8 VAR_14, VAR_15;

 FUNC_0(&VAR_12->zlock);
 if (VAR_11 != VAR_13) {
  if (VAR_10 & VAR_5)
   VAR_13->regs[5] |= VAR_0;
  else
   VAR_13->regs[5] &= ~VAR_0;
  if (VAR_10 & VAR_7)
   VAR_13->regs[5] |= VAR_4;
  else
   VAR_13->regs[5] &= ~VAR_4;
  FUNC_3(VAR_13, VAR_3, VAR_13->regs[5]);
 }


 VAR_14 = VAR_11->regs[14];
 VAR_15 = VAR_14;
 if (VAR_10 & VAR_6)
  VAR_15 |= VAR_1;
 else
  VAR_15 &= ~VAR_1;
 if (VAR_15 != VAR_14) {
  VAR_11->regs[14] = VAR_15;
  FUNC_3(VAR_11, VAR_2, VAR_11->regs[14]);
 }
 FUNC_1(&VAR_12->zlock);
}
