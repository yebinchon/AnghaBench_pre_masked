
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int ** VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_4)
{
 int VAR_5;

 FUNC_3(&VAR_4->dev.kobj, &VAR_3);


 FUNC_1(&VAR_0);
 if (--VAR_1 == 0) {
  for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
   FUNC_0(VAR_2[VAR_5]);
   VAR_2[VAR_5] = ((void*)0);
  }
 }
 FUNC_2(&VAR_0);

 return 0;
}
