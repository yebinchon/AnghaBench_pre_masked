
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_power_supply {int props; int props_raw; int manufacturer; int model_name; int serial_number; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct gb_power_supply *VAR_0)
{
 FUNC_0(VAR_0->serial_number);
 FUNC_0(VAR_0->model_name);
 FUNC_0(VAR_0->manufacturer);
 FUNC_0(VAR_0->props_raw);
 FUNC_0(VAR_0->props);
}
