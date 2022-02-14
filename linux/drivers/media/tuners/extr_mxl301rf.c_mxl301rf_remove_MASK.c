
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* fe; } ;
struct mxl301rf_state {TYPE_2__ cfg; } ;
struct i2c_client {int dummy; } ;
struct TYPE_3__ {int * tuner_priv; } ;


 struct mxl301rf_state* FUNC_0 (int ) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct mxl301rf_state*) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0)
{
 struct mxl301rf_state *VAR_1;

 VAR_1 = FUNC_0(FUNC_1(VAR_0));
 VAR_1->cfg.fe->tuner_priv = ((void*)0);
 FUNC_2(VAR_1);
 return 0;
}
