
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_route_set {int dummy; } ;
struct ni_device_routes {int n_route_sets; int routes; } ;


 int VAR_0 ;
 struct ni_route_set const* FUNC_0 (int const*,int ,int ,int,int ) ;

const struct ni_route_set *
FUNC_1(const int VAR_1,
    const struct ni_device_routes *VAR_2)
{
 return FUNC_0(&VAR_1, VAR_2->routes,
         VAR_2->n_route_sets, sizeof(struct ni_route_set),
         VAR_0);
}
