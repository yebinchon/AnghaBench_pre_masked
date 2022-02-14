
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_route_tables {int dummy; } ;
struct TYPE_2__ {struct ni_route_tables routing_tables; } ;


 unsigned int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct ni_route_tables const*,int,unsigned int*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 (int,char*) ;

void FUNC_4(void)
{
 const struct ni_route_tables *VAR_1 = &VAR_0.routing_tables;
 unsigned int VAR_2[2];

 FUNC_1();
 FUNC_3(FUNC_2(VAR_1, 0, ((void*)0)) == 57,
   "count all valid routes through ni_get_valid_routes\n");

 FUNC_3(FUNC_2(VAR_1, 1, VAR_2) == 1,
   "copied first valid route from ni_get_valid_routes\n");
 FUNC_3(VAR_2[0] == FUNC_0(1),
   "source of first valid pair from ni_get_valid_routes\n");
 FUNC_3(VAR_2[1] == FUNC_0(0),
   "destination of first valid pair from ni_get_valid_routes\n");
}
