
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uart_port {int lock; } ;
struct TYPE_5__ {TYPE_1__* dram; } ;
struct TYPE_4__ {int CmdReg; } ;


 unsigned char VAR_0 ;
 TYPE_2__* VAR_1 ;
 unsigned char FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (TYPE_2__*,char*,int ) ;
 int FUNC_4 (unsigned char,int *) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_2, int VAR_3)
{
 unsigned char VAR_4;
 unsigned long VAR_5;

 FUNC_1(&VAR_2->lock, VAR_5);
 FUNC_3(VAR_1, "BREAK", 0);
 VAR_4 = FUNC_0(&VAR_1->dram->CmdReg);
 if (VAR_3 == -1) {
  FUNC_4(VAR_4 | VAR_0, &VAR_1->dram->CmdReg);
 } else {
  FUNC_4(VAR_4 & ~VAR_0, &VAR_1->dram->CmdReg);
 }
 FUNC_2(&VAR_2->lock, VAR_5);
}
