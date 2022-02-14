
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int temperature; int last_temperature; int status; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int
FUNC_3(struct il_priv *VAR_2)
{
 int VAR_3;

 if (!FUNC_2(VAR_1, &VAR_2->status)) {
  FUNC_1("Temperature not updated -- no stats.\n");
  return 0;
 }

 VAR_3 = VAR_2->temperature - VAR_2->last_temperature;


 if (VAR_3 < 0) {
  FUNC_0("Getting cooler, delta %d\n", VAR_3);
  VAR_3 = -VAR_3;
 } else if (VAR_3 == 0)
  FUNC_0("Temperature unchanged\n");
 else
  FUNC_0("Getting warmer, delta %d\n", VAR_3);

 if (VAR_3 < VAR_0) {
  FUNC_0(" => thermal txpower calib not needed\n");
  return 0;
 }

 FUNC_0(" => thermal txpower calib needed\n");

 return 1;
}
