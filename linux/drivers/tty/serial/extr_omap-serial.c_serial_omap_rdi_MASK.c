
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rx; } ;
struct TYPE_5__ {TYPE_1__ icount; } ;
struct uart_omap_port {TYPE_2__ port; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char FUNC_0 (struct uart_omap_port*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,unsigned char) ;
 int FUNC_2 (TYPE_2__*,unsigned int,int ,unsigned char,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct uart_omap_port *VAR_4, unsigned int VAR_5)
{
 unsigned char VAR_6 = 0;
 unsigned int VAR_7;

 if (!(VAR_5 & VAR_1))
  return;

 VAR_6 = FUNC_0(VAR_4, VAR_3);
 VAR_7 = VAR_0;
 VAR_4->port.icount.rx++;

 if (FUNC_1(&VAR_4->port, VAR_6))
  return;

 FUNC_2(&VAR_4->port, VAR_5, VAR_2, VAR_6, VAR_7);
}
