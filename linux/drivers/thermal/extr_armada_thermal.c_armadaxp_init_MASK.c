
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dummy; } ;
struct armada_thermal_priv {int syscon; struct armada_thermal_data* data; } ;
struct armada_thermal_data {int syscon_status_off; int syscon_control1_off; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct platform_device *VAR_5,
     struct armada_thermal_priv *VAR_6)
{
 struct armada_thermal_data *VAR_7 = VAR_6->data;
 u32 VAR_8;

 FUNC_0(VAR_6->syscon, VAR_7->syscon_control1_off, &VAR_8);
 VAR_8 |= VAR_0;


 VAR_8 &= ~VAR_1;
 VAR_8 |= (0xf1 << VAR_2);


 VAR_8 |= VAR_3;

 FUNC_1(VAR_6->syscon, VAR_7->syscon_control1_off, VAR_8);


 FUNC_0(VAR_6->syscon, VAR_7->syscon_status_off, &VAR_8);
 VAR_8 &= ~VAR_4;
 FUNC_1(VAR_6->syscon, VAR_7->syscon_status_off, VAR_8);
}
