
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pismo_data {int * dev; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int *) ;
 struct pismo_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct pismo_data*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct pismo_data *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->dev); VAR_2++)
  FUNC_3(VAR_1->dev[VAR_2]);

 FUNC_2(VAR_1);

 return 0;
}
