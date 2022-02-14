
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm_thermal_sensor {int th_dev; scalar_t__ base; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_6, void *VAR_7)
{
 u32 VAR_8;
 struct stm_thermal_sensor *VAR_9 = VAR_7;


 VAR_8 = FUNC_0(VAR_9->base + VAR_1);

 if ((VAR_8 & VAR_4) == VAR_4)
  FUNC_2(VAR_4, VAR_9->base + VAR_0);

 if ((VAR_8 & VAR_2) == VAR_2)
  FUNC_2(VAR_2, VAR_9->base + VAR_0);

 FUNC_1(VAR_9->th_dev, VAR_5);

 return VAR_3;
}
