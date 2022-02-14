
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int name; } ;
struct TYPE_4__ {int * valid_routes; int * route_values; } ;
struct TYPE_5__ {TYPE_1__ routing_tables; } ;


 int VAR_0 ;
 int ** VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static void FUNC_1(void)
{
 VAR_2.name = VAR_3;
 FUNC_0();
 VAR_4.routing_tables.route_values = &VAR_1[0][0];
 VAR_4.routing_tables.valid_routes = &VAR_0;
}
