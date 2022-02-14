
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_bulk_data {int * consumer; int supply; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*,int ) ;
 int FUNC_3 (struct device*,char*,int ,int) ;
 int * FUNC_4 (struct device*,int ) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct device *VAR_1, int VAR_2,
         struct regulator_bulk_data *VAR_3)
{
 int VAR_4;
 int VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  VAR_3[VAR_4].consumer = ((void*)0);

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3[VAR_4].consumer = FUNC_4(VAR_1,
            VAR_3[VAR_4].supply);
  if (FUNC_0(VAR_3[VAR_4].consumer)) {
   VAR_5 = FUNC_1(VAR_3[VAR_4].consumer);
   VAR_3[VAR_4].consumer = ((void*)0);
   goto err;
  }
 }

 return 0;

err:
 if (VAR_5 != -VAR_0)
  FUNC_3(VAR_1, "Failed to get supply '%s': %d\n",
   VAR_3[VAR_4].supply, VAR_5);
 else
  FUNC_2(VAR_1, "Failed to get supply '%s', deferring\n",
   VAR_3[VAR_4].supply);

 while (--VAR_4 >= 0)
  FUNC_5(VAR_3[VAR_4].consumer);

 return VAR_5;
}
