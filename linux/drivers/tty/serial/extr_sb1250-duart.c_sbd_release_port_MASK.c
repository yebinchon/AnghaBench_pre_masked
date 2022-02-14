
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int mapbase; int * membase; } ;
struct sbd_port {int * memctrl; struct sbd_duart* duart; } ;
struct sbd_duart {int mapctrl; int map_guard; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 struct sbd_port* FUNC_3 (struct uart_port*) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_1)
{
 struct sbd_port *VAR_2 = FUNC_3(VAR_1);
 struct sbd_duart *VAR_3 = VAR_2->duart;

 FUNC_0(VAR_2->memctrl);
 VAR_2->memctrl = ((void*)0);
 FUNC_0(VAR_1->membase);
 VAR_1->membase = ((void*)0);

 if(FUNC_1(&VAR_3->map_guard))
  FUNC_2(VAR_3->mapctrl, VAR_0);
 FUNC_2(VAR_1->mapbase, VAR_0);
}
