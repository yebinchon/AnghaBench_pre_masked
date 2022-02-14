
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int mapbase; int * membase; } ;
struct dz_mux {int map_guard; } ;
struct TYPE_2__ {struct dz_mux* mux; } ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 TYPE_1__* FUNC_3 (struct uart_port*) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_1)
{
 struct dz_mux *VAR_2 = FUNC_3(VAR_1)->mux;
 int VAR_3;

 FUNC_1(VAR_1->membase);
 VAR_1->membase = ((void*)0);

 VAR_3 = FUNC_0(-1, &VAR_2->map_guard);
 if (!VAR_3)
  FUNC_2(VAR_1->mapbase, VAR_0);
}
