
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_route_tables {int dummy; } ;
struct TYPE_2__ {struct ni_route_tables routing_tables; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct ni_route_tables const*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int,char*) ;

void FUNC_3(void)
{
 const struct ni_route_tables *VAR_1 = &VAR_0.routing_tables;

 FUNC_0();
 FUNC_2(FUNC_1(VAR_1) == 57, "count all valid routes\n");
}
