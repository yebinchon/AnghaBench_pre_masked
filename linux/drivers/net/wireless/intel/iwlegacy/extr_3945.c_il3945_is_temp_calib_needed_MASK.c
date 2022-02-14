
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int temperature; int last_temperature; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct il_priv*) ;

__attribute__((used)) static int
FUNC_2(struct il_priv *VAR_1)
{
 int VAR_2;

 VAR_1->temperature = FUNC_1(VAR_1);
 VAR_2 = VAR_1->temperature - VAR_1->last_temperature;


 if (VAR_2 < 0) {
  FUNC_0("Getting cooler, delta %d,\n", VAR_2);
  VAR_2 = -VAR_2;
 } else if (VAR_2 == 0)
  FUNC_0("Same temp,\n");
 else
  FUNC_0("Getting warmer, delta %d,\n", VAR_2);


 if (VAR_2 < VAR_0) {
  FUNC_0("Timed thermal calib not needed\n");
  return 0;
 }

 FUNC_0("Timed thermal calib needed\n");



 VAR_1->last_temperature = VAR_1->temperature;
 return 1;
}
