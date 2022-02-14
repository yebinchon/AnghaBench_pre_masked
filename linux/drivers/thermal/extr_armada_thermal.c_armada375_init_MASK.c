
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dummy; } ;
struct armada_thermal_priv {int syscon; struct armada_thermal_data* data; } ;
struct armada_thermal_data {int syscon_control1_off; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_4,
      struct armada_thermal_priv *VAR_5)
{
 struct armada_thermal_data *VAR_6 = VAR_5->data;
 u32 VAR_7;

 FUNC_1(VAR_5->syscon, VAR_6->syscon_control1_off, &VAR_7);
 VAR_7 &= ~(VAR_2 << VAR_3);
 VAR_7 &= ~VAR_1;
 VAR_7 &= ~VAR_0;
 FUNC_2(VAR_5->syscon, VAR_6->syscon_control1_off, VAR_7);

 FUNC_0(20);

 VAR_7 |= VAR_0;
 FUNC_2(VAR_5->syscon, VAR_6->syscon_control1_off, VAR_7);

 FUNC_0(50);
}
