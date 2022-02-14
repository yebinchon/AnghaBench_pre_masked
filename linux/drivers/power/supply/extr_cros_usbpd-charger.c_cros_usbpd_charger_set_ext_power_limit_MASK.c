
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct ec_params_external_power_limit_v1 {void* voltage_lim; void* current_lim; } ;
struct charger_data {int dev; } ;
typedef int req ;


 int VAR_0 ;
 int FUNC_0 (struct charger_data*,int ,int ,struct ec_params_external_power_limit_v1*,int,int *,int ) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct charger_data *VAR_1,
        u16 VAR_2,
        u16 VAR_3)
{
 struct ec_params_external_power_limit_v1 VAR_4;
 int VAR_5;

 VAR_4.current_lim = VAR_2;
 VAR_4.voltage_lim = VAR_3;

 VAR_5 = FUNC_0(VAR_1, 0,
         VAR_0,
         &VAR_4, sizeof(VAR_4), ((void*)0), 0);
 if (VAR_5 < 0)
  FUNC_1(VAR_1->dev,
   "Unable to set the 'External Power Limit': %d\n", VAR_5);

 return VAR_5;
}
