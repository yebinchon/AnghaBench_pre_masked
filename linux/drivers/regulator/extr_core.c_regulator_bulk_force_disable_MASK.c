
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_bulk_data {int ret; int consumer; } ;


 int FUNC_0 (int ) ;

int FUNC_1(int VAR_0,
      struct regulator_bulk_data *VAR_1)
{
 int VAR_2;
 int VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_1[VAR_2].ret =
       FUNC_0(VAR_1[VAR_2].consumer);


  if (VAR_1[VAR_2].ret && !VAR_3)
   VAR_3 = VAR_1[VAR_2].ret;
 }

 return VAR_3;
}
