
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,char*) ;
 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;

int FUNC_5(void)
{
 FILE *VAR_2 = FUNC_3("ni_values.py", "w");


 FUNC_4(VAR_2, "ni_route_values = {\n");
 for (int VAR_3 = 0; VAR_0[VAR_3]; ++VAR_3)
  FUNC_1(VAR_0[VAR_3], VAR_2);
 FUNC_4(VAR_2, "}\n\n");


 FUNC_4(VAR_2, "ni_device_routes = {\n");
 for (int VAR_4 = 0; VAR_1[VAR_4]; ++VAR_4)
  FUNC_0(VAR_1[VAR_4], VAR_2);
 FUNC_4(VAR_2, "}\n");


 FUNC_2(VAR_2);
 return 0;
}
