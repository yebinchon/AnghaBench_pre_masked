
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dummy; } ;
struct armada_thermal_priv {int syscon; struct armada_thermal_data* data; } ;
struct armada_thermal_data {int syscon_control1_off; int syscon_control0_off; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct platform_device*,struct armada_thermal_priv*) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_3,
         struct armada_thermal_priv *VAR_4)
{
 struct armada_thermal_data *VAR_5 = VAR_4->data;
 u32 VAR_6;

 FUNC_0(VAR_3, VAR_4);


 FUNC_1(VAR_4->syscon, VAR_5->syscon_control0_off, &VAR_6);
 VAR_6 |= VAR_0 << VAR_1;
 FUNC_2(VAR_4->syscon, VAR_5->syscon_control0_off, VAR_6);


 FUNC_1(VAR_4->syscon, VAR_5->syscon_control1_off, &VAR_6);
 VAR_6 &= ~VAR_2;
 VAR_6 |= 1;
 FUNC_2(VAR_4->syscon, VAR_5->syscon_control1_off, VAR_6);
}
