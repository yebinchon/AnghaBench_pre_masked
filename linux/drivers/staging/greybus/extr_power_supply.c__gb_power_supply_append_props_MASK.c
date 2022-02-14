
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_power_supply {int serial_number; int model_name; int manufacturer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gb_power_supply*,int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct gb_power_supply *VAR_3)
{
 if (FUNC_1(VAR_3->manufacturer))
  FUNC_0(VAR_3, VAR_0);
 if (FUNC_1(VAR_3->model_name))
  FUNC_0(VAR_3, VAR_1);
 if (FUNC_1(VAR_3->serial_number))
  FUNC_0(VAR_3, VAR_2);
}
