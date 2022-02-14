
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct ds2482_data {int w1_count; TYPE_1__* w1_ch; } ;
struct TYPE_2__ {int w1_bm; int * pdev; } ;


 struct ds2482_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct ds2482_data*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0)
{
 struct ds2482_data *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_1->w1_count; VAR_2++) {
  if (VAR_1->w1_ch[VAR_2].pdev != ((void*)0))
   FUNC_2(&VAR_1->w1_ch[VAR_2].w1_bm);
 }


 FUNC_1(VAR_1);
 return 0;
}
