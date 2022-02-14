
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ni_route_tables {int * route_values; TYPE_1__* valid_routes; } ;
struct ni_route_set {int n_src; int* src; int dest; } ;
struct TYPE_2__ {int n_route_sets; struct ni_route_set* routes; } ;


 int FUNC_0 (int const) ;
 int const VAR_0 ;
 int const FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int const*,int ,int ) ;
 scalar_t__ FUNC_3 (int const) ;
 unsigned int FUNC_4 (struct ni_route_tables const*) ;

unsigned int FUNC_5(const struct ni_route_tables *VAR_1,
     unsigned int VAR_2,
     unsigned int *VAR_3)
{
 unsigned int VAR_4 = FUNC_4(VAR_1);
 int VAR_5;

 if (VAR_2 == 0 || VAR_4 == 0)
  return VAR_4;

 if (!VAR_3)
  return 0;

 VAR_4 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_1->valid_routes->n_route_sets; ++VAR_5) {
  const struct ni_route_set *VAR_6 = &VAR_1->valid_routes->routes[VAR_5];
  int VAR_7;

  for (VAR_7 = 0; VAR_7 < VAR_6->n_src; ++VAR_7) {
   const int VAR_8 = VAR_6->src[VAR_7];
   const int VAR_9 = VAR_6->dest;
   bool VAR_10 = 0;
   const u8 *VAR_11 = VAR_1->route_values;

   if (FUNC_2(VAR_11, FUNC_0(VAR_8), FUNC_0(VAR_9)))

    VAR_10 = 1;
   else if (FUNC_3(VAR_9) &&
     (FUNC_2(VAR_11, FUNC_0(VAR_8), FUNC_0(VAR_0)) ||
      FUNC_2(VAR_11, FUNC_0(VAR_8), FUNC_0(FUNC_1(0))) ||
      FUNC_2(VAR_11, FUNC_0(VAR_8), FUNC_0(FUNC_1(1))) ||
      FUNC_2(VAR_11, FUNC_0(VAR_8), FUNC_0(FUNC_1(2))) ||
      FUNC_2(VAR_11, FUNC_0(VAR_8), FUNC_0(FUNC_1(3))))) {

    VAR_10 = 1;
   }

   if (VAR_10) {
    VAR_3[2 * VAR_4] = VAR_8;
    VAR_3[2 * VAR_4 + 1] = VAR_9;
    ++VAR_4;
   }

   if (VAR_4 >= VAR_2)
    return VAR_4;
  }
 }
 return VAR_4;
}
