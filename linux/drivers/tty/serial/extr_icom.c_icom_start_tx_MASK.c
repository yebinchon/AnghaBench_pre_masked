
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_5__ {TYPE_1__* dram; } ;
struct TYPE_4__ {int CmdReg; } ;


 unsigned char VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct uart_port*) ;
 unsigned char FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,char*,int ) ;
 int FUNC_3 (unsigned char,int *) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_2)
{
 unsigned char VAR_3;

 FUNC_2(VAR_1, "START", 0);
 VAR_3 = FUNC_1(&VAR_1->dram->CmdReg);
 if ((VAR_3 & VAR_0) == VAR_0)
  FUNC_3(VAR_3 & ~VAR_0,
         &VAR_1->dram->CmdReg);

 FUNC_0(VAR_2);
}
