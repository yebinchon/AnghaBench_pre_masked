
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_device_routes {int n_route_sets; TYPE_1__* routes; } ;
struct TYPE_2__ {int dest; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(const struct ni_device_routes *VAR_1)
{
 int VAR_2;
 int VAR_3 = VAR_0 - 1;

 for (VAR_2 = 0; VAR_2 < VAR_1->n_route_sets; ++VAR_2) {
  if (VAR_3 >= VAR_1->routes[VAR_2].dest)
   return 0;
  VAR_3 = VAR_1->routes[VAR_2].dest;
 }
 return 1;
}
