
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dummy; } ;
struct armada_thermal_priv {int syscon; struct armada_thermal_data* data; } ;
struct armada_thermal_data {int syscon_control0_off; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct platform_device *VAR_6,
         struct armada_thermal_priv *VAR_7)
{
 struct armada_thermal_data *VAR_8 = VAR_7->data;
 u32 VAR_9;

 FUNC_0(VAR_7->syscon, VAR_8->syscon_control0_off, &VAR_9);
 VAR_9 &= ~VAR_4;
 VAR_9 |= VAR_5 | VAR_1;


 VAR_9 |= VAR_2 << VAR_3;


 VAR_9 &= ~VAR_0;

 FUNC_1(VAR_7->syscon, VAR_8->syscon_control0_off, VAR_9);
}
