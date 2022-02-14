
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm_thermal_sensor {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__,int,int,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct stm_thermal_sensor *VAR_7)
{
 int VAR_8;
 u32 VAR_9;


 VAR_9 = FUNC_1(VAR_7->base + VAR_0);
 VAR_9 |= VAR_4;
 FUNC_2(VAR_9, VAR_7->base + VAR_0);






 VAR_8 = FUNC_0(VAR_7->base + VAR_1,
     VAR_9, (VAR_9 & VAR_6),
     VAR_3, VAR_2);
 if (VAR_8)
  return VAR_8;


 VAR_9 = FUNC_1(VAR_7->base +
         VAR_0);
 VAR_9 |= VAR_5;
 FUNC_2(VAR_9, VAR_7->base +
         VAR_0);

 return 0;
}
