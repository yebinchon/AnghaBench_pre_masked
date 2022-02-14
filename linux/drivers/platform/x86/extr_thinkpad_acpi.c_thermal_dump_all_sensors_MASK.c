
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibm_thermal_sensors_struct {int* temp; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct ibm_thermal_sensors_struct*) ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_1, VAR_2;
 struct ibm_thermal_sensors_struct VAR_3;

 VAR_1 = FUNC_2(&VAR_3);
 if (VAR_1 <= 0)
  return;

 FUNC_1("temperatures (Celsius):");

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (VAR_3.temp[VAR_2] != VAR_0)
   FUNC_0(" %d", (int)(VAR_3.temp[VAR_2] / 1000));
  else
   FUNC_0(" N/A");
 }

 FUNC_0("\n");
}
