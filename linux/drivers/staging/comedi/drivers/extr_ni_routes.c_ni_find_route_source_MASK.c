
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ni_route_tables {int route_values; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int,int) ;
 scalar_t__ FUNC_2 (int const) ;

int FUNC_3(const u8 VAR_3, int VAR_4,
    const struct ni_route_tables *VAR_5)
{
 int VAR_6;

 VAR_4 = FUNC_0(VAR_4);

 if (VAR_4 < 0 || VAR_4 >= VAR_2)
  return -VAR_0;
 for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6)
  if (FUNC_1(VAR_5->route_values, VAR_6, VAR_4) ==
      FUNC_2(VAR_3))
   return VAR_6 + VAR_1;
 return -VAR_0;
}
