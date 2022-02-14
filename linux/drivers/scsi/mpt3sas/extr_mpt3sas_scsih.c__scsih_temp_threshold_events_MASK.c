
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct MPT3SAS_ADAPTER {scalar_t__ temp_sensors_count; } ;
struct TYPE_3__ {scalar_t__ SensorNum; int CurrentTemperature; int Status; } ;
typedef TYPE_1__ Mpi2EventDataTemperature_t ;


 int FUNC_0 (struct MPT3SAS_ADAPTER*,char*,char*,...) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct MPT3SAS_ADAPTER *VAR_0,
 Mpi2EventDataTemperature_t *VAR_1)
{
 if (VAR_0->temp_sensors_count >= VAR_1->SensorNum) {
  FUNC_0(VAR_0, "Temperature Threshold flags %s%s%s%s exceeded for Sensor: %d !!!\n",
   FUNC_1(VAR_1->Status) & 0x1 ? "0 " : " ",
   FUNC_1(VAR_1->Status) & 0x2 ? "1 " : " ",
   FUNC_1(VAR_1->Status) & 0x4 ? "2 " : " ",
   FUNC_1(VAR_1->Status) & 0x8 ? "3 " : " ",
   VAR_1->SensorNum);
  FUNC_0(VAR_0, "Current Temp In Celsius: %d\n",
   VAR_1->CurrentTemperature);
 }
}
