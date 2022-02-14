
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_bulk_data {char* supply; } ;
struct device_node {int dummy; } ;


 int * FUNC_0 (struct device_node*,char*,int *) ;
 int FUNC_1 (char*,int,char*,char*) ;

__attribute__((used)) static bool FUNC_2(struct device_node *VAR_0,
     struct regulator_bulk_data *VAR_1,
     unsigned int VAR_2)
{
 char VAR_3[32];
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  FUNC_1(VAR_3, 32, "%s-supply", VAR_1[VAR_4].supply);

  if (FUNC_0(VAR_0, VAR_3, ((void*)0)) == ((void*)0))
   return 0;
 }

 return 1;
}
