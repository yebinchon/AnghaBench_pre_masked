
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct surface3_button_data {scalar_t__* children; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 struct surface3_button_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_1)
{
 struct surface3_button_data *VAR_2 = FUNC_0(VAR_1);

 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_2->children[VAR_3])
   FUNC_1(VAR_2->children[VAR_3]);

 return 0;
}
