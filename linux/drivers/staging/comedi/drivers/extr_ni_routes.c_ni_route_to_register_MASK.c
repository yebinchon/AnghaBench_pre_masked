
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ni_route_tables {int * route_values; int valid_routes; } ;
struct ni_route_set {int dummy; } ;
typedef int s8 ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int) ;
 int const VAR_0 ;
 int const FUNC_2 (int) ;
 int FUNC_3 (int const*,int ,int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int const) ;
 struct ni_route_set* FUNC_6 (int const,int ) ;
 int FUNC_7 (struct ni_route_set const*,int const) ;

s8 FUNC_8(const int VAR_1, const int VAR_2,
   const struct ni_route_tables *VAR_3)
{
 const struct ni_route_set *VAR_4 =
  FUNC_6(VAR_2, VAR_3->valid_routes);
 const u8 *VAR_5;
 s8 VAR_6;


 if (!VAR_4)
  return -1;

 if (!FUNC_7(VAR_4, VAR_1))
  return -1;





 VAR_5 = VAR_3->route_values;
 VAR_6 = FUNC_3(VAR_5, FUNC_0(VAR_1), FUNC_0(VAR_2));





 if (!VAR_6 && FUNC_5(VAR_2)) {
  VAR_6 = FUNC_3(VAR_5, FUNC_0(VAR_1), FUNC_0(VAR_0));
  if (!VAR_6 && (FUNC_3(VAR_5, FUNC_0(VAR_1), FUNC_0(FUNC_2(0))) ||
    FUNC_3(VAR_5, FUNC_0(VAR_1), FUNC_0(FUNC_2(1))) ||
    FUNC_3(VAR_5, FUNC_0(VAR_1), FUNC_0(FUNC_2(2))) ||
    FUNC_3(VAR_5, FUNC_0(VAR_1), FUNC_0(FUNC_2(3)))))
   VAR_6 = FUNC_1(6);
 }

 if (!VAR_6)
  return -1;

 return FUNC_4(VAR_6);
}
