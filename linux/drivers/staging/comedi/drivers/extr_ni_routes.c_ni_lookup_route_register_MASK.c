
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_route_tables {int route_values; } ;
typedef int s8 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ) ;

s8 FUNC_3(int VAR_2, int VAR_3,
       const struct ni_route_tables *VAR_4)
{
 s8 VAR_5;





 VAR_2 = FUNC_0(VAR_2);
 VAR_3 = FUNC_0(VAR_3);
 if (VAR_2 < 0 || VAR_2 >= VAR_1 || VAR_3 < 0 || VAR_3 >= VAR_1)
  return -VAR_0;
 VAR_5 = FUNC_1(VAR_4->route_values, VAR_2, VAR_3);
 if (!VAR_5)
  return -VAR_0;

 return FUNC_2(VAR_5);
}
