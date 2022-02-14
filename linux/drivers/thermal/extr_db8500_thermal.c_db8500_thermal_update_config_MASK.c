
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct db8500_thermal_zone {unsigned int cur_index; unsigned long interpolated_temp; int trend; } ;
typedef enum thermal_trend { ____Placeholder_thermal_trend } thermal_trend ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct db8500_thermal_zone *VAR_1,
      unsigned int VAR_2,
      enum thermal_trend VAR_3,
      unsigned long VAR_4,
      unsigned long VAR_5)
{
 FUNC_2();

 VAR_1->cur_index = VAR_2;
 VAR_1->interpolated_temp = (VAR_4 + VAR_5)/2;
 VAR_1->trend = VAR_3;





 FUNC_0((u8)(VAR_4/1000), (u8)(VAR_5/1000));
 FUNC_1(VAR_0);
}
