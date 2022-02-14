
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ec_response_charge_port_count {int port_count; } ;
struct charger_data {int dev; } ;
typedef int resp ;


 int VAR_0 ;
 int FUNC_0 (struct charger_data*,int ,int ,int *,int ,struct ec_response_charge_port_count*,int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct charger_data *VAR_1)
{
 struct ec_response_charge_port_count VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, 0,
         VAR_0,
         ((void*)0), 0, &VAR_2, sizeof(VAR_2));
 if (VAR_3 < 0) {
  FUNC_1(VAR_1->dev,
   "Unable to get the number of ports (err:0x%x)\n", VAR_3);
  return VAR_3;
 }

 return VAR_2.port_count;
}
