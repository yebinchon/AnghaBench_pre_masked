
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_bulk_data {int ret; int consumer; int supply; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct regulator_bulk_data*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;

int FUNC_5(int VAR_2,
     struct regulator_bulk_data *VAR_3)
{
 FUNC_0(VAR_0);
 int VAR_4;
 int VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  FUNC_1(VAR_1,
          &VAR_3[VAR_4], &VAR_0);
 }

 FUNC_2(&VAR_0);


 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (VAR_3[VAR_4].ret != 0) {
   VAR_5 = VAR_3[VAR_4].ret;
   goto err;
  }
 }

 return 0;

err:
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (VAR_3[VAR_4].ret < 0)
   FUNC_3("Failed to enable %s: %d\n", VAR_3[VAR_4].supply,
          VAR_3[VAR_4].ret);
  else
   FUNC_4(VAR_3[VAR_4].consumer);
 }

 return VAR_5;
}
