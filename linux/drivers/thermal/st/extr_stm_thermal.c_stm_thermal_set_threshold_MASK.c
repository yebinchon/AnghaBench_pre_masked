
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm_thermal_sensor {scalar_t__ base; int low_temp; scalar_t__ low_temp_enabled; int high_temp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct stm_thermal_sensor*,int ,int*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct stm_thermal_sensor *VAR_4)
{
 u32 VAR_5, VAR_6;
 int VAR_7;

 VAR_5 = FUNC_0(VAR_4->base + VAR_0);


 VAR_5 &= ~(VAR_3 | VAR_1);


 VAR_7 = FUNC_1(VAR_4, VAR_4->high_temp, &VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_5 |= VAR_6 & VAR_3;

 if (VAR_4->low_temp_enabled) {

  VAR_7 = FUNC_1(VAR_4, VAR_4->low_temp,
            &VAR_6);
  if (VAR_7)
   return VAR_7;

  VAR_5 |= (VAR_1 & (VAR_6 << VAR_2));
 }


 FUNC_2(VAR_5, VAR_4->base + VAR_0);

 return 0;
}
