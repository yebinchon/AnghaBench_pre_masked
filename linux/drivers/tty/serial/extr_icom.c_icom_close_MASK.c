
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_8__ {TYPE_2__* adapter; TYPE_1__* dram; } ;
struct TYPE_7__ {int kref; } ;
struct TYPE_6__ {int CmdReg; } ;


 unsigned char VAR_0 ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 unsigned char FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,char*,int ) ;
 int FUNC_4 (unsigned char,int *) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_3)
{
 unsigned char VAR_4;

 FUNC_3(VAR_1, "CLOSE", 0);


 VAR_4 = FUNC_1(&VAR_1->dram->CmdReg);
 FUNC_4(VAR_4 & ~VAR_0, &VAR_1->dram->CmdReg);

 FUNC_2(VAR_1);

 FUNC_0(&VAR_1->adapter->kref, VAR_2);
}
