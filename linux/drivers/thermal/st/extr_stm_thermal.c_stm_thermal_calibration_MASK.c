
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm_thermal_sensor {scalar_t__ base; int clk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct stm_thermal_sensor *VAR_10)
{
 u32 VAR_11, VAR_12;
 u32 VAR_13;


 VAR_12 = FUNC_0(VAR_10->clk);
 if (!VAR_12)
  return -VAR_2;

 VAR_13 = 0;
 VAR_12 /= VAR_6;
 if (VAR_12) {
  while (VAR_13 <= VAR_12)
   VAR_13++;
 }

 VAR_11 = FUNC_1(VAR_10->base + VAR_1);


 VAR_11 &= ~VAR_3;


 VAR_11 |= (VAR_13 << VAR_4);


 VAR_11 &= ~VAR_7;


 VAR_11 |= VAR_9;


 VAR_11 &= ~VAR_0;


 VAR_11 &= ~VAR_8;
 VAR_11 |= VAR_5;

 FUNC_2(VAR_11, VAR_10->base + VAR_1);

 return 0;
}
