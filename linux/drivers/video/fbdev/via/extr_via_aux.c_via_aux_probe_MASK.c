
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_aux_bus {int drivers; struct i2c_adapter* adap; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct via_aux_bus* FUNC_1 (int,int ) ;
 int FUNC_2 (struct via_aux_bus*) ;
 int FUNC_3 (struct via_aux_bus*) ;
 int FUNC_4 (struct via_aux_bus*) ;
 int FUNC_5 (struct via_aux_bus*) ;
 int FUNC_6 (struct via_aux_bus*) ;
 int FUNC_7 (struct via_aux_bus*) ;
 int FUNC_8 (struct via_aux_bus*) ;
 int FUNC_9 (struct via_aux_bus*) ;
 int FUNC_10 (struct via_aux_bus*) ;

struct via_aux_bus *FUNC_11(struct i2c_adapter *VAR_1)
{
 struct via_aux_bus *VAR_2;

 if (!VAR_1)
  return ((void*)0);

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->adap = VAR_1;
 FUNC_0(&VAR_2->drivers);

 FUNC_3(VAR_2);
 FUNC_10(VAR_2);
 FUNC_9(VAR_2);
 FUNC_8(VAR_2);
 FUNC_7(VAR_2);
 FUNC_6(VAR_2);
 FUNC_5(VAR_2);
 FUNC_4(VAR_2);
 FUNC_2(VAR_2);

 return VAR_2;
}
