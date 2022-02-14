
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_bulk_data {int supply; int consumer; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(int VAR_0,
      struct regulator_bulk_data *VAR_1)
{
 int VAR_2;
 int VAR_3, VAR_4;

 for (VAR_2 = VAR_0 - 1; VAR_2 >= 0; --VAR_2) {
  VAR_3 = FUNC_1(VAR_1[VAR_2].consumer);
  if (VAR_3 != 0)
   goto err;
 }

 return 0;

err:
 FUNC_0("Failed to disable %s: %d\n", VAR_1[VAR_2].supply, VAR_3);
 for (++VAR_2; VAR_2 < VAR_0; ++VAR_2) {
  VAR_4 = FUNC_2(VAR_1[VAR_2].consumer);
  if (VAR_4 != 0)
   FUNC_0("Failed to re-enable %s: %d\n",
          VAR_1[VAR_2].supply, VAR_4);
 }

 return VAR_3;
}
