
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_5__ {TYPE_1__* dram; } ;
struct TYPE_4__ {int isr; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 TYPE_2__* VAR_3 ;
 unsigned char VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned char FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,char*,int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct uart_port *VAR_9)
{
 unsigned char VAR_10;
 unsigned int VAR_11;

 FUNC_1(VAR_3, "GET_MODEM", 0);

 VAR_10 = FUNC_0(&VAR_3->dram->isr);

 VAR_11 = ((VAR_10 & VAR_1) ? VAR_5 : 0)
     | ((VAR_10 & VAR_4) ? VAR_8 : 0)
     | ((VAR_10 & VAR_2) ? VAR_7 : 0)
     | ((VAR_10 & VAR_0) ? VAR_6 : 0);
 return VAR_11;
}
